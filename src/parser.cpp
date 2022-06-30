/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "sql.y"

	#include <iostream>
	#include <string>
	#include <vector>
    #include <bits/stdc++.h>
	#include "node.h"
    #include "sql.h"
	extern int yylex();
	int yyerror(const char*);
    extern FILE* yyin;

/* Line 371 of yacc.c  */
#line 80 "src\\parser.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_HEADER_PARSER_HPP_INCLUDED
# define YY_YY_HEADER_PARSER_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CREATE = 258,
     TABLE = 259,
     CHECK = 260,
     PRIMARY = 261,
     KEY = 262,
     FOREIGN = 263,
     REFERENCES = 264,
     CHAR = 265,
     INT = 266,
     DECIMAL = 267,
     OPEN_PAR = 268,
     CLOSE_PAR = 269,
     SEMICOLON = 270,
     COMMA = 271,
     OR = 272,
     AND = 273,
     GE = 274,
     GT = 275,
     LE = 276,
     LT = 277,
     E = 278,
     NE = 279,
     DESCRIBE = 280,
     DROP = 281,
     INSERT = 282,
     INTO = 283,
     VALUES = 284,
     DELETE = 285,
     FROM = 286,
     WHERE = 287,
     UPDATE = 288,
     SET = 289,
     SELECT = 290,
     HELP = 291,
     TABLES = 292,
     QUIT = 293,
     CONDITIONS = 294,
     IDENTIFIER = 295,
     STRING = 296,
     NUMBER = 297,
     FLOAT = 298
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
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


