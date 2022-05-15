%{
	#include <iostream>
	#include <string>
	#include <vector>
    #include <bits/stdc++.h>
	#include "node.h"
    #include "sql.h"
	extern int yylex();
	int yyerror(const char*);
    extern FILE* yyin;
%}
%union
{
	std::string* string;
	int ival;
	std::vector<std::string*>* string_array;
	col_list* cols;
	col* column;
	reference* refer;
	reference_list* refer_list;
	cond* condition;
	values_list* literals_list;
	Values* literal;
    select_cond* scond;
    update_set* update_set_val;
    update_sets* list_sets;
    float fval;
}


%token CREATE TABLE CHECK PRIMARY KEY FOREIGN REFERENCES
%token CHAR INT DECIMAL 
%token OPEN_PAR CLOSE_PAR SEMICOLON COMMA 
%token OR AND
%token GE GT LE LT E NE
%token DESCRIBE
%token DROP
%token INSERT INTO VALUES
%token DELETE FROM WHERE
%token UPDATE SET 
%token SELECT
%token HELP TABLES
%token QUIT
%token CONDITIONS



%token <string> IDENTIFIER STRING
%token <ival>  NUMBER;
%token <fval> FLOAT;

%type <string_array> primary_key
%type <string_array> columns
%type <string_array> table_list
%type <string> column
%type <cols> definitions
%type <column> definition
%type <column> attr_type
%type <refer> foreign_key
%type <refer_list> foreign_keys
%type <condition> expr or_expr and_expr
%type <condition> condition
%type <literals_list> list_values
%type<literal> diff_value
%type<literal> diff_value_without_identifier
%type<literal> list_value
%type<scond> sexpr
%type<scond> sor_expr;
%type<scond> sand_expr;
%type<scond> scond_b;
%type<update_set_val> update_value;
%type<list_sets> update_values;
%start statements


%%


statements:statement
          | statements statement
          ;

statement:create_stmt
         |describe_stmt
         |drop_stmt 
         | insert_stmt
         | delete_stmt
         | update_stmt
         | select_stmt
         | help_tables
		 | help_cmd
		 | quit_stmt 
         ;

create_stmt:CREATE TABLE IDENTIFIER OPEN_PAR definitions COMMA primary_key COMMA foreign_keys CLOSE_PAR SEMICOLON
		{ // i need to check whether the table exist 
			// if so then the raise an error
			// otherwise i need to create the table
            add_reference_attr($9,*$3);
            
            raise_foreign_key($5,$9);
            raise_primary_key($5,$7);
            create_table(*$3,$5);

            // this is for deleting stuff
            for(col* column : *$5)
                delete column;
            delete $5;
			for(std::string* str: *$7)
				delete str;
            delete $7;
			for(reference* ref:*$9)
				delete ref;
            delete $9;

            
	}
    | CREATE TABLE IDENTIFIER OPEN_PAR definitions COMMA primary_key CLOSE_PAR SEMICOLON
    {
        raise_primary_key($5,$7);
        create_table(*$3,$5);
        for(col* column : *$5)
            delete column;
		delete $5;
		for(std::string* str: *$7)
			delete str;
        delete $7;
    }
	;

primary_key:PRIMARY KEY OPEN_PAR columns CLOSE_PAR {  $$=$4;  }
		 ;

foreign_keys: foreign_key { $$=new reference_list;$$->push_back($1); }
		  | foreign_keys COMMA foreign_key { $1->push_back($3); $$=$1;  }
		  ;
foreign_key: FOREIGN KEY OPEN_PAR column CLOSE_PAR REFERENCES IDENTIFIER OPEN_PAR column CLOSE_PAR 
		{ $$=new reference(*$7,*$9,*$4); delete $7; delete $9;delete $4; }
	;


columns:column {  $$=new std::vector<std::string*>(); $$->push_back($1);  }
	  |columns COMMA column {  $1->push_back($3);$$=$1;  }
	  ;
