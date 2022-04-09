%option noyywrap
%{
	#include <string>
	#include <vector>
	#include "node.h"
	#include "parser.hpp"

%}
%%


CREATE return CREATE;
TABLE return TABLE;
CHECK return CHECK ;
PRIMARY return PRIMARY;
KEY return KEY;
FOREIGN return FOREIGN;
REFERENCES return REFERENCES;
CHAR return CHAR;
INT return INT;
DECIMAL return DECIMAL;
DESCRIBE return DESCRIBE;
AND return AND;
OR return OR;
[-+]?[0-9]+ {   yylval.ival=atoi(yytext);  return NUMBER; }

  /*[1-9][0-9]+\.[0-9]+([eE][+-]?[0-9]+)? { yylval.fval=atof(yytext); return FLOAT; }
	*/

\( return OPEN_PAR;
\) return CLOSE_PAR;
\; return SEMICOLON;
, return COMMA;
">" return GT;
">=" return GE;
"<" return LT;
"<=" return LE;
"=" return E;
"!=" return NE;
[a-zA-Z_][a-zA-Z0-9_]+ {
	yylval.string=new std::string(yytext);
	return IDENTIFIER;
	}
[ \t\n]+ {}

. { }


%%
