#!/bin/bash
bison --defines=header/parser.hpp --output=src/parser.cpp \
    --verbose  --report all  --report-file=trace  sql.y
lex -o src/tokens.cpp sql.l
cd src 
g++ *.cpp -o ../sql -I../header/
cd ..
rm dbms/tables/*
echo -n > dbms/catalog.txt
#./sql test