/* Line 387 of yacc.c  */
#line 184 "src\\parser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_HEADER_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 212 "src\\parser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNRULES -- Number of states.  */
#define YYNSTATES  185

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    40,    50,    56,    58,    62,
      73,    75,    79,    81,    83,    87,    90,    95,   100,   105,
     110,   112,   114,   116,   118,   122,   126,   128,   132,   136,
     140,   144,   148,   152,   156,   160,   165,   174,   176,   180,
     182,   184,   186,   193,   195,   197,   201,   205,   207,   211,
     215,   219,   223,   227,   231,   235,   237,   239,   241,   243,
     245,   253,   255,   259,   263,   271,   277,   279,   283,   287,
     290,   293,   296,   298,   300,   302,   304,   306
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    -1,    45,    46,    -1,    47,    -1,
      60,    -1,    61,    -1,    62,    -1,    65,    -1,    72,    -1,
      75,    -1,    77,    -1,    78,    -1,    80,    -1,     3,     4,
      40,    13,    53,    16,    48,    16,    49,    14,    15,    -1,
       3,     4,    40,    13,    53,    16,    48,    14,    15,    -1,
       6,     7,    13,    51,    14,    -1,    50,    -1,    49,    16,
      50,    -1,     8,     7,    13,    52,    14,     9,    40,    13,
      52,    14,    -1,    52,    -1,    51,    16,    52,    -1,    40,
      -1,    54,    -1,    53,    16,    54,    -1,    40,    55,    -1,
      40,    55,     5,    56,    -1,    10,    13,    42,    14,    -1,
      11,    13,    42,    14,    -1,    12,    13,    42,    14,    -1,
      11,    -1,    12,    -1,    57,    -1,    58,    -1,    57,    17,
      58,    -1,    58,    18,    59,    -1,    59,    -1,    40,    19,
      42,    -1,    40,    20,    42,    -1,    40,    24,    42,    -1,
      40,    22,    42,    -1,    40,    21,    42,    -1,    40,    23,
      42,    -1,    13,    56,    14,    -1,    25,    40,    15,    -1,
      26,     4,    40,    15,    -1,    27,    28,    40,    29,    13,
      63,    14,    15,    -1,    64,    -1,    63,    16,    64,    -1,
      42,    -1,    43,    -1,    41,    -1,    30,    31,    40,    32,
      66,    15,    -1,    67,    -1,    68,    -1,    67,    17,    68,
      -1,    68,    18,    69,    -1,    69,    -1,    40,    19,    70,
      -1,    40,    20,    70,    -1,    40,    24,    70,    -1,    40,
      22,    70,    -1,    40,    21,    70,    -1,    40,    23,    70,
      -1,    13,    66,    14,    -1,    40,    -1,    71,    -1,    41,
      -1,    42,    -1,    43,    -1,    33,    40,    34,    73,    32,
      66,    15,    -1,    74,    -1,    73,    16,    74,    -1,    40,
      23,    71,    -1,    35,    51,    31,    76,    32,    66,    15,
      -1,    35,    51,    31,    76,    15,    -1,    40,    -1,    76,
      16,    40,    -1,    36,    37,    15,    -1,    36,    79,    -1,
       3,     4,    -1,    26,     4,    -1,    35,    -1,    27,    -1,
      30,    -1,    33,    -1,    39,    -1,    38,    15,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    79,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    94,   121,   137,   140,   141,   143,
     148,   149,   151,   155,   159,   165,   166,   172,   173,   174,
     175,   176,   182,   183,   184,   191,   196,   198,   199,   200,
     201,   202,   203,   204,   210,   225,   247,   260,   264,   270,
     273,   277,   288,   297,   298,   299,   306,   313,   318,   323,
     328,   333,   337,   341,   346,   351,   357,   360,   366,   373,
     386,   395,   396,   402,   415,   419,   424,   433,   441,   446,
     447,   464,   473,   489,   504,   515,   527,   537
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CREATE", "TABLE", "CHECK", "PRIMARY",
  "KEY", "FOREIGN", "REFERENCES", "CHAR", "INT", "DECIMAL", "OPEN_PAR",
  "CLOSE_PAR", "SEMICOLON", "COMMA", "OR", "AND", "GE", "GT", "LE", "LT",
  "E", "NE", "DESCRIBE", "DROP", "INSERT", "INTO", "VALUES", "DELETE",
  "FROM", "WHERE", "UPDATE", "SET", "SELECT", "HELP", "TABLES", "QUIT",
  "CONDITIONS", "IDENTIFIER", "STRING", "NUMBER", "FLOAT", "$accept",
  "statements", "statement", "create_stmt", "primary_key", "foreign_keys",
  "foreign_key", "columns", "column", "definitions", "definition",
  "attr_type", "expr", "or_expr", "and_expr", "condition", "describe_stmt",
  "drop_stmt", "insert_stmt", "list_values", "list_value", "delete_stmt",
  "sexpr", "sor_expr", "sand_expr", "scond_b", "diff_value",
  "diff_value_without_identifier", "update_stmt", "update_values",
  "update_value", "select_stmt", "table_list", "help_tables", "help_cmd",
  "cmd", "quit_stmt", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    47,    47,    48,    49,    49,    50,
      51,    51,    52,    53,    53,    54,    54,    55,    55,    55,
      55,    55,    56,    57,    57,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    60,    61,    62,    63,    63,    64,
      64,    64,    65,    66,    67,    67,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    70,    70,    71,    71,    71,
      72,    73,    73,    74,    75,    75,    76,    76,    77,    78,
      79,    79,    79,    79,    79,    79,    79,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,    11,     9,     5,     1,     3,    10,
       1,     3,     1,     1,     3,     2,     4,     4,     4,     4,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     8,     1,     3,     1,
       1,     1,     6,     1,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       7,     1,     3,     3,     7,     5,     1,     3,     3,     2,
       2,     2,     1,     1,     1,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,    22,     0,
      20,     0,     0,    83,    84,    85,    82,     0,    86,    79,
      87,     1,     3,     0,    44,     0,     0,     0,     0,     0,
       0,    80,    81,    78,     0,    45,     0,     0,     0,     0,
      71,    21,    76,     0,     0,     0,    23,     0,     0,     0,
       0,    53,    54,    57,     0,     0,     0,    75,     0,     0,
       0,    30,    31,    25,     0,    51,    49,    50,     0,    47,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
      67,    68,    69,    73,    72,     0,    77,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,    64,    65,    58,
      66,    59,    62,    61,    63,    60,    55,    56,    70,    74,
       0,     0,     0,     0,     0,    26,    32,    33,    36,     0,
       0,     0,    46,    48,    27,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
      17,    43,    37,    38,    41,    40,    42,    39,    34,    35,
       0,     0,     0,     0,    16,     0,    14,    18,     0,     0,
       0,     0,     0,     0,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,   113,   159,   160,    29,    30,    65,
      66,    83,   135,   136,   137,   138,    13,    14,    15,    88,
      89,    16,    70,    71,    72,    73,   119,   120,    17,    59,
      60,    18,    63,    19,    20,    39,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -64
