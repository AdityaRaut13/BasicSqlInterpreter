#include <iostream>
#include <string>
#include <vector>

#include "node.h"
#include "parser.hpp"

extern bool check_table(const std::string &table_name);

extern col_list *get_table(const std::string &table_name);

/*
 * check the reference exist meaning that the table exits and the primary of the
 * table is referenced add the reference in the col object
 * */
extern int raise_foreign_key(col_list *cols, reference_list *refer_list);
// i have to do this one
extern int raise_primary_key(col_list *cols,
                             std::vector<std::string> *column_names);

extern int create_table(const std::string &table_name, col_list *col_list);
