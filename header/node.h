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
};

typedef std::vector<cond *> cond_list;
typedef std::vector<col *> col_list;
typedef std::vector<referenced *> referenced_list;
typedef std::vector<reference *> reference_list;