column:IDENTIFIER { $$=$1;};



definitions:definition { 
           $$=new col_list;
           $$->push_back($1);
           }
		| definitions COMMA definition { 
            $1->push_back($3);
            $$=$1;
        }
		;

definition: IDENTIFIER attr_type { $2->column_name=*$1; $$=$2; delete $1; }
		| IDENTIFIER attr_type CHECK expr { $2->column_name=*$1;
			$2->conditions=$4; 
			$$=$2;
			delete $1;
			}
		;
attr_type	:CHAR OPEN_PAR NUMBER CLOSE_PAR { $$=new col(CHAR,$3,""); }
		|INT OPEN_PAR NUMBER CLOSE_PAR { $$=new col(INT,$3,""); } 
		|DECIMAL OPEN_PAR NUMBER CLOSE_PAR { $$=new col(DECIMAL,$3,""); }
		|INT { $$=new col(INT,8,""); }
		|DECIMAL { $$=new col(DECIMAL,8,""); }
		;



	/*start of the expression part */
expr:or_expr  { $$=$1;}
or_expr:and_expr { $$=$1;}
	  | or_expr OR and_expr {  
		$$=new cond(OR,-1,"");
		$$->left=$1;
		$$->right=$3;
		}
		;

and_expr:and_expr AND condition {
		$$=new cond(AND,-1,"");
		$$->left=$1;
		$$->right=$3;
		}
	| condition { $$=$1;}
	;
condition:  IDENTIFIER GE NUMBER { $$=new cond(GE,$3,*$1); delete $1; }
		| IDENTIFIER GT NUMBER { $$=new cond(GT,$3,*$1); delete $1; }
		| IDENTIFIER NE NUMBER { $$=new cond(NE,$3,*$1);	delete $1; }
		| IDENTIFIER LT NUMBER { $$=new cond(LT,$3,*$1);	delete $1; }
		| IDENTIFIER LE NUMBER { $$=new cond(LE,$3,*$1);	delete $1; }
		| IDENTIFIER E NUMBER  { $$=new cond(E,$3,*$1); 	delete $1; }
		| OPEN_PAR expr CLOSE_PAR { $$=$2;}
		;
	/* ending of the expression part */



describe_stmt: DESCRIBE  IDENTIFIER SEMICOLON
             {
                if(check_table(*$2)==true)
                {
                    col_list* cols=get_table(*$2);
                    display_table(cols);
                    for(col* column : *cols)
                        delete column;
                    delete cols;
                    
                }
                else
                    yyerror("The Table Does not exists");
             }
             ;
drop_stmt:DROP TABLE IDENTIFIER SEMICOLON
         {
                if(check_table(*$3)==true)
                    {
                        drop_table(*$3);
                        std::cout<<"Table Dropped successfully\n";
                    }
                else
                    yyerror("The Table Does not exists");

         }








 /* need to create the insert statement*/


insert_stmt:INSERT INTO IDENTIFIER VALUES OPEN_PAR list_values CLOSE_PAR SEMICOLON {
				if(check_table(*$3)==true)
                {
                        insert_into_table(*$3,$6);
                        std::cout<<"Inserted successfully\n";
                }
                else
                    yyerror("The Table Does not exists");

			}
			;


list_values:list_value {
				$$=new values_list();
				$$->push_back($1);
			}
			| list_values COMMA list_value
			{
				$1->push_back($3);
                $$=$1;
			}
			;
list_value: NUMBER {
				$$=new Values(std::to_string($1),INT);
			}
			|FLOAT
			{
				$$=new Values(std::to_string($1),DECIMAL);
			}
			|STRING
			{
				$$=new Values(*$1,CHAR);
			}
			;



    /*
        Delete conditons
    */
delete_stmt:DELETE FROM IDENTIFIER WHERE sexpr SEMICOLON
           {
				if(check_table(*$3)==true)
                        delete_from_table(*$3,$5);
                else
                    yyerror("The Table Does not exists");
           }
           ;

