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
extern int create_reference(col_list *col_list, reference_list *refer_list);

extern int create_table(const std::string &table_name, col_list *col_list);
