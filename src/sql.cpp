#include "sql.h"
#include "config.h"
#include "node.h"
#include "utils.h"
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

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

void write_inorder(cond *condition, std::fstream &file) {
  if (condition != nullptr) {
    write_inorder(condition->left, file);
    file << ":" << condition->relation_type << "," << condition->number;
    write_inorder(condition->right, file);
  }
}
void write_postorder(cond *condition, std::fstream &file) {
  if (condition != nullptr) {
    write_inorder(condition->left, file);
    write_inorder(condition->right, file);
    file << ":" << condition->relation_type << "," << condition->number;
  }
}

void write_condition(cond *conditions, std::fstream &file) {
  file << ":";
  if (conditions == nullptr)
    file << ":";
  write_inorder(conditions, file);
  file << "&";
  write_postorder(conditions, file);
  file << "\n";
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
  std::fstream file(CATALOG_PATH, std::ios::ate);
  if (!file)
    return 1;
  file << table_name << "\n";
  for (col *column : *cols) {
    col temp = *column;
    file << ":" << temp.column_name << ":" << temp.type << ":" << temp.length
         << ":" << temp.primary_key << "\n";
    write_condition(temp.conditions, file);
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
  std::vector<std::string> raw_referenced_list = tokenize(line, ":");
  std::vector<std::string> temp;

  for (std::string raw_referenced : raw_referenced_list) {
    temp = tokenize(raw_referenced, ",");
    referenced *new_referenced = new referenced(temp[0], temp[1]);
    list.push_back(new_referenced);
  }
}

std::vector<cond *> make_cond_str_array(std::string &line) {
  std::vector<std::string> raw_list_cond = tokenize(line, ":");
  std::vector<std::string> temp;
  std::vector<cond *> result;
  for (std::string &raw_cond : raw_list_cond) {
    temp = tokenize(raw_cond, ",");
    cond *new_cond = new cond();
    new_cond->relation_type = std::stoi(temp[0]);
    new_cond->number = std::stoi(temp[1]);
    result.push_back(new_cond);
  }
  return result;
}

cond *buildtree(std::vector<cond *> &inorder, std::vector<cond *> &postorder,
                int in_str, int in_end, std::unordered_map<cond *, int> &map,
                int &index) {
  if (in_str > in_end)
    return nullptr;
  cond *node = postorder[index];
  index--;
  if (in_str == in_end)
    return node;
  int mid_index = map[node];
  node->right =
      buildtree(inorder, postorder, mid_index + 1, in_end, map, index);
  node->left = buildtree(inorder, postorder, in_str, mid_index - 1, map, index);
  return node;
}

cond *get_condition(std::string &line) {
  std::vector<std::string> order = tokenize(line, "&");
  std::vector<cond *> inorder = make_cond_str_array(order[0]);
  std::vector<cond *> postorder = make_cond_str_array(order[1]);
  std::unordered_map<cond *, int> map;
  for (int i = 0; i < inorder.size(); i++)
    map[inorder[i]] = i;
  int endIndex = inorder.size() - 1;
  return buildtree(inorder, postorder, 0, (int)inorder.size(), map, endIndex);
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
  while (std::getline(file, line) and line[0] == ':') {
    // the line will contain the various info about the column

    col *new_column = new col();
    // this is for the properties rows in the columns
    std::vector<std::string> properties = tokenize(line, ":");
    new_column->column_name = properties[0];
    new_column->type = std::stoi(properties[1]);
    new_column->length = std::stoi(properties[2]);
    new_column->primary_key = std::stoi(properties[3].substr(
        1)); // as the last character will contain new line character which
             // needs to be not taken in tokenize
    file.get(temp);
    file.get(temp);
    std::getline(file, line);
    cond *node = get_condition(line);
    new_column->conditions = node;

    // this is for the attribute which is referenced by the current attribute
    file.get(temp);
    file.get(temp);
    std::getline(file, line);
    properties = tokenize(line, ",");
    new_column->referencing_tab = properties[1];
    new_column->referencing_col =
        properties[2].substr(properties[2].length() - 1);

    // this is for the attribute which are taking the refernece from this
    // attribute
    file.get(temp);
    file.get(temp);
    std::getline(file, line);
    referenced_list list;
    makes_referenced_list(line, list);
    new_column->referenced_list = list;
    cols->push_back(new_column);
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
  std::cout.width(30);
  std::cout << "CONDITIONS";
  std::cout.width(15);
  std::cout << "FOREIGN KEY";
  std::cout << "\n";

  for (col *column : *cols) {
    std::cout.width(20);
    std::cout << column->column_name;
    std::cout.width(10);
    std::cout << convert_to_str(column->type);
    std::cout.width(15);
    std::cout << column->primary_key;
    std::cout.width(30);
    std::cout << convert_to_str(column->conditions);
    std::cout.width(15);
    if (column->referencing_tab != "")
      std::cout << "1";
    else
      std::cout << "0";
    std::cout << "\n";
  }
  std::cout << "\n";
}