sexpr:sor_expr{$$=$1;}
sor_expr:sand_expr {  $$=$1; }
        | sor_expr OR sand_expr {
         $$=new select_cond();
         $$->left=$1;
         $$->right=$3;
         $$->relation_type=OR;
        } 
        ;
sand_expr:sand_expr AND scond_b
        {  
            $$=new select_cond();
            $$->left =$1;
            $$->right=$3;
            $$->relation_type=AND;
        }
        | scond_b
        {
            $$=$1;
        }
        ;
scond_b: IDENTIFIER GE diff_value{
            $$=new select_cond(*$1,GE,$3->data,$3->type);
            delete $3;

        }
        |IDENTIFIER GT diff_value{
            $$=new select_cond(*$1,GT,$3->data,$3->type);
            delete $3;

        }
        |IDENTIFIER NE diff_value{
            $$=new select_cond(*$1,NE,$3->data,$3->type);
            delete $3;
        
        }
        |IDENTIFIER LT diff_value{
            $$=new select_cond(*$1,LT,$3->data,$3->type);
            delete $3;
        }
        |IDENTIFIER LE diff_value{
            $$=new select_cond(*$1,LE,$3->data,$3->type);
            delete $3;
        }
        |IDENTIFIER E diff_value
        {
            $$=new select_cond(*$1,E,$3->data,$3->type);
            delete $3;
        }
        | OPEN_PAR sexpr CLOSE_PAR 
        {
            $$=$2;
        }
        ;
diff_value:IDENTIFIER  
          {  
                $$=new Values();
                $$->data=*$1;
                $$->type=IDENTIFIER;
          }
          | diff_value_without_identifier { $$=$1; }
          ;

diff_value_without_identifier:STRING
          {  
                $$=new Values();
                $$->data=*$1;
                $$->type=CHAR;    
          }
          | NUMBER
          {

                $$=new Values();
                $$->data=std::to_string($1);
                $$->type=INT;    
          }
          | FLOAT
          {

                $$=new Values();
                $$->data=std::to_string($1);
                $$->type=DECIMAL;    
          }
          ;


    /*     update conditions need to implemented                       */


update_stmt:UPDATE IDENTIFIER SET update_values WHERE sexpr SEMICOLON
           {
				if(check_table(*$2)==true)
                        update_table(*$2,$4,$6);
                else
                    yyerror("The Table Does not exists");
           }
           ;

update_values:update_value { $$=new update_sets; $$->push_back($1); }
             | update_values COMMA update_value 
             {
                $1->push_back($3);
                $$=$1;
             }
             ;
update_value:IDENTIFIER E diff_value_without_identifier 
            {
                update_set * new_set= new update_set(*$1,$3->data,$3->type);
                delete $3;
                $$=new_set;
            }
            ;

        
    /* 
        need to implement select statement
    */

select_stmt:SELECT columns FROM table_list WHERE sexpr SEMICOLON
           {
              select_from_tables($2,$4,$6);  
           }
           ;
table_list:IDENTIFIER
          { 
                std::vector<std::string*>* strings=new std::vector<std::string*>;
                if(check_table(*$1))
                    strings->push_back($1);
                else 
                    yyerror("The table does not exists");
                $$=strings;
          }
          | table_list COMMA IDENTIFIER {
                if(check_table(*$3))
                    $1->push_back($3);
                else 
                    yyerror("The table does not exists");
                $$=$1;
          }
          ;
help_tables:HELP TABLES SEMICOLON
           {
                help_tables();
           }