static const yytype_int16 yypact[] =
{
      29,    10,   -25,    34,    15,   -13,    17,    18,    14,    30,
       1,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,    20,    46,    23,    26,    56,    -1,   -64,     4,
     -64,    91,    93,   -64,   -64,   -64,   -64,    83,   -64,   -64,
     -64,   -64,   -64,    86,   -64,    85,    72,    70,    63,    18,
      64,   -64,   -64,   -64,    65,   -64,    94,   -11,    87,    -7,
     -64,   -64,   -64,    -9,     0,    90,   -64,    48,   -11,    49,
      96,    92,    95,   -64,    51,    63,   -11,   -64,    68,   -11,
      99,   101,   102,   111,     2,   -64,   -64,   -64,     5,   -64,
     103,    45,    45,    45,    45,    45,    45,   -64,   -11,   -11,
     -64,   -64,   -64,   -64,   -64,   104,   -64,   105,    76,    79,
      80,   -10,   116,     8,   -64,   109,    48,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,    95,   -64,   -64,   -64,
     113,   114,   115,   -10,    55,   -64,   108,   112,   -64,   118,
     117,   126,   -64,   -64,   -64,   -64,   -64,   121,    97,    98,
     100,   106,   107,   110,   -10,   -10,    18,   -64,   129,    32,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   112,   -64,
      36,   124,   123,   126,   -64,    18,   -64,   -64,   127,   134,
     119,   131,    18,   132,   -64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -64,   -64,   135,   -64,   -64,   -64,   -26,    -6,   -49,   -64,
      67,   -64,    21,   -64,     3,    -2,   -64,   -64,   -64,   -64,
      39,   -64,   -63,   -64,    58,    59,   -12,    88,   -64,   -64,
      89,   -64,   -64,   -64,   -64,   -64,   -64
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      61,    41,    68,   133,     1,    90,    77,    78,   112,    75,
      80,    81,    82,   105,    22,    23,   107,    31,    26,   115,
      49,   116,   140,    79,   141,    76,     2,     3,     4,    69,
     134,     5,     1,    48,     6,    50,     7,     8,    24,     9,
      32,    33,    64,    25,    34,    40,   172,    35,   173,    36,
     174,    37,    49,    38,     2,     3,     4,    27,    28,     5,
      43,    44,     6,    45,     7,     8,    46,     9,    91,    92,
      93,    94,    95,    96,   148,   149,   150,   151,   152,   153,
     121,   122,   123,   124,   125,   118,   100,   101,   102,    85,
      86,    87,   100,   101,   102,    51,    47,    52,    53,    54,
      55,    56,    57,    58,    62,    64,    84,    67,   106,    98,
      74,    97,   108,    99,   109,   110,   111,   117,   130,   128,
     129,   131,   132,   139,   142,   154,   178,   144,   145,   146,
     155,   156,   157,   183,   158,   161,   171,   175,   176,   162,
     163,   179,   164,   180,   182,    42,   184,   177,   165,   166,
     170,   114,   167,   169,   147,   143,   126,   168,   127,   181,
       0,     0,   103,     0,   104
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-64)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      49,     0,    13,    13,     3,    68,    15,    16,     6,    16,
      10,    11,    12,    76,     4,    40,    79,     3,    31,    14,
      16,    16,    14,    32,    16,    32,    25,    26,    27,    40,
      40,    30,     3,    34,    33,    31,    35,    36,     4,    38,
      26,    27,    40,    28,    30,    15,    14,    33,    16,    35,
      14,    37,    16,    39,    25,    26,    27,    40,    40,    30,
      40,    15,    33,    40,    35,    36,    40,    38,    19,    20,
      21,    22,    23,    24,    19,    20,    21,    22,    23,    24,
      92,    93,    94,    95,    96,    40,    41,    42,    43,    41,
      42,    43,    41,    42,    43,     4,    40,     4,    15,    13,
      15,    29,    32,    40,    40,    40,    16,    13,    40,    17,
      23,    15,    13,    18,    13,    13,     5,    14,    42,    15,
      15,    42,    42,     7,    15,    17,   175,    14,    14,    14,
      18,    13,    15,   182,     8,    14,     7,    13,    15,    42,
      42,    14,    42,     9,    13,    10,    14,   173,    42,    42,
     156,    84,    42,   155,   133,   116,    98,   154,    99,    40,
      -1,    -1,    74,    -1,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    25,    26,    27,    30,    33,    35,    36,    38,
      45,    46,    47,    60,    61,    62,    65,    72,    75,    77,
      78,    80,     4,    40,     4,    28,    31,    40,    40,    51,
      52,     3,    26,    27,    30,    33,    35,    37,    39,    79,
      15,     0,    46,    40,    15,    40,    40,    40,    34,    16,
      31,     4,     4,    15,    13,    15,    29,    32,    40,    73,
      74,    52,    40,    76,    40,    53,    54,    13,    13,    40,
      66,    67,    68,    69,    23,    16,    32,    15,    16,    32,
      10,    11,    12,    55,    16,    41,    42,    43,    63,    64,
      66,    19,    20,    21,    22,    23,    24,    15,    17,    18,
      41,    42,    43,    71,    74,    66,    40,    66,    13,    13,
      13,     5,     6,    48,    54,    14,    16,    14,    40,    70,
      71,    70,    70,    70,    70,    70,    68,    69,    15,    15,
      42,    42,    42,    13,    40,    56,    57,    58,    59,     7,
      14,    16,    15,    64,    14,    14,    14,    56,    19,    20,
      21,    22,    23,    24,    17,    18,    13,    15,     8,    49,
      50,    14,    42,    42,    42,    42,    42,    42,    58,    59,
      51,     7,    14,    16,    14,    13,    15,    50,    52,    14,
       9,    40,    13,    52,    14
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 14:
/* Line 1792 of yacc.c  */
#line 95 "sql.y"
    { // i need to check whether the table exist 
			// if so then the raise an error
			// otherwise i need to create the table
            add_reference_attr((yyvsp[(9) - (11)].refer_list),*(yyvsp[(3) - (11)].string));
            
            raise_foreign_key((yyvsp[(5) - (11)].cols),(yyvsp[(9) - (11)].refer_list));
            raise_primary_key((yyvsp[(5) - (11)].cols),(yyvsp[(7) - (11)].string_array));
            if(check_table(*(yyvsp[(3) - (11)].string))==true)
                yyerror("The Table already exists\n");
            create_table(*(yyvsp[(3) - (11)].string),(yyvsp[(5) - (11)].cols));


            // this is for deleting stuff
            for(col* column : *(yyvsp[(5) - (11)].cols))
                delete column;
            delete (yyvsp[(5) - (11)].cols);
			for(std::string* str: *(yyvsp[(7) - (11)].string_array))
				delete str;
            delete (yyvsp[(7) - (11)].string_array);
			for(reference* ref:*(yyvsp[(9) - (11)].refer_list))
				delete ref;
            delete (yyvsp[(9) - (11)].refer_list);
			std::cout<<"Table Created\n";

            
	}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 122 "sql.y"
    {
        raise_primary_key((yyvsp[(5) - (9)].cols),(yyvsp[(7) - (9)].string_array));
        if(check_table(*(yyvsp[(3) - (9)].string))==true)
                yyerror("The Table already exists\n");
        create_table(*(yyvsp[(3) - (9)].string),(yyvsp[(5) - (9)].cols));
        for(col* column : *(yyvsp[(5) - (9)].cols))
            delete column;
		delete (yyvsp[(5) - (9)].cols);
		for(std::string* str: *(yyvsp[(7) - (9)].string_array))
			delete str;
        delete (yyvsp[(7) - (9)].string_array);
		std::cout<<"Table Created\n";
    }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 137 "sql.y"
    {  (yyval.string_array)=(yyvsp[(4) - (5)].string_array);  }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 140 "sql.y"
    { (yyval.refer_list)=new reference_list;(yyval.refer_list)->push_back((yyvsp[(1) - (1)].refer)); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 141 "sql.y"
    { (yyvsp[(1) - (3)].refer_list)->push_back((yyvsp[(3) - (3)].refer)); (yyval.refer_list)=(yyvsp[(1) - (3)].refer_list);  }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 144 "sql.y"
    { (yyval.refer)=new reference(*(yyvsp[(7) - (10)].string),*(yyvsp[(9) - (10)].string),*(yyvsp[(4) - (10)].string)); delete (yyvsp[(7) - (10)].string); delete (yyvsp[(9) - (10)].string);delete (yyvsp[(4) - (10)].string); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 148 "sql.y"
    {  (yyval.string_array)=new std::vector<std::string*>(); (yyval.string_array)->push_back((yyvsp[(1) - (1)].string));  }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 149 "sql.y"
    {  (yyvsp[(1) - (3)].string_array)->push_back((yyvsp[(3) - (3)].string));(yyval.string_array)=(yyvsp[(1) - (3)].string_array);  }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 151 "sql.y"
    { (yyval.string)=(yyvsp[(1) - (1)].string);}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 155 "sql.y"
    { 
           (yyval.cols)=new col_list;
           (yyval.cols)->push_back((yyvsp[(1) - (1)].column));
           }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 159 "sql.y"
    { 
            (yyvsp[(1) - (3)].cols)->push_back((yyvsp[(3) - (3)].column));
            (yyval.cols)=(yyvsp[(1) - (3)].cols);
        }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 165 "sql.y"
    { (yyvsp[(2) - (2)].column)->column_name=*(yyvsp[(1) - (2)].string); (yyval.column)=(yyvsp[(2) - (2)].column); delete (yyvsp[(1) - (2)].string); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 166 "sql.y"
    { (yyvsp[(2) - (4)].column)->column_name=*(yyvsp[(1) - (4)].string);
			(yyvsp[(2) - (4)].column)->conditions=(yyvsp[(4) - (4)].condition); 
			(yyval.column)=(yyvsp[(2) - (4)].column);
			delete (yyvsp[(1) - (4)].string);
			}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 172 "sql.y"
    { (yyval.column)=new col(CHAR,(yyvsp[(3) - (4)].ival),""); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 173 "sql.y"
    { (yyval.column)=new col(INT,(yyvsp[(3) - (4)].ival),""); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 174 "sql.y"
    { (yyval.column)=new col(DECIMAL,(yyvsp[(3) - (4)].ival),""); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 175 "sql.y"
    { (yyval.column)=new col(INT,8,""); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 176 "sql.y"
    { (yyval.column)=new col(DECIMAL,8,""); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 182 "sql.y"
    { (yyval.condition)=(yyvsp[(1) - (1)].condition);}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 183 "sql.y"
    { (yyval.condition)=(yyvsp[(1) - (1)].condition);}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 184 "sql.y"
    {  
		(yyval.condition)=new cond(OR,-1,"");
		(yyval.condition)->left=(yyvsp[(1) - (3)].condition);
		(yyval.condition)->right=(yyvsp[(3) - (3)].condition);
		}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 191 "sql.y"
    {
		(yyval.condition)=new cond(AND,-1,"");
		(yyval.condition)->left=(yyvsp[(1) - (3)].condition);
		(yyval.condition)->right=(yyvsp[(3) - (3)].condition);
		}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 196 "sql.y"
    { (yyval.condition)=(yyvsp[(1) - (1)].condition);}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 198 "sql.y"
    { (yyval.condition)=new cond(GE,(yyvsp[(3) - (3)].ival),*(yyvsp[(1) - (3)].string)); delete (yyvsp[(1) - (3)].string); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 199 "sql.y"
    { (yyval.condition)=new cond(GT,(yyvsp[(3) - (3)].ival),*(yyvsp[(1) - (3)].string)); delete (yyvsp[(1) - (3)].string); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 200 "sql.y"
    { (yyval.condition)=new cond(NE,(yyvsp[(3) - (3)].ival),*(yyvsp[(1) - (3)].string));	delete (yyvsp[(1) - (3)].string); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 201 "sql.y"
    { (yyval.condition)=new cond(LT,(yyvsp[(3) - (3)].ival),*(yyvsp[(1) - (3)].string));	delete (yyvsp[(1) - (3)].string); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 202 "sql.y"
    { (yyval.condition)=new cond(LE,(yyvsp[(3) - (3)].ival),*(yyvsp[(1) - (3)].string));	delete (yyvsp[(1) - (3)].string); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 203 "sql.y"
    { (yyval.condition)=new cond(E,(yyvsp[(3) - (3)].ival),*(yyvsp[(1) - (3)].string)); 	delete (yyvsp[(1) - (3)].string); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 204 "sql.y"
    { (yyval.condition)=(yyvsp[(2) - (3)].condition);}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 211 "sql.y"
    {
                if(check_table(*(yyvsp[(2) - (3)].string))==true)
                {
                    col_list* cols=get_table(*(yyvsp[(2) - (3)].string));
                    display_table(cols);
                    for(col* column : *cols)
                        delete column;
                    delete cols;
                    
                }
                else
                    yyerror("The Table Does not exists");
             }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 226 "sql.y"
    {
                if(check_table(*(yyvsp[(3) - (4)].string))==true)
                    {
                        drop_table(*(yyvsp[(3) - (4)].string));
                        std::cout<<"Table Dropped successfully\n";
                    }
                else
                    yyerror("The Table Does not exists");

         }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 247 "sql.y"
    {
				if(check_table(*(yyvsp[(3) - (8)].string))==true)
                {
                        insert_into_table(*(yyvsp[(3) - (8)].string),(yyvsp[(6) - (8)].literals_list));
                        std::cout<<"Inserted successfully\n";
                }
                else
                    yyerror("The Table Does not exists");

			}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 260 "sql.y"
    {
				(yyval.literals_list)=new values_list();
				(yyval.literals_list)->push_back((yyvsp[(1) - (1)].literal));
			}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 265 "sql.y"
    {
				(yyvsp[(1) - (3)].literals_list)->push_back((yyvsp[(3) - (3)].literal));
                (yyval.literals_list)=(yyvsp[(1) - (3)].literals_list);
			}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 270 "sql.y"
    {
				(yyval.literal)=new Values(std::to_string((yyvsp[(1) - (1)].ival)),INT);
			}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 274 "sql.y"
    {
				(yyval.literal)=new Values(std::to_string((yyvsp[(1) - (1)].fval)),DECIMAL);
			}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 278 "sql.y"
    {
				(yyval.literal)=new Values(*(yyvsp[(1) - (1)].string),CHAR);
			}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 289 "sql.y"
    {
				if(check_table(*(yyvsp[(3) - (6)].string))==true)
                        delete_from_table(*(yyvsp[(3) - (6)].string),(yyvsp[(5) - (6)].scond));
                else
                    yyerror("The Table Does not exists");
           }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 297 "sql.y"
    {(yyval.scond)=(yyvsp[(1) - (1)].scond);}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 298 "sql.y"
    {  (yyval.scond)=(yyvsp[(1) - (1)].scond); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 299 "sql.y"
    {
         (yyval.scond)=new select_cond();
         (yyval.scond)->left=(yyvsp[(1) - (3)].scond);
         (yyval.scond)->right=(yyvsp[(3) - (3)].scond);
         (yyval.scond)->relation_type=OR;
        }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 307 "sql.y"
    {  
            (yyval.scond)=new select_cond();
            (yyval.scond)->left =(yyvsp[(1) - (3)].scond);
            (yyval.scond)->right=(yyvsp[(3) - (3)].scond);
            (yyval.scond)->relation_type=AND;
        }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 314 "sql.y"
    {
            (yyval.scond)=(yyvsp[(1) - (1)].scond);
        }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 318 "sql.y"
    {
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),GE,(yyvsp[(3) - (3)].literal)->data,(yyvsp[(3) - (3)].literal)->type);
            delete (yyvsp[(3) - (3)].literal);

        }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 323 "sql.y"
    {
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),GT,(yyvsp[(3) - (3)].literal)->data,(yyvsp[(3) - (3)].literal)->type);
            delete (yyvsp[(3) - (3)].literal);

        }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 328 "sql.y"
    {
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),NE,(yyvsp[(3) - (3)].literal)->data,(yyvsp[(3) - (3)].literal)->type);
            delete (yyvsp[(3) - (3)].literal);
        
        }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 333 "sql.y"
    {
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),LT,(yyvsp[(3) - (3)].literal)->data,(yyvsp[(3) - (3)].literal)->type);
            delete (yyvsp[(3) - (3)].literal);
        }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 337 "sql.y"
    {
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),LE,(yyvsp[(3) - (3)].literal)->data,(yyvsp[(3) - (3)].literal)->type);
            delete (yyvsp[(3) - (3)].literal);
        }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 342 "sql.y"
    {
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),E,(yyvsp[(3) - (3)].literal)->data,(yyvsp[(3) - (3)].literal)->type);
            delete (yyvsp[(3) - (3)].literal);
        }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 347 "sql.y"
    {
            (yyval.scond)=(yyvsp[(2) - (3)].scond);
        }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 352 "sql.y"
    {  
                (yyval.literal)=new Values();
                (yyval.literal)->data=*(yyvsp[(1) - (1)].string);
                (yyval.literal)->type=IDENTIFIER;
          }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 357 "sql.y"
    { (yyval.literal)=(yyvsp[(1) - (1)].literal); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 361 "sql.y"
    {  
                (yyval.literal)=new Values();
                (yyval.literal)->data=*(yyvsp[(1) - (1)].string);
                (yyval.literal)->type=CHAR;    
          }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 367 "sql.y"
    {

                (yyval.literal)=new Values();
                (yyval.literal)->data=std::to_string((yyvsp[(1) - (1)].ival));
                (yyval.literal)->type=INT;    
          }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 374 "sql.y"
    {

                (yyval.literal)=new Values();
                (yyval.literal)->data=std::to_string((yyvsp[(1) - (1)].fval));
                (yyval.literal)->type=DECIMAL;    
          }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 387 "sql.y"
    {
				if(check_table(*(yyvsp[(2) - (7)].string))==true)
                        update_table(*(yyvsp[(2) - (7)].string),(yyvsp[(4) - (7)].list_sets),(yyvsp[(6) - (7)].scond));
                else
                    yyerror("The Table Does not exists");
           }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 395 "sql.y"
    { (yyval.list_sets)=new update_sets; (yyval.list_sets)->push_back((yyvsp[(1) - (1)].update_set_val)); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 397 "sql.y"
    {
                (yyvsp[(1) - (3)].list_sets)->push_back((yyvsp[(3) - (3)].update_set_val));
                (yyval.list_sets)=(yyvsp[(1) - (3)].list_sets);
             }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 403 "sql.y"
    {
                update_set * new_set= new update_set(*(yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].literal)->data,(yyvsp[(3) - (3)].literal)->type);
                delete (yyvsp[(3) - (3)].literal);
                (yyval.update_set_val)=new_set;
            }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 416 "sql.y"
    {
              select_from_tables((yyvsp[(2) - (7)].string_array),(yyvsp[(4) - (7)].string_array),(yyvsp[(6) - (7)].scond));  
           }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 420 "sql.y"
    {
                select_from_tables((yyvsp[(2) - (5)].string_array),(yyvsp[(4) - (5)].string_array),nullptr);
            }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 425 "sql.y"
    { 
                std::vector<std::string*>* strings=new std::vector<std::string*>;
                if(check_table(*(yyvsp[(1) - (1)].string)))
                    strings->push_back((yyvsp[(1) - (1)].string));
                else 
                    yyerror("The table does not exists");
                (yyval.string_array)=strings;
          }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 433 "sql.y"
    {
                if(check_table(*(yyvsp[(3) - (3)].string)))
                    (yyvsp[(1) - (3)].string_array)->push_back((yyvsp[(3) - (3)].string));
                else 
                    yyerror("The table does not exists");
                (yyval.string_array)=(yyvsp[(1) - (3)].string_array);
          }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 442 "sql.y"
    {
                help_tables();
           }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 447 "sql.y"
    {
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
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 465 "sql.y"
    {
		std::string print_string="\n\nDrop Table : \n"
		"\tDROP TABLE table_name;\n"
		"The table_name specified will be dropped.\n"
		"The table is dropped temporarily\n"
		"If Commit is passed after this command the table will be dropped Permanently\n";
		std::cout<<print_string<<std::endl;
   }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 474 "sql.y"
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
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 490 "sql.y"
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
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 505 "sql.y"
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
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 516 "sql.y"
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
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 528 "sql.y"
    {
		std::string print_string="\n\nThe Conditions :\n"
		"\t\toperand1 operator operand2\n"
		"The operand1 is always some column_name .\n"
		"The operator can be >,<,<=,>=,=\n"
		"The operand2 can be column name or string literal , decimal or integer\n";
		std::cout<<print_string<<std::endl;
   }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 538 "sql.y"
    {
		 	save_to_buffer();
			exit(0);
		 }
    break;


/* Line 1792 of yacc.c  */
#line 2264 "src\\parser.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 546 "sql.y"





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


