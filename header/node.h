#pragma once
#include <iostream>
#include <string>
#include <vector>

class cond {
	public:
		int16_t relation_type;
		int16_t number;
		std::string column_name;
		struct cond *left;
		struct cond *right;
		cond() : relation_type(-1), number(-1), left(nullptr), right(nullptr) {}
		cond(int16_t rel, int16_t number, std::string col)
			: relation_type(rel), number(number), column_name(col), left(nullptr),
			  right(nullptr) {}
		~cond();
		bool apply(int number);
		bool apply(float number);
};

class referenced {
	public:
		std::string table_name;
		std::string column_name;
		referenced(std::string table_name, std::string column_name)
			: table_name(table_name), column_name(column_name) {}
};

class reference {
	public:
		std::string table_name;
		std::string referenced_attr;
		std::string referencing_attr;
		reference(std::string table_name, std::string referenced_attr,
		          std::string referencing_attr)
			: table_name(table_name), referenced_attr(referenced_attr),
			  referencing_attr(referencing_attr) {}
};

class col {
	public:
		int16_t type;
		int16_t length;
		std::string column_name;
		cond *conditions;
		bool primary_key;
		std::vector<referenced *> referenced_list;
		std::string referencing_tab;
		std::string referencing_col;
		col(int16_t type, int16_t length, std::string column_name)
			: type(type), length(length), column_name(column_name),
			  conditions(nullptr), primary_key(false) {}
		col()
			: type(0), length(0), column_name(""), conditions(nullptr),
			  primary_key(false) {}
		~col();
};

class Values {
	public:
		std::string data;
		int type;
		Values(std::string data, int type) : data(data), type(type) {}
		Values() : data(""), type(-1) {}
		Values(Values const  &val)
		{
			this->data = val.data;
			this->type = val.type;
		}
};
class select_cond {
	public:
		std::string op1;
		int16_t relation_type;
		Values op2;
		/*
		    The Type of data that can be stored in this is :
		        1. number
		        2. column_name
		        3. string
		        4. Float
		*/
		select_cond *left;
		select_cond *right;
		select_cond(std::string op1, int16_t relation_type, std::string data_op2, int type_op2)
			: op1(op1), relation_type(relation_type), left(nullptr),
			  right(nullptr)
		{
			op2.data = data_op2;
			op2.type = type_op2;
		}
		select_cond() : left(nullptr), right(nullptr) {}
		~select_cond();
};



class update_set {
	public:
		std::string column_name;
		Values val;
		update_set(std::string column_name, std::string val_data, int val_type):
			column_name(column_name)
		{
			val.data = val_data;
			val.type = val_type;
		}
		update_set (void)
		{
			val.data = "";
			val.type = -1;
		}
};

typedef std::vector<cond *> cond_list;
typedef std::vector<col *> col_list;
typedef std::vector<referenced *> referenced_list;
typedef std::vector<reference *> reference_list;
typedef std::vector<Values *> values_list;
typedef std::vector<update_set *> update_sets;
