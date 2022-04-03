bison --defines=header/parser.hpp --output=src/parser.cpp sql.y
lex -o src/tokens.cpp sql.l
cd src 
g++ * -o ../sql -I../header/
