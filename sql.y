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



%token <string> IDENTIFIER STRING
%token <ival>  NUMBER;
%token <fval> FLOAT;

%type <string_array> primary_key
%type <string_array> columns
%type <string> column
%type <cols> definitions
%type <column> definition
%type <column> attr_type
%type <refer> foreign_key
%type <refer_list> foreign_keys
%type <condition> expr or_expr and_expr
%type <condition> condition
%type <literals_list> list_values
%type<literal> list_value
%type<scond> sexpr
%type<scond> sor_expr;
%type<scond> sand_expr;
%type<scond> scond_b;
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
            delete $7;
            delete $9;

            
	}
    | CREATE TABLE IDENTIFIER OPEN_PAR definitions COMMA primary_key CLOSE_PAR SEMICOLON
    {
        raise_primary_key($5,$7);
        create_table(*$3,$5);
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
                {
                        delete_from_table(*$3,$5);
                        std::cout<<"Deleted successfully\n";
                }
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
scond_b: IDENTIFIER GE NUMBER{
            Values lv;
            lv.data=std::to_string($3);
            lv.type=INT;
            $$=new select_cond(*$1,GE,lv);

        }
        |IDENTIFIER GT NUMBER{
            Values lv;
            lv.data=std::to_string($3);
            lv.type=INT;
            $$=new select_cond(*$1,GT,lv);

        }
        |IDENTIFIER NE NUMBER{
            Values lv;
            lv.data=std::to_string($3);
            lv.type=INT;
            $$=new select_cond(*$1,NE,lv);
        
        }
        |IDENTIFIER LT NUMBER{
            Values lv;
            lv.data=std::to_string($3);
            lv.type=INT;
            $$=new select_cond(*$1,LT,lv);
        }
        |IDENTIFIER LE NUMBER{
            Values lv;
            lv.data=std::to_string($3);
            lv.type=INT;
            $$=new select_cond(*$1,LE,lv);
        }
        |IDENTIFIER E NUMBER
        {
            Values lv;
            lv.data=std::to_string($3);
            lv.type=INT;
            $$=new select_cond(*$1,E,lv);
        }
        |IDENTIFIER GE FLOAT
        {
            Values lv;
            lv.data=std::to_string($3);
            lv.type=DECIMAL;
            $$=new select_cond(*$1,GE,lv);
        }
        |IDENTIFIER GT FLOAT
        {
            Values lv;
            lv.data=std::to_string($3);
            lv.type=DECIMAL;
            $$=new select_cond(*$1,GT,lv);
        }
        |IDENTIFIER NE FLOAT
        {
            Values lv;
            lv.data=std::to_string($3);
            lv.type=DECIMAL;
            $$=new select_cond(*$1,NE,lv);
        }
        |IDENTIFIER LT FLOAT
        {
            Values lv;
            lv.data=std::to_string($3);
            lv.type=DECIMAL;
            $$=new select_cond(*$1,LT,lv);
        }
        |IDENTIFIER LE FLOAT
        {
            Values lv;
            lv.data=std::to_string($3);
            lv.type=DECIMAL;
            $$=new select_cond(*$1,LE,lv);
        }
        |IDENTIFIER E  FLOAT     
        {
            Values lv;
            lv.data=std::to_string($3);
            lv.type=DECIMAL;
            $$=new select_cond(*$1,E,lv);
        }
        |IDENTIFIER GE STRING
        {
            Values lv;
            lv.data=*$3;
            lv.type=CHAR;
            $$=new select_cond(*$1,E,lv);
        }
        |IDENTIFIER GT STRING
        {
            Values lv;
            lv.data=*$3;
            lv.type=CHAR;
            $$=new select_cond(*$1,GT,lv);
        }
        |IDENTIFIER NE STRING
        {
            Values lv;
            lv.data=*($3);
            lv.type=CHAR;
            $$=new select_cond(*$1,NE,lv);
        }
        |IDENTIFIER LT STRING
        {
            Values lv;
            lv.data=*$3;
            lv.type=CHAR;
            $$=new select_cond(*$1,LT,lv);
        }
        |IDENTIFIER LE STRING
        {
            Values lv;
            lv.data=*$3;
            lv.type=CHAR;
            $$=new select_cond(*$1,LE,lv);
        }
        |IDENTIFIER E STRING
        {
            Values lv;
            lv.data=*($3);
            lv.type=CHAR;
            $$=new select_cond(*$1,E,lv);
        }
        |IDENTIFIER GE IDENTIFIER
        {
            Values lv;
            lv.data=*($3);
            lv.type=IDENTIFIER;
            $$=new select_cond(*$1,GE,lv);
        }
        |IDENTIFIER GT IDENTIFIER
        {
            Values lv;
            lv.data=*($3);
            lv.type=IDENTIFIER;
            $$=new select_cond(*$1,GT,lv);
        }
        |IDENTIFIER NE IDENTIFIER
        {
            Values lv;
            lv.data=*($3);
            lv.type=IDENTIFIER;
            $$=new select_cond(*$1,NE,lv);
        }
        |IDENTIFIER LT IDENTIFIER
        {
            Values lv;
            lv.data=*($3);
            lv.type=IDENTIFIER;
            $$=new select_cond(*$1,LT,lv);
        }
        |IDENTIFIER LE IDENTIFIER
        {
            Values lv;
            lv.data=*($3);
            lv.type=IDENTIFIER;
            $$=new select_cond(*$1,LE,lv);
        }
        |IDENTIFIER E IDENTIFIER
        {
            Values lv;
            lv.data=*$3;
            lv.type=IDENTIFIER;
            $$=new select_cond(*$1,E,lv);
        }
        ;


        
    /* 
        need to implement select statement
    */




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


