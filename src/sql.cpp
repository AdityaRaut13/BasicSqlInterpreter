
#include "config.h"
#include "node.h"
#include "parser.hpp"
#include "utils.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <ios>
#include <iostream>
#include <ostream>
#include <queue>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

auto print = [](auto &remark, auto &v)
{
	std::cout << remark << " :";
	for (auto n : v)
		std::cout << n << "|";
	std::cout << "\n";
};
std::string convert_to_string(int type)
{
	std::string result;
	switch (type)
	{
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

std::string convert_to_string(cond *conditions)
{
	if (conditions == nullptr)
		return "";
	else if (conditions->relation_type == AND)
	{
		// visit the left edge and the right edge then join it.
		std::string left = convert_to_string(conditions->left);
		std::string right = convert_to_string(conditions->right);
		return left + " AND " + right;
	}
	else if (conditions->relation_type == OR)
	{
		std::string left = convert_to_string(conditions->left);
		std::string right = convert_to_string(conditions->right);
		return left + " OR " + right;
	}
	return conditions->column_name + " " +
	       convert_to_string(conditions->relation_type) + " " +
	       std::to_string(conditions->number);
}

void get_to_table_in_catalog(std::fstream &file, std::string const  &table_name)
{
	std::string line;
	// compare each line with the table name
	std::getline(file, line);
	while (!line.empty() and line.compare(table_name) != 0)
	{
		// skipping the column of the current table
		while (std::getline(file, line) and line[0] == ':')
			;
	}
}

bool check_reference_exists(std::string &table_name, std::string &column_name,
                            int type, int length)
{
	/*
	The table will be checked for the column and also the column must be a
	primary_key
	*/
	std::fstream file(CATALOG_PATH, std::ios::in);
	std::string line;
	get_to_table_in_catalog(file, table_name);
	while (std::getline(file, line) and line[0] == ':')
	{
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
bool check_table(std::string &table_name)
{
	std::ifstream file(PATH + table_name);
	return file.good();
}

// start of the writing the condition to the file

void write_condition(cond *conditions, std::fstream &file)
{
	if (conditions == nullptr)
	{
		file << "#";
		return;
	}
	file << ":" << conditions->relation_type << " " << conditions->number;
	write_condition(conditions->left, file);
	write_condition(conditions->right, file);
}

void add_reference_attr(reference_list *refer_list, std::string &table_name)
{
	/*
	  The reference

	*/
	std::unordered_map<std::string, reference *> map;
	for (reference *refer : *refer_list)
		map[refer->table_name] = refer;
	std::ofstream buffer(BUFFER0);
	std::fstream file(CATALOG_PATH);
	std::string line;
	std::vector<std::string> temp;
	reference *refer;
	while (std::getline(file, line) and line[0] != ':')
	{
		buffer << line << "\n";
		if (map.find(line) != map.end())
		{
			refer = map[line];
			while (std::getline(file, line))
			{
				buffer << line << "\n";
				temp = tokenize(line, ":");
				if (temp[0].compare(refer->referenced_attr) == 0)
					break;
				std::getline(file, line);
				buffer << line << "\n";
				std::getline(file, line);
				buffer << line << "\n";
				std::getline(file, line);
				buffer << line << "\n";
			}
			if (!line.empty())
			{
				// this is th column name .
				if (temp[3] == "0")
					fatal("The key is not a primary key");
				std::getline(file, line);
				buffer << line << "\n";
				std::getline(file, line);
				buffer << line << "\n";
				std::getline(file, line);
				buffer << line;
				// file.seekg((int)file.tellg() - line.length() - 1, file.beg);
				std::string temp = table_name + "," + refer->referencing_attr + ":";
				buffer << temp << "\n";
			}
			map.erase(refer->table_name);
			// then insert the next columns in it.
			while (std::getline(file, line) and line[0] == ':')
				buffer << line << "\n";
			file.seekg((int)file.tellg() - line.length() - 1, file.beg);
		}
		else
		{
			while (std::getline(file, line) and line[0] == ':')
				buffer << line << "\n";
			file.seekg((int)file.tellg() - line.length() - 1, file.beg);
		}
	}
	buffer.close();
	file.close();
	std::remove(CATALOG_PATH);
	std::rename(BUFFER0, CATALOG_PATH);
}

int raise_foreign_key(col_list *cols, reference_list *refer_list)
{
	/*
	returs:
	    1 if error occured
	    0 if no error occured
	*/
	std::unordered_map<std::string, reference *> map;
	for (reference *refer : *refer_list)
		map.insert(std::make_pair(refer->referencing_attr, refer));
	for (col *column : *cols)
	{
		if (map.find(column->column_name) != map.end())
		{
			// we have found a match
			column->referencing_tab = map[column->column_name]->table_name;
			column->referencing_col = map[column->column_name]->referenced_attr;
			map.erase(column->column_name);
		}
	}
	if (map.size() == 0)
		return 0;
	std::cout << "hello world";
	return 1;
}

int create_table(std::string &table_name, col_list *cols)
{
	/* open the file in append mode , write the table_name into the file then
	 the column_name file structure : table_name
	   :column_name:type:length:is_primary_key
	   ::constraints conditions
	   ::referencing_table_name,referencing_column_name
	   ::referenced_table_name,referenced_column_name:..
	    1.line : general properties of columns
	    2.line : the check constraints
	    3.line : the table and column where this attribute is referencing .
	    4.line : the table and column where this attribute is used as a
	 reference
	   .
	*/
	std::fstream file(CATALOG_PATH, std::ios_base::app);
	if (!file)
		return 1;
	file << table_name << "\n";
	for (col *column : *cols)
	{
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

void makes_referenced_list(std::string &line, referenced_list &list)
{
	/*
	   takes the input string parses it and then returns the result in list
	*/
	std::vector<std::string> raw_referenced_list = tokenize(line, ":");
	std::vector<std::string> temp;
	for (std::string raw_referenced : raw_referenced_list)
	{
		if (!raw_referenced.empty())
		{
			temp = tokenize(raw_referenced, ",");
			referenced *new_referenced = new referenced(temp[0], temp[1]);
			list.push_back(new_referenced);
		}
	}
}

cond *get_condition(std::string &line, std::string &column_name)
{
	/*
	 * Get conditions
	 *      transforms the string representation of the condition tree to
	 *      condition tree
	 *  Parameter  :
	 *      line : the string representation
	 *      column_name : the specified column for which the conditions tree must be there
	 *  Returns :
	 *      The condition node cond pointer
	 * */
	int16_t relation_type, number;
	cond *node;
	if (line[0] == '#')
	{
		line = line.substr(1);
		node = nullptr;
	}
	else if (line[0] == ':')
	{
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
		node = new cond(relation_type, number, column_name);
		node->left = get_condition(line, column_name);
		node->right = get_condition(line, column_name);
	}
	return node;
}

col_list *get_table(std::string const &table_name)
{
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
	while (std::getline(file, line) && line[0] == ':')
	{
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
		file.get(temp);
		std::getline(file, line);
		new_column->conditions = get_condition(line, new_column->column_name);
		// this is for the attribute which is referenced by the current
		// attribute
		file.get(temp);
		file.get(temp);
		std::getline(file, line);
		properties = tokenize(line, ",");
		if (properties.size() >= 2)
		{
			new_column->referencing_tab = properties[0];
			new_column->referencing_col = properties[1];
		}
		// this is for the attribute which are taking the refernece from this
		// attribute
		file.get(temp);
		file.get(temp);
		std::getline(file, line);
		referenced_list list;
		if (!line.empty())
			makes_referenced_list(line, list);
		new_column->referenced_list = list;
		cols->push_back(new_column);
	}
	return cols;
}

int raise_primary_key(col_list *cols,
                      std::vector<std::string *> *column_names)
{
	/*
	    @returns
	    1 : if column not found
	    0 : if every column is found in the cols
	*/
	std::unordered_set<std::string> set;
	for (std::string *col_name : *column_names)
		set.insert(*col_name);
	for (col *column : *cols)
		if (set.find(column->column_name) != set.end())
		{
			column->primary_key = true;
			set.erase(column->column_name);
		}
	if (set.empty() == true)
		return 0;
	return 1;
}

void display_table(col_list *cols)
{
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
	for (col *column : *cols)
	{
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

void drop_table(std::string table_name)
{
	/*
	  The reference

	*/
	std::ofstream buffer(BUFFER0);
	std::fstream file(CATALOG_PATH);
	std::string line;
	while (std::getline(file, line) and line[0] != ':')
	{
		if (line.compare(table_name) == 0)
		{
			while (std::getline(file, line) and line[0] == ':')
			{
				std::getline(file, line);
				std::getline(file, line);
				std::getline(file, line);
			}
		}
		else
		{
			buffer << line << "\n";
			while (std::getline(file, line) and line[0] == ':')
				buffer << line << "\n";
		}
		file.seekg((int)file.tellg() - line.length() - 1, file.beg);
	}
	buffer.close();
	file.close();
	std::remove(CATALOG_PATH);
	std::string path(PATH);
	path += table_name;
	std::remove(path.c_str());
	std::rename(BUFFER0, CATALOG_PATH);
}

bool check_column_insertion(col *column, Values *val)
{
	/*
	 * Given :
	 *  column and the values
	 * Check the column constraints and also the length and data of the val and the col .
	 * Returns :
	 *  True : if satisfy all the column constraints, not
	 *         checking the primary and foreign key constraints
	 *  False : if not satisfied
	 * */
	if (column->type != val->type or column->length < val->data.length())
		return false;
	switch (val->type)
	{
		case INT:
			{
				int number = std::stoi(val->data);
				if (column->conditions and !column->conditions->apply(number))
					return false;
				break;
			}
		case DECIMAL:
			{
				float number = std::stoi(val->data);
				if (column->conditions and !column->conditions->apply(number))
					return false;
			}
		default:
			return true;
	}
	return true;
}

bool check_primary_key(std::string table_name, Values *val, int index)
{
	/*
	 * Returns :
	 *  True : if the element is present in table
	 *  False : if not present
	 * */
	std::ifstream file(PATH + table_name);
	std::string line;
	while (std::getline(file, line))
	{
		std::vector<std::string> attr = tokenize(line, "#");
		if (index < attr.size() and attr[index] == val->data)
		{
			file.close();
			return true;
		}
	}
	file.close();
	return false;
}
bool check_foreign_key(std::string &table_name, std::string &column_name,
                       Values *val)
{
	/*
	 * Check the table and the specified column name
	 * Returns :
	 *  True : if the element exists in the table_name and the specified column name
	 *  False : if not exists
	 * */
	col_list *cols = get_table(table_name);
	int index = 0;
	for (col *column : *cols)
	{
		if (column->column_name == column_name)
			break;
		index++;
	}
	for (int i = 0; i < cols->size(); i++)
		delete cols->at(i);
	delete cols;
	std::ifstream file(PATH + table_name);
	std::string line;
	while (std::getline(file, line))
	{
		std::vector<std::string> tokens = tokenize(line, "#");
		if (index < tokens.size() and tokens[index] == val->data)
		{
			file.close();
			return true;
		}
	}
	file.close();
	return false;
}

/*

    the  format will  be something like :
        attr_value#att_value#.. attr_value#
        attr_value#att_value#.. attr_value# -----> one entry
*/

void insert_into_table(std::string table_name, values_list *list)
{
	std::string line;
	col_list *cols = get_table(table_name);
	std::fstream file(PATH + table_name, std::ios_base::in | std::ios_base::app);
	for (int i = 0; i < cols->size(); i++)
	{
		// std::cout << i << "." << cols->at(i)->column_name << "\n";
		if (check_column_insertion(cols->at(i), list->at(i)) == true)
		{
			// the condition is satified in this case.
			// need to check for the primary_key_constraint
			// need to check for the foreign key constraints
			if (cols->at(i)->primary_key)
			{
				file.close();
				bool is_present = check_primary_key(table_name, list->at(i), i);
				if (is_present)
					fatal("The key is already present\n");
				file.open(PATH + table_name, std::ios_base::in | std::ios_base::app);
			}
			if (!cols->at(i)->referencing_tab.empty())
			{
				// this is referencing some table in the table
				// i need to check whether this data is present in the referenecing
				// table
				bool foreign_key_present =
				    check_foreign_key(cols->at(i)->referencing_tab,
				                      cols->at(i)->referencing_col, list->at(i));
				if (!foreign_key_present)
					fatal("The foreign does not exist\n");
			}
			file << list->at(i)->data << "#";
			continue;
		}
		fatal("The Insertion failed ");
	}
	for (int i = 0; i < cols->size(); i++)
		delete cols->at(i);
	delete cols;
	file << "\n";
	file.close();
}
bool check_condition(std::vector<std::string> const  &strings, select_cond *conditions,
                     std::unordered_map<std::string, int>  &map, col_list *cols)
{
	if(conditions == nullptr)
		return true;
	if(conditions->relation_type == GE and conditions->op2.type == INT)
	{
		int number1 = std::stoi(strings[map[conditions->op1]]);
		int number2 = std::stoi(conditions->op2.data);
		return number1 >= number2;
	}
	else if(conditions->relation_type == GE and conditions->op2.type == DECIMAL)
	{
		float number1 = std::stoi(strings[map[conditions->op1]]);
		float number2 = std::stoi(conditions->op2.data);
		return number1 >= number2;
	}
	else if(conditions->relation_type == GE and conditions->op2.type == CHAR)
		return strings[map[conditions->op1]].compare(conditions->op2.data) >= 0;
	else if(conditions->relation_type == GE and conditions->op2.type == IDENTIFIER)
	{
		if(cols->at(map[conditions->op1])->type == cols->at(map[conditions->op2.data])->type)
		{
			// this means they are compatible and hence the conditions must me checked
			int16_t type = cols->at(map[conditions->op1])->type;
			std::string col1 = conditions->op1;
			std::string col2 = conditions->op2.data;
			std::string op1 = strings[map[col1]];
			std::string op2 = strings[map[col2]];
			switch(type)
			{
				case INT:
					{
						int number1 = std::stoi(op1);
						int number2 = std::stoi(op2);
						return number1 >= number2;
					}
				case DECIMAL:
					{
						float number1 = std::stoi(op1);
						float number2 = std::stoi(op2);
						return number1 >= number2;
					}
				case CHAR:
					{
						return op1.compare(op2) >= 0;
					}
			}
		}
		else
			fatal("incompatible type");
	}
	else if(conditions->relation_type == GT and conditions->op2.type == INT)
	{
		int number1 = std::stoi(strings[map[conditions->op1]]);
		int number2 = std::stoi(conditions->op2.data);
		return number1 > number2;
	}
	else if(conditions->relation_type == GT and conditions->op2.type == DECIMAL)
	{
		float number1 = std::stoi(strings[map[conditions->op1]]);
		float number2 = std::stoi(conditions->op2.data);
		return number1 > number2;
	}
	else if(conditions->relation_type == GT and conditions->op2.type == CHAR)
		return strings[map[conditions->op1]].compare(conditions->op2.data) > 0;
	else if(conditions->relation_type == GT and conditions->op2.type == IDENTIFIER)
	{
		if(cols->at(map[conditions->op1])->type == cols->at(map[conditions->op2.data])->type)
		{
			// this means they are compatible and hence the conditions must me checked
			int16_t type = cols->at(map[conditions->op1])->type;
			std::string col1 = conditions->op1;
			std::string col2 = conditions->op2.data;
			std::string op1 = strings[map[col1]];
			std::string op2 = strings[map[col2]];
			switch(type)
			{
				case INT:
					{
						int number1 = std::stoi(op1);
						int number2 = std::stoi(op2);
						return number1 > number2;
					}
				case DECIMAL:
					{
						float number1 = std::stoi(op1);
						float number2 = std::stoi(op2);
						return number1 > number2;
					}
				case CHAR:
					{
						return op1.compare(op2) > 0;
					}
			}
		}
		else
			fatal("incompatible type");
	}
	else if(conditions->relation_type == LE and conditions->op2.type == INT)
	{
		int number1 = std::stoi(strings[map[conditions->op1]]);
		int number2 = std::stoi(conditions->op2.data);
		return number1 <= number2;
	}
	else if(conditions->relation_type == LE and conditions->op2.type == DECIMAL)
	{
		float number1 = std::stoi(strings[map[conditions->op1]]);
		float number2 = std::stoi(conditions->op2.data);
		return number1 <= number2;
	}
	else if(conditions->relation_type == LE and conditions->op2.type == CHAR)
		return strings[map[conditions->op1]].compare(conditions->op2.data) <= 0;
	else if(conditions->relation_type == LE and conditions->op2.type == IDENTIFIER)
	{
		if(cols->at(map[conditions->op1])->type == cols->at(map[conditions->op2.data])->type)
		{
			// this means they are compatible and hence the conditions must me checked
			int16_t type = cols->at(map[conditions->op1])->type;
			std::string col1 = conditions->op1;
			std::string col2 = conditions->op2.data;
			std::string op1 = strings[map[col1]];
			std::string op2 = strings[map[col2]];
			switch(type)
			{
				case INT:
					{
						int number1 = std::stoi(op1);
						int number2 = std::stoi(op2);
						return number1 <= number2;
					}
				case DECIMAL:
					{
						float number1 = std::stoi(op1);
						float number2 = std::stoi(op2);
						return number1 <= number2;
					}
				case CHAR:
					{
						return op1.compare(op2) <= 0;
					}
			}
		}
		else
			fatal("incompatible type");
	}
	else if(conditions->relation_type == LT and conditions->op2.type == INT)
	{
		int number1 = std::stoi(strings[map[conditions->op1]]);
		int number2 = std::stoi(conditions->op2.data);
		return number1 < number2;
	}
	else if(conditions->relation_type == LT and conditions->op2.type == DECIMAL)
	{
		float number1 = std::stoi(strings[map[conditions->op1]]);
		float number2 = std::stoi(conditions->op2.data);
		return number1 < number2;
	}
	else if(conditions->relation_type == LT and conditions->op2.type == CHAR)
		return strings[map[conditions->op1]].compare(conditions->op2.data) < 0;
	else if(conditions->relation_type == LT and conditions->op2.type == IDENTIFIER)
	{
		if(cols->at(map[conditions->op1])->type == cols->at(map[conditions->op2.data])->type)
		{
			// this means they are compatible and hence the conditions must me checked
			int16_t type = cols->at(map[conditions->op1])->type;
			std::string col1 = conditions->op1;
			std::string col2 = conditions->op2.data;
			std::string op1 = strings[map[col1]];
			std::string op2 = strings[map[col2]];
			switch(type)
			{
				case INT:
					{
						int number1 = std::stoi(op1);
						int number2 = std::stoi(op2);
						return number1 < number2;
					}
				case DECIMAL:
					{
						float number1 = std::stoi(op1);
						float number2 = std::stoi(op2);
						return number1 < number2;
					}
				case CHAR:
					{
						return op1.compare(op2) < 0;
					}
			}
		}
		else
			fatal("incompatible type");
	}
	else if(conditions->relation_type == E and conditions->op2.type == INT)
	{
		int number1 = std::stoi(strings[map[conditions->op1]]);
		int number2 = std::stoi(conditions->op2.data);
		return number1 == number2;
	}
	else if(conditions->relation_type == E and conditions->op2.type == DECIMAL)
	{
		float number1 = std::stoi(strings[map[conditions->op1]]);
		float number2 = std::stoi(conditions->op2.data);
		return number1 == number2;
	}
	else if(conditions->relation_type == E and conditions->op2.type == CHAR)
		return strings[map[conditions->op1]].compare(conditions->op2.data) == 0;
	else if(conditions->relation_type == E and conditions->op2.type == IDENTIFIER)
	{
		if(cols->at(map[conditions->op1])->type == cols->at(map[conditions->op2.data])->type)
		{
			// this means they are compatible and hence the conditions must me checked
			int16_t type = cols->at(map[conditions->op1])->type;
			std::string col1 = conditions->op1;
			std::string col2 = conditions->op2.data;
			std::string op1 = strings[map[col1]];
			std::string op2 = strings[map[col2]];
			switch(type)
			{
				case INT:
					{
						int number1 = std::stoi(op1);
						int number2 = std::stoi(op2);
						return number1 == number2;
					}
				case DECIMAL:
					{
						float number1 = std::stoi(op1);
						float number2 = std::stoi(op2);
						return number1 == number2;
					}
				case CHAR:
					{
						return op1.compare(op2) == 0;
					}
			}
		}
		else
			fatal("incompatible type");
	}
	else if(conditions->relation_type == NE and conditions->op2.type == INT)
	{
		int number1 = std::stoi(strings[map[conditions->op1]]);
		int number2 = std::stoi(conditions->op2.data);
		return number1 != number2;
	}
	else if(conditions->relation_type == NE and conditions->op2.type == DECIMAL)
	{
		float number1 = std::stoi(strings[map[conditions->op1]]);
		float number2 = std::stoi(conditions->op2.data);
		return number1 != number2;
	}
	else if(conditions->relation_type == NE and conditions->op2.type == CHAR)
		return strings[map[conditions->op1]].compare(conditions->op2.data) != 0;
	else if(conditions->relation_type == NE and conditions->op2.type == IDENTIFIER)
	{
		if(cols->at(map[conditions->op1])->type == cols->at(map[conditions->op2.data])->type)
		{
			// this means they are compatible and hence the conditions must me checked
			int16_t type = cols->at(map[conditions->op1])->type;
			std::string col1 = conditions->op1;
			std::string col2 = conditions->op2.data;
			std::string op1 = strings[map[col1]];
			std::string op2 = strings[map[col2]];
			switch(type)
			{
				case INT:
					{
						int number1 = std::stoi(op1);
						int number2 = std::stoi(op2);
						return number1 != number2;
					}
				case DECIMAL:
					{
						float number1 = std::stoi(op1);
						float number2 = std::stoi(op2);
						return number1 != number2;
					}
				case CHAR:
					{
						return op1.compare(op2) != 0;
					}
			}
		}
		else
			fatal("incompatible type");
	}
	else if(conditions->relation_type == AND)
	{
		bool left = check_condition(strings, conditions->left, map, cols);
		bool right = check_condition(strings, conditions->right, map, cols);
		return left and right;
	}
	else if(conditions->relation_type == OR)
	{
		bool left = check_condition(strings, conditions->left, map, cols);
		bool right = check_condition(strings, conditions->right, map, cols);
		return left or right;
	}
	return false;
}
void delete_from_table(std::string table_name, select_cond *conditions)
{
	col_list *cols = get_table(table_name);
	std::unordered_map<std::string, int> map;
	for(int i = 0; i < cols->size(); i++)
		map[cols->at(i)->column_name] = i;
	std::fstream file(PATH + table_name, std::ios_base::in);
	std::fstream buffer0(BUFFER_TABLE0, std::ios_base::out);
	std::string line;
	int line_count = 0;
	while(std::getline(file, line))
	{
		std::vector<std::string> strings = tokenize(line, "#");
		if(check_condition(strings, conditions, map, cols) == true )
		{
			// this is to be deleted
			line_count++;
			continue;
		}
		buffer0 << line << "\n";
	}
	file.close();
	buffer0.close();
	std::string file_path(PATH);
	file_path += table_name;
	std::remove(file_path.c_str());
	std::rename(BUFFER_TABLE0, file_path.c_str());
	for(int i = 0; i < cols->size(); i++)
		delete cols->at(i);
	delete cols;
	std::cout << line_count << " rows were affected.\n";
}

void insert_record(std::fstream &file, std::vector<std::string>const &strings)
{
	int size = strings.size();
	for(int i = 0; i < size - 1 ; i++)
		file << strings[i] << "#";
	file << "\n";
}



void update_table(std::string table_name, update_sets *list, select_cond *conditions)
{
	col_list *cols = get_table(table_name);
	std::unordered_map<std::string, int> map;
	for(int i = 0; i < cols->size(); i++)
		map[cols->at(i)->column_name] = i;
	std::unordered_map<int, std::string> update_map;
	for(update_set *element : *list )
	{
		// error checking part
		if (cols->at(map[element->column_name])->primary_key
		        and check_primary_key(table_name, &element->val, map[element->column_name]))
			fatal("Primary already present\n");
		else if ( !cols->at(map[element->column_name])->referencing_tab.empty())
		{
			// this is foreign key
			col *column = cols->at(map[element->column_name]);
			if(!check_foreign_key(column->referencing_tab, column->referencing_col, &element->val))
				fatal("The foreign key does not exist");
		}
		// actual updation
		update_map[map[element->column_name]] = element->val.data;
	}
	std::fstream file(PATH + table_name, std::ios_base::in);
	std::fstream buffer0(BUFFER_TABLE0, std::ios_base::out);
	std::string line;
	int line_count = 0;
	while(std::getline(file, line))
	{
		std::vector<std::string> strings = tokenize(line, "#");
		if(check_condition(strings, conditions, map, cols) == true )
		{
			for(auto element : update_map)
				strings[element.first] = element.second;
			insert_record(buffer0, strings);
			line_count++;
			continue;
		}
		buffer0 << line << "\n";
	}
	file.close();
	buffer0.close();
	std::string file_path(PATH);
	file_path += table_name;
	std::remove(file_path.c_str());
	std::rename(BUFFER_TABLE0, file_path.c_str());
	for(int i = 0; i < cols->size(); i++)
		delete cols->at(i);
	delete cols;
	std::cout << line_count << " rows were affected.\n";
}



void select_recurse(std::vector<std::string> &record,
                    select_cond *conditions,
                    std::unordered_map<std::string, int> &map,
                    int index,
                    std::vector<std::string *> *table_names,
                    col_list *cols,
                    std::vector<std::string *> *selected_columns,
                    std::vector<std::vector<std::string>> &result)
{
	if(index >= table_names->size() and check_condition(record, conditions, map, cols))
	{
		std::vector<std::string> temp;
		for(int i = 0; i < selected_columns->size(); i++)
		{
			int col_index = map[*selected_columns->at(i)];
			temp.push_back(record[col_index]);
		}
		result.push_back(temp);
	}
	else if (index < table_names->size())
	{
		std::fstream file(PATH + *table_names->at(index), std::ios_base::in);
		std::string line;
		std::vector<std::string> attrs = record;
		std::vector<std::string> curr_record;
		while(std::getline(file, line))
		{
			curr_record = tokenize(line, "#");
			for(int i = 0; i < curr_record.size() - 1 ; i++)
				attrs.push_back(curr_record[i]);
			select_recurse(attrs, conditions, map, index + 1, table_names, cols, selected_columns, result);
			attrs = record;
		}
		file.close();
	}
}

void display_record(std::vector<std::string *> *column_selected,
                    std::vector<std::vector<std::string>> &result,
                    col_list *cols,
                    std::unordered_map<std::string, int> &map)
{
	std::cout << "\n";
	for(int i = 0; i < column_selected->size(); i++)
	{
		//int index = map[*column_selected->at(i)];
		std::cout.width(20 + PADDING);
		std::cout << (*column_selected->at(i));
	}
	std::cout << "\n";
	for(int i = 0; i < result.size(); i++)
	{
		for(int j = 0; j < result[i].size(); j++)
		{
			//int index = map[*column_selected->at(i)];
			std::cout.width(20 + PADDING);
			std::cout << (result[i][j]);
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}



void select_from_tables(std::vector<std::string *> *column_selected,
                        std::vector<std::string *> *table_names,
                        select_cond *conditions)
{
	col_list *cols = get_table(*table_names->at(0));
	std::unordered_map<std::string, int> map;
	int index = 0;
	for(int i = 0; i < cols->size(); i++)
		map[cols->at(i)->column_name] = index++;
	for(int i = 1; i < table_names->size(); i++)
	{
		// first iterating through the tables names
		col_list *temp = get_table(*table_names->at(i));
		for(int j = 0; j < temp->size(); j++)
		{
			// for each col of the current table
			cols->push_back(temp->at(j));
			map[temp->at(j)->column_name] = index++;
		}
		delete temp;
	}
	std::vector<std::string> record;
	std::vector<std::vector<std::string>> result;
	select_recurse(record, conditions, map, 0, table_names, cols, column_selected, result);
	display_record(column_selected, result, cols, map);
	for(int i = 0; i < table_names->size(); i++)
		delete table_names->at(i);
	for(int i = 0; i < column_selected->size(); i++)
		delete column_selected->at(i);
	delete table_names;
	delete column_selected;
	delete cols;
}