help_cmd:HELP cmd ;
cmd:CREATE TABLE {
		std::string print_string=	"The Create statement :\n"
				"\tCREATE TABLE table_name ( \n"
				"\t\tattribute_1 attribute1_type CHECK (constraint1),\n"
				"\t\tattribute_2 attribute2_type, \n"
				"\t\t…,\n"
				"\t\tPRIMARY KEY ( attribute_1, attribute_2 ),\n"
				"\t\tFOREIGN KEY ( attribute_y ) REFERENCES table_x ( attribute_t ), \n"
				"\t\tFOREIGN KEY ( attribute_w ) REFERENCES table_y ( attribute_z ), \n"
				"\t\t…, \n"
				"\t);\n"
				"The primary key constraint is neccessary\n"
				"The foreign key and check constraint is not neccessary\n"
				"For the Check constraints , check HELP CREATE CONDITIONS"
				;
		std::cout<<print_string<<std::endl;
   }
   | DROP TABLE 
   {
		std::string print_string="\n\nDrop Table : \n"
		"\tDROP TABLE table_name;\n"
		"The table_name specified will be dropped.\n"
		"The table is dropped temporarily\n"
		"If Commit is passed after this command the table will be dropped Permanently\n";
		std::cout<<print_string<<std::endl;
   }
   | SELECT 
   {
		std::string print_string="\n\nThe Select Statement : \n"
		"\t\tSELECT \n"
		"\t\tattribute_1,attribute_2,...,\n"
		"\t\tFROM\n"
		"\t\ttable_name_1,table_name_2,...,\n"
		"\t\tWHERE\n"
		"\t\tconditions;\n"
		"The SELECT command will do the cross product based on recursion for the \n"
		"various table and then will select the attributes specified from the table\n"
		"Each foreign key must have a unique name .\n"
		"And Each column name must have a unique name\n"
		"For the conditions , check HELP SELECT CONDITIONS\n";
		std::cout<<print_string<<std::endl;
   }
   | INSERT 
   {
		std::string print_string="\n\nThe Insert Statement : \n"
		"\t\tINSERT INTO\n"
		"\t\ttable_name\n"
		"\t\tVALUES\n"
		"\t\t(\n"
		"\t\tattribute_literal,attribute_literal,..\n"
		"\t\t);\n"
		"Insert Command will check for the check constraint\n"
		"and also the foreign key and the primary key constraints.\n"
		"Insert command will be saved Permanently when commit\n "
		"is followed by insert.\n";
		std::cout<<print_string<<std::endl;
   }
   | DELETE 
   {
		std::string print_string="\n\nThe Delete Statement : \n"
		"\t\tDELETE FROM\n"
		"\t\ttable_name\n"
		"\t\tWHERE\n"
		"\t\tconditons;\n"
		"The Delete command deletes the record based on the conditions.\n"
		"For condition check HELP SELECT CONDITIONS.\n";
		std::cout<<print_string<<std::endl;
   }
   | UPDATE
   {
		std::string print_string="\n\nThe Update statement : \n"
		"\t\tUPDATE table_name\n"
		"\t\tSET\n"
		"\t\tattr=attr_literal,attr=attr_literal,...\n"
		"\t\tWHERE\n"
		"\t\tconditions;\n"
		"The Update command updates the record based on the conditions.\n"
		"For condition check HELP SELECT CONDITIONS.\n";
		std::cout<<print_string<<std::endl;
   }
   | CONDITIONS 
   {
		std::string print_string="\n\nThe Conditions :\n"
		"\t\toperand1 operator operand2\n"
		"The operand1 is always some column_name .\n"
		"The operator can be >,<,<=,>=,=\n"
		"The operand2 can be column name or string literal , decimal or integer\n";
		std::cout<<print_string<<std::endl;
   }
   ;
quit_stmt:QUIT SEMICOLON
		 {
		 	save_to_buffer();
		 }
		 ;



%%




int yyerror(char const *s)
{
	std::cout<<"[ERROR] : "<<s;
	exit(0);
}


int main(int argc,char* argv[])
{
    /* yydebug=1; */
    yyin=fopen("test.txt","r");
	yyparse();
    fclose(yyin);
	return 0;
}


