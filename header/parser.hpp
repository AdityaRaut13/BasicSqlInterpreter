/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HEADER_PARSER_HPP_INCLUDED
# define YY_YY_HEADER_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CREATE = 258,                  /* CREATE  */
    TABLE = 259,                   /* TABLE  */
    CHECK = 260,                   /* CHECK  */
    PRIMARY = 261,                 /* PRIMARY  */
    KEY = 262,                     /* KEY  */
    FOREIGN = 263,                 /* FOREIGN  */
    REFERENCES = 264,              /* REFERENCES  */
    CHAR = 265,                    /* CHAR  */
    INT = 266,                     /* INT  */
    DECIMAL = 267,                 /* DECIMAL  */
    OPEN_PAR = 268,                /* OPEN_PAR  */
    CLOSE_PAR = 269,               /* CLOSE_PAR  */
    SEMICOLON = 270,               /* SEMICOLON  */
    COMMA = 271,                   /* COMMA  */
    OR = 272,                      /* OR  */
    AND = 273,                     /* AND  */
    GE = 274,                      /* GE  */
    GT = 275,                      /* GT  */
    LE = 276,                      /* LE  */
    LT = 277,                      /* LT  */
    E = 278,                       /* E  */
    NE = 279,                      /* NE  */
    DESCRIBE = 280,                /* DESCRIBE  */
    DROP = 281,                    /* DROP  */
    INSERT = 282,                  /* INSERT  */
    INTO = 283,                    /* INTO  */
    VALUES = 284,                  /* VALUES  */
    DELETE = 285,                  /* DELETE  */
    FROM = 286,                    /* FROM  */
    WHERE = 287,                   /* WHERE  */
    UPDATE = 288,                  /* UPDATE  */
    SET = 289,                     /* SET  */
    SELECT = 290,                  /* SELECT  */
    IDENTIFIER = 291,              /* IDENTIFIER  */
    STRING = 292,                  /* STRING  */
    NUMBER = 293,                  /* NUMBER  */
    FLOAT = 294                    /* FLOAT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "sql.y"

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

#line 120 "header/parser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_HEADER_PARSER_HPP_INCLUDED  */
