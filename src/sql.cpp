#include "sql.h"
#include "config.h"
#include "node.h"
#include "utils.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <ostream>
#include <queue>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

auto print = [](auto &remark, auto &v) {
  std::cout << remark << " :";
  for (auto n : v)
    std::cout << n << "|";
  std::cout << "\n";
};
std::string convert_to_string(int type) {
  std::string result;
  switch (type) {
  case CHAR:
    result = "CHAR";
    break;
  case INT:
    result = "INT";
    break;
  case DECIMAL:
    result = "DECIMAL";
    break;
  case GE:
    result = ">=";
    break;
  case GT:
    result = ">";
    break;
  case LT:
    result = "<";
    break;
  case LE:
    result = "<=";
    break;
  case E:
    result = "=";
    break;
  }
  return result;
}

std::string convert_to_string(cond *conditions) {
  if (conditions == nullptr)
    return "";
  else if (conditions->relation_type == AND) {
    // visit the left edge and the right edge then join it.
    std::string left = convert_to_string(conditions->left);
    std::string right = convert_to_string(conditions->right);
    return left + " AND " + right;
  } else if (conditions->relation_type == OR) {
    std::string left = convert_to_string(conditions->left);
    std::string right = convert_to_string(conditions->right);
    return left + " OR " + right;
  }
  return conditions->column_name + " " +
         convert_to_string(conditions->relation_type) + " " +
         std::to_string(conditions->number);
}

void get_to_table_in_catalog(std::fstream &file, std::string &table_name) {
  std::string line;
  // compare each line with the table name
  while (std::getline(file, line) and line.compare(table_name) != 0) {
    // skipping the column of the current table
    while (std::getline(file, line) and line[0] == ':')
      ;
    file.seekg((int)file.tellg() - line.length() - 1, file.beg);
  }
}

bool check_reference_exists(std::string &table_name, std::string &column_name,
                            int type, int length) {
  /*
  The table will be checked for the column and also the column must be a
  primary_key
  */
  std::fstream file(CATALOG_PATH, std::ios::in);
  std::string line;
  get_to_table_in_catalog(file, table_name);
  while (std::getline(file, line) and line[0] == ':') {

    std::vector<std::string> properties = tokenize(line, ":");
    if (properties[0].compare(column_name) == 0 and
        std::stoi(properties[1]) == type and
        std::stoi(properties[2]) == length and properties[3].compare("1\n"))
      return true;
    std::getline(file, line);
    std::getline(file, line);
    std::getline(file, line);
  }
  file.close();
  return false;
}
bool check_table(std::string &table_name) {

  std::ifstream file(PATH + table_name);
  return file.good();
}

// start of the writing the condition to the file

void write_condition(cond *conditions, std::fstream &file) {
  if (conditions == nullptr) {
    file << "#";
    return;
  }
  file << ":" << conditions->relation_type << " " << conditions->number;
  write_condition(conditions->left, file);
  write_condition(conditions->right, file);
}

int raise_foreign_key(col_list *cols, reference_list *refer_list) {
  /*
  returs:
      1 if error occured
      0 if no error occured
  */
  std::unordered_map<std::string, reference *> map;
  for (reference *refer : *refer_list)
    map.insert(std::make_pair(refer->referencing_attr, refer));
  for (col *column : *cols) {
    if (map.find(column->column_name) != map.end()) {
      // we have found a match
      column->referencing_tab = map[column->column_name]->table_name;
      column->referencing_col = map[column->column_name]->referenced_attr;
      map.erase(column->column_name);
    }
  }
  if (map.size() == 0)
    return 0;
  return 1;
}

void add_reference_attr(reference_list *refer_list) {
  std::unordered_map<std::string, std::unordered_set<std::string>> map;
  for (reference *refer : *refer_list)
    map[refer->table_name].insert(refer->referenced_attr);
}

int create_table(std::string &table_name, col_list *cols) {
  /* open the file in append mode , write the table_name into the file then the
     column_name
   file structure :
     table_name
     :column_name:type:length:is_primary_key
     ::constraints conditions
     ::referencing_table_name,referencing_column_name
     ::referenced_table_name,referenced_column_name:..
      1.line : general properties of columns
      2.line : the check constraints
      3.line : the table and column where this attribute is referencing .
      4.line : the table and column where this attribute is used as a reference
     .
  */
  std::fstream file(CATALOG_PATH, std::ios_base::app);
  if (!file)
    return 1;
  file << table_name << "\n";
  for (col *column : *cols) {
    col temp = *column;
    file << ":" << temp.column_name << ":" << temp.type << ":" << temp.length
         << ":" << temp.primary_key << "\n";
    file << ":";
    write_condition(temp.conditions, file);
    file << "\n";
    file << "::" << temp.referencing_tab << "," << temp.referencing_col << "\n";
    file << "::\n";
  }
  file.close();
  std::ofstream new_table(PATH + table_name);
  if (!new_table)
    return 1;
  new_table.close();
  return 0;
}

void makes_referenced_list(std::string &line, referenced_list &list) {
  /*
     takes the input string parses it and then returns the result in list
  */
  std::cout << line << "\n";
  std::vector<std::string> raw_referenced_list = tokenize(line, ":");
  std::vector<std::string> temp;

  for (std::string raw_referenced : raw_referenced_list) {
    temp = tokenize(raw_referenced, ",");
    referenced *new_referenced = new referenced(temp[0], temp[1]);
    list.push_back(new_referenced);
  }
}

cond *get_condition(std::string &line, std::string &table_name) {
  int16_t relation_type, number;
  cond *node;
  if (line[0] == '#') {
    line = line.substr(1);
    node = nullptr;
  } else if (line[0] == ':') {
    int position = 1;
    std::string number_str;
    while (std::isdigit(line[position]) or line[position] == '+' or
           line[position] == '-')
      number_str += line[position++];
    relation_type = std::stoi(number_str);
    number_str = "";
    position++;
    while (std::isdigit(line[position]) or line[position] == '+' or
           line[position] == '-')
      number_str += line[position++];
    number = std::stoi(number_str);
    line = line.substr(position);
    std::cout << line << "\n";
    node = new cond(relation_type, number, table_name);
    node->left = get_condition(line, table_name);
    node->right = get_condition(line, table_name);
  }
  return node;
}

col_list *get_table(std::string &table_name) {
  /*
  file structure :
    table_name
    :column_name:type:length:is_primary_key
    ::constraints conditions
    ::referencing_table_name,referencing_column_name
    ::referenced_table_name,referenced_column_name:..
     1.line : general properties of columns
     2.line : the check constraints
     3.line : the table and column where this attribute is referencing .
     4.line : the table and column where this attribute is used as a reference
   .
  */
  // bool flag = check_table(table_name);
  // if (!flag)
  //  return nullptr;
  std::fstream file(CATALOG_PATH, std::ios::in);
  std::string line;
  char temp;
  get_to_table_in_catalog(file, table_name);

  col_list *cols = new col_list;
  while (std::getline(file, line) && line[0] == ':') {
    // the line will contain the various info about the column

    col *new_column = new col();
    // this is for the properties rows in the columns
    std::vector<std::string> properties = tokenize(line, ":");

    new_column->column_name = properties[0];
    new_column->type = std::stoi(properties[1]);
    new_column->length = std::stoi(properties[2]);
    new_column->primary_key =
        std::stoi(properties[3]); // as the last character will contain new line
                                  // character which
                                  // needs to be not taken in tokenize
    std::cout << "after 1\n";
    file.get(temp);
    std::getline(file, line);
    std::cout << line << "\n";

    new_column->conditions = get_condition(line, new_column->column_name);

    // this is for the attribute which is referenced by the current
    // attribute
    std::cout << "after 2\n";
    file.get(temp);
    file.get(temp);
    std::getline(file, line);
    properties = tokenize(line, ",");
    if (properties.size() == 2) {
      std::cout << "inside the properties\n";
      new_column->referencing_tab = properties[0];
      new_column->referencing_col =
          properties[1].substr(properties[1].length() - 1);
    }
    // this is for the attribute which are taking the refernece from this
    // attribute
    std::cout << "outside the reference part\n";
    file.get(temp);
    file.get(temp);
    std::getline(file, line);
    referenced_list list;
    if (!line.empty())
      makes_referenced_list(line, list);
    new_column->referenced_list = list;
    cols->push_back(new_column);
    std::cout << "end of while loop\n";
  }
  return cols;
}

int raise_primary_key(col_list *cols,
                      std::vector<std::string *> *column_names) {
  /*
      @returns
      1 : if column not found
      0 : if every column is found in the cols
  */
  std::unordered_set<std::string> set;
  for (std::string *col_name : *column_names)
    set.insert(*col_name);
  for (col *column : *cols)
    if (set.find(column->column_name) != set.end()) {
      column->primary_key = true;
      set.erase(column->column_name);
    }
  if (set.empty() == true)
    return 0;
  return 1;
}

void display_table(col_list *cols) {
  std::cout << "\n";
  std::cout.width(20);
  std::cout << "COLUMN NAME";
  std::cout.width(10);
  std::cout << "TYPE";
  std::cout.width(15);
  std::cout << "PRIMARY KEY";
  std::cout.width(50);
  std::cout << "CONDITIONS";
  std::cout.width(15);
  std::cout << "FOREIGN KEY";
  std::cout << "\n";

  for (col *column : *cols) {
    std::cout.width(20);
    std::cout << column->column_name;
    std::cout.width(10);
    std::cout << convert_to_string(column->type);
    std::cout.width(15);
    std::cout << column->primary_key;
    std::cout.width(50);
    std::cout << convert_to_string(column->conditions);
    std::cout.width(15);
    if (column->referencing_tab != "")
      std::cout << "1";
    else
      std::cout << "0";
    std::cout << "\n";
  }
  std::cout << "\n";
}
