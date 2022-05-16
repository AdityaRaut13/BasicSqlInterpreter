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
     IDENTIFIER = 288,
     STRING = 289,
     NUMBER = 290,
     FLOAT = 291
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CREATE = 3,                     /* CREATE  */
  YYSYMBOL_TABLE = 4,                      /* TABLE  */
  YYSYMBOL_CHECK = 5,                      /* CHECK  */
  YYSYMBOL_PRIMARY = 6,                    /* PRIMARY  */
  YYSYMBOL_KEY = 7,                        /* KEY  */
  YYSYMBOL_FOREIGN = 8,                    /* FOREIGN  */
  YYSYMBOL_REFERENCES = 9,                 /* REFERENCES  */
  YYSYMBOL_CHAR = 10,                      /* CHAR  */
  YYSYMBOL_INT = 11,                       /* INT  */
  YYSYMBOL_DECIMAL = 12,                   /* DECIMAL  */
  YYSYMBOL_OPEN_PAR = 13,                  /* OPEN_PAR  */
  YYSYMBOL_CLOSE_PAR = 14,                 /* CLOSE_PAR  */
  YYSYMBOL_SEMICOLON = 15,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 16,                     /* COMMA  */
  YYSYMBOL_OR = 17,                        /* OR  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_GE = 19,                        /* GE  */
  YYSYMBOL_GT = 20,                        /* GT  */
  YYSYMBOL_LE = 21,                        /* LE  */
  YYSYMBOL_LT = 22,                        /* LT  */
  YYSYMBOL_E = 23,                         /* E  */
  YYSYMBOL_NE = 24,                        /* NE  */
  YYSYMBOL_DESCRIBE = 25,                  /* DESCRIBE  */
  YYSYMBOL_DROP = 26,                      /* DROP  */
  YYSYMBOL_INSERT = 27,                    /* INSERT  */
  YYSYMBOL_INTO = 28,                      /* INTO  */
  YYSYMBOL_VALUES = 29,                    /* VALUES  */
  YYSYMBOL_DELETE = 30,                    /* DELETE  */
  YYSYMBOL_FROM = 31,                      /* FROM  */
  YYSYMBOL_WHERE = 32,                     /* WHERE  */
  YYSYMBOL_UPDATE = 33,                    /* UPDATE  */
  YYSYMBOL_SET = 34,                       /* SET  */
  YYSYMBOL_SELECT = 35,                    /* SELECT  */
  YYSYMBOL_HELP = 36,                      /* HELP  */
  YYSYMBOL_TABLES = 37,                    /* TABLES  */
  YYSYMBOL_QUIT = 38,                      /* QUIT  */
  YYSYMBOL_CONDITIONS = 39,                /* CONDITIONS  */
  YYSYMBOL_IDENTIFIER = 40,                /* IDENTIFIER  */
  YYSYMBOL_STRING = 41,                    /* STRING  */
  YYSYMBOL_NUMBER = 42,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 43,                     /* FLOAT  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_statements = 45,                /* statements  */
  YYSYMBOL_statement = 46,                 /* statement  */
  YYSYMBOL_create_stmt = 47,               /* create_stmt  */
  YYSYMBOL_primary_key = 48,               /* primary_key  */
  YYSYMBOL_foreign_keys = 49,              /* foreign_keys  */
  YYSYMBOL_foreign_key = 50,               /* foreign_key  */
  YYSYMBOL_columns = 51,                   /* columns  */
  YYSYMBOL_column = 52,                    /* column  */
  YYSYMBOL_definitions = 53,               /* definitions  */
  YYSYMBOL_definition = 54,                /* definition  */
  YYSYMBOL_attr_type = 55,                 /* attr_type  */
  YYSYMBOL_expr = 56,                      /* expr  */
  YYSYMBOL_or_expr = 57,                   /* or_expr  */
  YYSYMBOL_and_expr = 58,                  /* and_expr  */
  YYSYMBOL_condition = 59,                 /* condition  */
  YYSYMBOL_describe_stmt = 60,             /* describe_stmt  */
  YYSYMBOL_drop_stmt = 61,                 /* drop_stmt  */
  YYSYMBOL_insert_stmt = 62,               /* insert_stmt  */
  YYSYMBOL_list_values = 63,               /* list_values  */
  YYSYMBOL_list_value = 64,                /* list_value  */
  YYSYMBOL_delete_stmt = 65,               /* delete_stmt  */
  YYSYMBOL_sexpr = 66,                     /* sexpr  */
  YYSYMBOL_sor_expr = 67,                  /* sor_expr  */
  YYSYMBOL_sand_expr = 68,                 /* sand_expr  */
  YYSYMBOL_scond_b = 69,                   /* scond_b  */
  YYSYMBOL_diff_value = 70,                /* diff_value  */
  YYSYMBOL_diff_value_without_identifier = 71, /* diff_value_without_identifier  */
  YYSYMBOL_update_stmt = 72,               /* update_stmt  */
  YYSYMBOL_update_values = 73,             /* update_values  */
  YYSYMBOL_update_value = 74,              /* update_value  */
  YYSYMBOL_select_stmt = 75,               /* select_stmt  */
  YYSYMBOL_table_list = 76,                /* table_list  */
  YYSYMBOL_help_tables = 77,               /* help_tables  */
  YYSYMBOL_help_cmd = 78,                  /* help_cmd  */
  YYSYMBOL_cmd = 79,                       /* cmd  */
  YYSYMBOL_quit_stmt = 80                  /* quit_stmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Line 387 of yacc.c  */
#line 175 "src\\parser.cpp"
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
#line 203 "src\\parser.cpp"

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
#define YYLAST   161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
<<<<<<< HEAD
#define YYNRULES  76
/* YYNRULES -- Number of states.  */
#define YYNSTATES  151

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291
=======
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05

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
      30,    40,    46,    48,    52,    63,    65,    69,    71,    73,
      77,    80,    85,    90,    95,   100,   102,   104,   106,   108,
     112,   116,   118,   122,   126,   130,   134,   138,   142,   146,
     150,   155,   164,   166,   170,   172,   174,   176,   183,   185,
     187,   191,   195,   197,   201,   205,   209,   213,   217,   221,
     225,   229,   233,   237,   241,   245,   249,   253,   257,   261,
     265,   269,   273,   277,   281,   285,   289
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      38,     0,    -1,    39,    -1,    38,    39,    -1,    40,    -1,
      53,    -1,    54,    -1,    55,    -1,    58,    -1,     3,     4,
      33,    13,    46,    16,    41,    16,    42,    14,    15,    -1,
       3,     4,    33,    13,    46,    16,    41,    14,    15,    -1,
       6,     7,    13,    44,    14,    -1,    43,    -1,    42,    16,
      43,    -1,     8,     7,    13,    45,    14,     9,    33,    13,
      45,    14,    -1,    45,    -1,    44,    16,    45,    -1,    33,
      -1,    47,    -1,    46,    16,    47,    -1,    33,    48,    -1,
      33,    48,     5,    49,    -1,    10,    13,    35,    14,    -1,
      11,    13,    35,    14,    -1,    12,    13,    35,    14,    -1,
      11,    -1,    12,    -1,    50,    -1,    51,    -1,    50,    17,
      51,    -1,    51,    18,    52,    -1,    52,    -1,    33,    19,
      35,    -1,    33,    20,    35,    -1,    33,    24,    35,    -1,
      33,    22,    35,    -1,    33,    21,    35,    -1,    33,    23,
      35,    -1,    13,    49,    14,    -1,    25,    33,    15,    -1,
      26,     4,    33,    15,    -1,    27,    28,    33,    29,    13,
      56,    14,    15,    -1,    57,    -1,    56,    16,    57,    -1,
      35,    -1,    36,    -1,    34,    -1,    30,    31,    33,    32,
      59,    15,    -1,    60,    -1,    61,    -1,    60,    17,    61,
      -1,    61,    18,    62,    -1,    62,    -1,    33,    19,    35,
      -1,    33,    20,    35,    -1,    33,    24,    35,    -1,    33,
      22,    35,    -1,    33,    21,    35,    -1,    33,    23,    35,
      -1,    33,    19,    36,    -1,    33,    20,    36,    -1,    33,
      24,    36,    -1,    33,    22,    36,    -1,    33,    21,    36,
      -1,    33,    23,    36,    -1,    33,    19,    34,    -1,    33,
      20,    34,    -1,    33,    24,    34,    -1,    33,    22,    34,
      -1,    33,    21,    34,    -1,    33,    23,    34,    -1,    33,
      19,    33,    -1,    33,    20,    33,    -1,    33,    24,    33,
      -1,    33,    22,    33,    -1,    33,    21,    33,    -1,    33,
      23,    33,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    79,    79,    80,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    95,   120,   134,   137,   138,   140,
     145,   146,   148,   152,   156,   162,   163,   169,   170,   171,
     172,   173,   179,   180,   181,   188,   193,   195,   196,   197,
     198,   199,   200,   201,   207,   222,   244,   257,   261,   267,
     270,   274,   285,   294,   295,   296,   303,   310,   315,   320,
     325,   330,   334,   338,   343,   348,   354,   357,   363,   370,
     383,   392,   393,   399,   412,   417,   426,   434,   439,   440,
     457,   466,   482,   497,   508,   520,   530
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
<<<<<<< HEAD
  "$end", "error", "$undefined", "CREATE", "TABLE", "CHECK", "PRIMARY",
  "KEY", "FOREIGN", "REFERENCES", "CHAR", "INT", "DECIMAL", "OPEN_PAR",
  "CLOSE_PAR", "SEMICOLON", "COMMA", "OR", "AND", "GE", "GT", "LE", "LT",
  "E", "NE", "DESCRIBE", "DROP", "INSERT", "INTO", "VALUES", "DELETE",
  "FROM", "WHERE", "IDENTIFIER", "STRING", "NUMBER", "FLOAT", "$accept",
  "statements", "statement", "create_stmt", "primary_key", "foreign_keys",
  "foreign_key", "columns", "column", "definitions", "definition",
  "attr_type", "expr", "or_expr", "and_expr", "condition", "describe_stmt",
  "drop_stmt", "insert_stmt", "list_values", "list_value", "delete_stmt",
  "sexpr", "sor_expr", "sand_expr", "scond_b", YY_NULL
=======
  "\"end of file\"", "error", "\"invalid token\"", "CREATE", "TABLE",
  "CHECK", "PRIMARY", "KEY", "FOREIGN", "REFERENCES", "CHAR", "INT",
  "DECIMAL", "OPEN_PAR", "CLOSE_PAR", "SEMICOLON", "COMMA", "OR", "AND",
  "GE", "GT", "LE", "LT", "E", "NE", "DESCRIBE", "DROP", "INSERT", "INTO",
  "VALUES", "DELETE", "FROM", "WHERE", "UPDATE", "SET", "SELECT", "HELP",
  "TABLES", "QUIT", "CONDITIONS", "IDENTIFIER", "STRING", "NUMBER",
  "FLOAT", "$accept", "statements", "statement", "create_stmt",
  "primary_key", "foreign_keys", "foreign_key", "columns", "column",
  "definitions", "definition", "attr_type", "expr", "or_expr", "and_expr",
  "condition", "describe_stmt", "drop_stmt", "insert_stmt", "list_values",
  "list_value", "delete_stmt", "sexpr", "sor_expr", "sand_expr", "scond_b",
  "diff_value", "diff_value_without_identifier", "update_stmt",
  "update_values", "update_value", "select_stmt", "table_list",
  "help_tables", "help_cmd", "cmd", "quit_stmt", YY_NULLPTR
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
};
#endif

<<<<<<< HEAD
# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
# endif
=======
#define YYPACT_NINF (-64)
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    38,    39,    39,    39,    39,    39,    40,
      40,    41,    42,    42,    43,    44,    44,    45,    46,    46,
      47,    47,    48,    48,    48,    48,    48,    49,    50,    50,
      51,    51,    52,    52,    52,    52,    52,    52,    52,    53,
      54,    55,    56,    56,    57,    57,    57,    58,    59,    60,
      60,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,    11,
       9,     5,     1,     3,    10,     1,     3,     1,     1,     3,
       2,     4,     4,     4,     4,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     8,     1,     3,     1,     1,     1,     6,     1,     1,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     2,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     0,     1,     3,
       0,    39,     0,     0,     0,     0,    40,     0,     0,     0,
       0,    18,     0,     0,     0,    48,    49,    52,     0,    25,
      26,    20,     0,    46,    44,    45,     0,    42,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,    71,    65,    53,    59,
      72,    66,    54,    60,    75,    69,    57,    63,    74,    68,
      56,    62,    76,    70,    58,    64,    73,    67,    55,    61,
      50,    51,     0,     0,     0,     0,     0,    21,    27,    28,
      31,     0,     0,     0,    41,    43,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,    12,    38,    32,    33,    36,    35,    37,    34,
      29,    30,    17,     0,    15,     0,     0,     0,    11,     0,
       0,     9,    13,    16,     0,     0,     0,     0,     0,     0,
      14
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    62,   121,   122,   133,   134,    30,
      31,    41,    97,    98,    99,   100,     9,    10,    11,    46,
      47,    12,    34,    35,    36,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -136
static const yytype_int16 yypact[] =
{
      29,    10,   -34,    12,    15,   -13,    -2,    17,    14,    18,
       1,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,    20,    30,    21,    23,    26,    24,   -64,     4,
     -64,    91,    92,   -64,   -64,   -64,   -64,    82,   -64,   -64,
     -64,   -64,   -64,    85,   -64,    84,    71,    69,    62,    17,
      63,   -64,   -64,   -64,    64,   -64,    93,   -11,    86,    -9,
     -64,   -64,   -64,    -7,     0,    89,   -64,    39,   -11,    49,
      95,    90,    94,   -64,    51,    62,   -11,    68,   -11,    98,
     100,   101,   110,     2,   -64,   -64,   -64,     5,   -64,   102,
      48,    48,    48,    48,    48,    48,   -64,   -11,   -11,   -64,
     -64,   -64,   -64,   -64,   103,   -64,   104,    75,    78,    79,
     -10,   115,     8,   -64,   108,    39,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,    94,   -64,   -64,   -64,   112,
     113,   114,   -10,    55,   -64,   107,   111,   -64,   117,   116,
     125,   -64,   -64,   -64,   -64,   -64,   120,    96,    97,    99,
     105,   106,   109,   -10,   -10,    17,   -64,   128,    32,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   111,   -64,    36,
     123,   122,   125,   -64,    17,   -64,   -64,   126,   133,   118,
     130,    17,   131,   -64
};

<<<<<<< HEAD
=======
/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,    22,     0,
      20,     0,     0,    82,    83,    84,    81,     0,    85,    78,
      86,     1,     3,     0,    44,     0,     0,     0,     0,     0,
       0,    79,    80,    77,     0,    45,     0,     0,     0,     0,
      71,    21,    75,     0,     0,     0,    23,     0,     0,     0,
       0,    53,    54,    57,     0,     0,     0,     0,     0,     0,
      30,    31,    25,     0,    51,    49,    50,     0,    47,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,    67,
      68,    69,    73,    72,     0,    76,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,    64,    65,    58,    66,
      59,    62,    61,    63,    60,    55,    56,    70,    74,     0,
       0,     0,     0,     0,    26,    32,    33,    36,     0,     0,
       0,    46,    48,    27,    28,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,     0,    17,
      43,    37,    38,    41,    40,    42,    39,    34,    35,     0,
       0,     0,     0,    16,     0,    14,    18,     0,     0,     0,
       0,     0,     0,    19
};

>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -64,   -64,   134,   -64,   -64,   -64,   -26,    -6,   -49,   -64,
      67,   -64,    22,   -64,    -1,     3,   -64,   -64,   -64,   -64,
      38,   -64,   -63,   -64,    58,    61,    -8,    87,   -64,   -64,
      81,   -64,   -64,   -64,   -64,   -64,   -64
};

<<<<<<< HEAD
/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
=======
/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    11,    12,   112,   158,   159,    29,    30,    65,
      66,    82,   134,   135,   136,   137,    13,    14,    15,    87,
      88,    16,    70,    71,    72,    73,   118,   119,    17,    59,
      60,    18,    63,    19,    20,    39,    21
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      61,    41,    68,   132,     1,    89,    23,    75,   111,    77,
      79,    80,    81,   104,    22,   106,    24,    31,    26,   114,
      49,   115,   139,    76,   140,    78,     2,     3,     4,    69,
     133,     5,     1,    40,     6,    50,     7,     8,    27,     9,
      32,    33,    64,    25,    34,    44,   171,    35,   172,    36,
     173,    37,    49,    38,     2,     3,     4,    28,    48,     5,
      43,    45,     6,    46,     7,     8,    47,     9,    90,    91,
      92,    93,    94,    95,   147,   148,   149,   150,   151,   152,
      84,    85,    86,   120,   121,   122,   123,   124,   117,    99,
     100,   101,    99,   100,   101,    51,    52,    53,    54,    55,
      56,    57,    58,    62,    64,    83,    67,    97,   105,    74,
      96,   107,    98,   108,   109,   110,   116,   129,   127,   128,
     130,   131,   138,   141,   153,   177,   143,   144,   145,   154,
     155,   156,   182,   157,   160,   170,   174,   175,   161,   162,
     178,   163,   179,   181,    42,   183,   176,   164,   165,   169,
     113,   166,   167,   142,   146,   125,   103,   168,   180,   126,
       0,   102
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-136)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      49,     0,    13,    13,     3,    68,    40,    16,     6,    16,
      10,    11,    12,    76,     4,    78,     4,     3,    31,    14,
      16,    16,    14,    32,    16,    32,    25,    26,    27,    40,
      40,    30,     3,    15,    33,    31,    35,    36,    40,    38,
      26,    27,    40,    28,    30,    15,    14,    33,    16,    35,
      14,    37,    16,    39,    25,    26,    27,    40,    34,    30,
      40,    40,    33,    40,    35,    36,    40,    38,    19,    20,
      21,    22,    23,    24,    19,    20,    21,    22,    23,    24,
      41,    42,    43,    91,    92,    93,    94,    95,    40,    41,
      42,    43,    41,    42,    43,     4,     4,    15,    13,    15,
      29,    32,    40,    40,    40,    16,    13,    17,    40,    23,
      15,    13,    18,    13,    13,     5,    14,    42,    15,    15,
      42,    42,     7,    15,    17,   174,    14,    14,    14,    18,
      13,    15,   181,     8,    14,     7,    13,    15,    42,    42,
      14,    42,     9,    13,    10,    14,   172,    42,    42,   155,
      83,    42,   153,   115,   132,    97,    75,   154,    40,    98,
      -1,    74
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
      66,    67,    68,    69,    23,    16,    32,    16,    32,    10,
      11,    12,    55,    16,    41,    42,    43,    63,    64,    66,
      19,    20,    21,    22,    23,    24,    15,    17,    18,    41,
      42,    43,    71,    74,    66,    40,    66,    13,    13,    13,
       5,     6,    48,    54,    14,    16,    14,    40,    70,    71,
      70,    70,    70,    70,    70,    68,    69,    15,    15,    42,
      42,    42,    13,    40,    56,    57,    58,    59,     7,    14,
      16,    15,    64,    14,    14,    14,    56,    19,    20,    21,
      22,    23,    24,    17,    18,    13,    15,     8,    49,    50,
      14,    42,    42,    42,    42,    42,    42,    58,    59,    51,
       7,    14,    16,    14,    13,    15,    50,    52,    14,     9,
      40,    13,    52,    14
};

<<<<<<< HEAD
#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
=======
/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    47,    47,    48,    49,    49,    50,
      51,    51,    52,    53,    53,    54,    54,    55,    55,    55,
      55,    55,    56,    57,    57,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    60,    61,    62,    63,    63,    64,
      64,    64,    65,    66,    67,    67,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    70,    70,    71,    71,    71,
      72,    73,    73,    74,    75,    76,    76,    77,    78,    79,
      79,    79,    79,    79,    79,    79,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,    11,     9,     5,     1,     3,    10,
       1,     3,     1,     1,     3,     2,     4,     4,     4,     4,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     8,     1,     3,     1,
       1,     1,     6,     1,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       7,     1,     3,     3,     7,     1,     3,     3,     2,     2,
       2,     1,     1,     1,     1,     1,     2
};
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05


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
<<<<<<< HEAD
        case 9:
/* Line 1792 of yacc.c  */
#line 79 "sql.y"
    { // i need to check whether the table exist 
=======
  case 14: /* create_stmt: CREATE TABLE IDENTIFIER OPEN_PAR definitions COMMA primary_key COMMA foreign_keys CLOSE_PAR SEMICOLON  */
#line 96 "sql.y"
                { // i need to check whether the table exist 
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
			// if so then the raise an error
			// otherwise i need to create the table
            add_reference_attr((yyvsp[(9) - (11)].refer_list),*(yyvsp[(3) - (11)].string));
            
            raise_foreign_key((yyvsp[(5) - (11)].cols),(yyvsp[(9) - (11)].refer_list));
            raise_primary_key((yyvsp[(5) - (11)].cols),(yyvsp[(7) - (11)].string_array));
            create_table(*(yyvsp[(3) - (11)].string),(yyvsp[(5) - (11)].cols));


            // this is for deleting stuff
            for(col* column : *(yyvsp[(5) - (11)].cols))
                delete column;
<<<<<<< HEAD
            delete (yyvsp[(5) - (11)].cols);
            delete (yyvsp[(7) - (11)].string_array);
            delete (yyvsp[(9) - (11)].refer_list);

            
	}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 98 "sql.y"
    {
        raise_primary_key((yyvsp[(5) - (9)].cols),(yyvsp[(7) - (9)].string_array));
        create_table(*(yyvsp[(3) - (9)].string),(yyvsp[(5) - (9)].cols));
    }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 104 "sql.y"
    {  (yyval.string_array)=(yyvsp[(4) - (5)].string_array);  }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 107 "sql.y"
    { (yyval.refer_list)=new reference_list;(yyval.refer_list)->push_back((yyvsp[(1) - (1)].refer)); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 108 "sql.y"
    { (yyvsp[(1) - (3)].refer_list)->push_back((yyvsp[(3) - (3)].refer)); (yyval.refer_list)=(yyvsp[(1) - (3)].refer_list);  }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 111 "sql.y"
    { (yyval.refer)=new reference(*(yyvsp[(7) - (10)].string),*(yyvsp[(9) - (10)].string),*(yyvsp[(4) - (10)].string)); delete (yyvsp[(7) - (10)].string); delete (yyvsp[(9) - (10)].string);delete (yyvsp[(4) - (10)].string); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 115 "sql.y"
    {  (yyval.string_array)=new std::vector<std::string*>(); (yyval.string_array)->push_back((yyvsp[(1) - (1)].string));  }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 116 "sql.y"
    {  (yyvsp[(1) - (3)].string_array)->push_back((yyvsp[(3) - (3)].string));(yyval.string_array)=(yyvsp[(1) - (3)].string_array);  }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 118 "sql.y"
    { (yyval.string)=(yyvsp[(1) - (1)].string);}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 122 "sql.y"
    { 
=======
            delete (yyvsp[-6].cols);
			for(std::string* str: *(yyvsp[-4].string_array))
				delete str;
            delete (yyvsp[-4].string_array);
			for(reference* ref:*(yyvsp[-2].refer_list))
				delete ref;
            delete (yyvsp[-2].refer_list);
			std::cout<<"Table Created\n";

            
	}
#line 1291 "src/parser.cpp"
    break;

  case 15: /* create_stmt: CREATE TABLE IDENTIFIER OPEN_PAR definitions COMMA primary_key CLOSE_PAR SEMICOLON  */
#line 121 "sql.y"
    {
        raise_primary_key((yyvsp[-4].cols),(yyvsp[-2].string_array));
        create_table(*(yyvsp[-6].string),(yyvsp[-4].cols));
        for(col* column : *(yyvsp[-4].cols))
            delete column;
		delete (yyvsp[-4].cols);
		for(std::string* str: *(yyvsp[-2].string_array))
			delete str;
        delete (yyvsp[-2].string_array);
		std::cout<<"Table Created\n";
    }
#line 1307 "src/parser.cpp"
    break;

  case 16: /* primary_key: PRIMARY KEY OPEN_PAR columns CLOSE_PAR  */
#line 134 "sql.y"
                                                   {  (yyval.string_array)=(yyvsp[-1].string_array);  }
#line 1313 "src/parser.cpp"
    break;

  case 17: /* foreign_keys: foreign_key  */
#line 137 "sql.y"
                          { (yyval.refer_list)=new reference_list;(yyval.refer_list)->push_back((yyvsp[0].refer)); }
#line 1319 "src/parser.cpp"
    break;

  case 18: /* foreign_keys: foreign_keys COMMA foreign_key  */
#line 138 "sql.y"
                                                   { (yyvsp[-2].refer_list)->push_back((yyvsp[0].refer)); (yyval.refer_list)=(yyvsp[-2].refer_list);  }
#line 1325 "src/parser.cpp"
    break;

  case 19: /* foreign_key: FOREIGN KEY OPEN_PAR column CLOSE_PAR REFERENCES IDENTIFIER OPEN_PAR column CLOSE_PAR  */
#line 141 "sql.y"
                { (yyval.refer)=new reference(*(yyvsp[-3].string),*(yyvsp[-1].string),*(yyvsp[-6].string)); delete (yyvsp[-3].string); delete (yyvsp[-1].string);delete (yyvsp[-6].string); }
#line 1331 "src/parser.cpp"
    break;

  case 20: /* columns: column  */
#line 145 "sql.y"
               {  (yyval.string_array)=new std::vector<std::string*>(); (yyval.string_array)->push_back((yyvsp[0].string));  }
#line 1337 "src/parser.cpp"
    break;

  case 21: /* columns: columns COMMA column  */
#line 146 "sql.y"
                                {  (yyvsp[-2].string_array)->push_back((yyvsp[0].string));(yyval.string_array)=(yyvsp[-2].string_array);  }
#line 1343 "src/parser.cpp"
    break;

  case 22: /* column: IDENTIFIER  */
#line 148 "sql.y"
                  { (yyval.string)=(yyvsp[0].string);}
#line 1349 "src/parser.cpp"
    break;

  case 23: /* definitions: definition  */
#line 152 "sql.y"
                       { 
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
           (yyval.cols)=new col_list;
           (yyval.cols)->push_back((yyvsp[(1) - (1)].column));
           }
<<<<<<< HEAD
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 126 "sql.y"
    { 
            (yyvsp[(1) - (3)].cols)->push_back((yyvsp[(3) - (3)].column));
            (yyval.cols)=(yyvsp[(1) - (3)].cols);
        }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 132 "sql.y"
    { (yyvsp[(2) - (2)].column)->column_name=*(yyvsp[(1) - (2)].string); (yyval.column)=(yyvsp[(2) - (2)].column); delete (yyvsp[(1) - (2)].string); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 133 "sql.y"
    { (yyvsp[(2) - (4)].column)->column_name=*(yyvsp[(1) - (4)].string);
			(yyvsp[(2) - (4)].column)->conditions=(yyvsp[(4) - (4)].condition); 
			(yyval.column)=(yyvsp[(2) - (4)].column);
			delete (yyvsp[(1) - (4)].string);
			}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 139 "sql.y"
    { (yyval.column)=new col(CHAR,(yyvsp[(3) - (4)].ival),""); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 140 "sql.y"
    { (yyval.column)=new col(INT,(yyvsp[(3) - (4)].ival),""); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 141 "sql.y"
    { (yyval.column)=new col(DECIMAL,(yyvsp[(3) - (4)].ival),""); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 142 "sql.y"
    { (yyval.column)=new col(INT,8,""); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 143 "sql.y"
    { (yyval.column)=new col(DECIMAL,8,""); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 149 "sql.y"
    { (yyval.condition)=(yyvsp[(1) - (1)].condition);}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 150 "sql.y"
    { (yyval.condition)=(yyvsp[(1) - (1)].condition);}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 151 "sql.y"
    {  
=======
#line 1358 "src/parser.cpp"
    break;

  case 24: /* definitions: definitions COMMA definition  */
#line 156 "sql.y"
                                               { 
            (yyvsp[-2].cols)->push_back((yyvsp[0].column));
            (yyval.cols)=(yyvsp[-2].cols);
        }
#line 1367 "src/parser.cpp"
    break;

  case 25: /* definition: IDENTIFIER attr_type  */
#line 162 "sql.y"
                                 { (yyvsp[0].column)->column_name=*(yyvsp[-1].string); (yyval.column)=(yyvsp[0].column); delete (yyvsp[-1].string); }
#line 1373 "src/parser.cpp"
    break;

  case 26: /* definition: IDENTIFIER attr_type CHECK expr  */
#line 163 "sql.y"
                                                  { (yyvsp[-2].column)->column_name=*(yyvsp[-3].string);
			(yyvsp[-2].column)->conditions=(yyvsp[0].condition); 
			(yyval.column)=(yyvsp[-2].column);
			delete (yyvsp[-3].string);
			}
#line 1383 "src/parser.cpp"
    break;

  case 27: /* attr_type: CHAR OPEN_PAR NUMBER CLOSE_PAR  */
#line 169 "sql.y"
                                                { (yyval.column)=new col(CHAR,(yyvsp[-1].ival),""); }
#line 1389 "src/parser.cpp"
    break;

  case 28: /* attr_type: INT OPEN_PAR NUMBER CLOSE_PAR  */
#line 170 "sql.y"
                                               { (yyval.column)=new col(INT,(yyvsp[-1].ival),""); }
#line 1395 "src/parser.cpp"
    break;

  case 29: /* attr_type: DECIMAL OPEN_PAR NUMBER CLOSE_PAR  */
#line 171 "sql.y"
                                                   { (yyval.column)=new col(DECIMAL,(yyvsp[-1].ival),""); }
#line 1401 "src/parser.cpp"
    break;

  case 30: /* attr_type: INT  */
#line 172 "sql.y"
                     { (yyval.column)=new col(INT,8,""); }
#line 1407 "src/parser.cpp"
    break;

  case 31: /* attr_type: DECIMAL  */
#line 173 "sql.y"
                         { (yyval.column)=new col(DECIMAL,8,""); }
#line 1413 "src/parser.cpp"
    break;

  case 32: /* expr: or_expr  */
#line 179 "sql.y"
              { (yyval.condition)=(yyvsp[0].condition);}
#line 1419 "src/parser.cpp"
    break;

  case 33: /* or_expr: and_expr  */
#line 180 "sql.y"
                 { (yyval.condition)=(yyvsp[0].condition);}
#line 1425 "src/parser.cpp"
    break;

  case 34: /* or_expr: or_expr OR and_expr  */
#line 181 "sql.y"
                                {  
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
		(yyval.condition)=new cond(OR,-1,"");
		(yyval.condition)->left=(yyvsp[(1) - (3)].condition);
		(yyval.condition)->right=(yyvsp[(3) - (3)].condition);
		}
<<<<<<< HEAD
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 158 "sql.y"
    {
=======
#line 1435 "src/parser.cpp"
    break;

  case 35: /* and_expr: and_expr AND condition  */
#line 188 "sql.y"
                                {
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
		(yyval.condition)=new cond(AND,-1,"");
		(yyval.condition)->left=(yyvsp[(1) - (3)].condition);
		(yyval.condition)->right=(yyvsp[(3) - (3)].condition);
		}
<<<<<<< HEAD
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 163 "sql.y"
    { (yyval.condition)=(yyvsp[(1) - (1)].condition);}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 165 "sql.y"
    { (yyval.condition)=new cond(GE,(yyvsp[(3) - (3)].ival),*(yyvsp[(1) - (3)].string)); delete (yyvsp[(1) - (3)].string); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 166 "sql.y"
    { (yyval.condition)=new cond(GT,(yyvsp[(3) - (3)].ival),*(yyvsp[(1) - (3)].string)); delete (yyvsp[(1) - (3)].string); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 167 "sql.y"
    { (yyval.condition)=new cond(NE,(yyvsp[(3) - (3)].ival),*(yyvsp[(1) - (3)].string));	delete (yyvsp[(1) - (3)].string); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 168 "sql.y"
    { (yyval.condition)=new cond(LT,(yyvsp[(3) - (3)].ival),*(yyvsp[(1) - (3)].string));	delete (yyvsp[(1) - (3)].string); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 169 "sql.y"
    { (yyval.condition)=new cond(LE,(yyvsp[(3) - (3)].ival),*(yyvsp[(1) - (3)].string));	delete (yyvsp[(1) - (3)].string); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 170 "sql.y"
    { (yyval.condition)=new cond(E,(yyvsp[(3) - (3)].ival),*(yyvsp[(1) - (3)].string)); 	delete (yyvsp[(1) - (3)].string); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 171 "sql.y"
    { (yyval.condition)=(yyvsp[(2) - (3)].condition);}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 178 "sql.y"
    {
                if(check_table(*(yyvsp[(2) - (3)].string))==true)
=======
#line 1445 "src/parser.cpp"
    break;

  case 36: /* and_expr: condition  */
#line 193 "sql.y"
                    { (yyval.condition)=(yyvsp[0].condition);}
#line 1451 "src/parser.cpp"
    break;

  case 37: /* condition: IDENTIFIER GE NUMBER  */
#line 195 "sql.y"
                                 { (yyval.condition)=new cond(GE,(yyvsp[0].ival),*(yyvsp[-2].string)); delete (yyvsp[-2].string); }
#line 1457 "src/parser.cpp"
    break;

  case 38: /* condition: IDENTIFIER GT NUMBER  */
#line 196 "sql.y"
                                       { (yyval.condition)=new cond(GT,(yyvsp[0].ival),*(yyvsp[-2].string)); delete (yyvsp[-2].string); }
#line 1463 "src/parser.cpp"
    break;

  case 39: /* condition: IDENTIFIER NE NUMBER  */
#line 197 "sql.y"
                                       { (yyval.condition)=new cond(NE,(yyvsp[0].ival),*(yyvsp[-2].string));	delete (yyvsp[-2].string); }
#line 1469 "src/parser.cpp"
    break;

  case 40: /* condition: IDENTIFIER LT NUMBER  */
#line 198 "sql.y"
                                       { (yyval.condition)=new cond(LT,(yyvsp[0].ival),*(yyvsp[-2].string));	delete (yyvsp[-2].string); }
#line 1475 "src/parser.cpp"
    break;

  case 41: /* condition: IDENTIFIER LE NUMBER  */
#line 199 "sql.y"
                                       { (yyval.condition)=new cond(LE,(yyvsp[0].ival),*(yyvsp[-2].string));	delete (yyvsp[-2].string); }
#line 1481 "src/parser.cpp"
    break;

  case 42: /* condition: IDENTIFIER E NUMBER  */
#line 200 "sql.y"
                                       { (yyval.condition)=new cond(E,(yyvsp[0].ival),*(yyvsp[-2].string)); 	delete (yyvsp[-2].string); }
#line 1487 "src/parser.cpp"
    break;

  case 43: /* condition: OPEN_PAR expr CLOSE_PAR  */
#line 201 "sql.y"
                                          { (yyval.condition)=(yyvsp[-1].condition);}
#line 1493 "src/parser.cpp"
    break;

  case 44: /* describe_stmt: DESCRIBE IDENTIFIER SEMICOLON  */
#line 208 "sql.y"
             {
                if(check_table(*(yyvsp[-1].string))==true)
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
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
<<<<<<< HEAD
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 193 "sql.y"
    {
                if(check_table(*(yyvsp[(3) - (4)].string))==true)
=======
#line 1511 "src/parser.cpp"
    break;

  case 45: /* drop_stmt: DROP TABLE IDENTIFIER SEMICOLON  */
#line 223 "sql.y"
         {
                if(check_table(*(yyvsp[-1].string))==true)
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
                    {
                        drop_table(*(yyvsp[(3) - (4)].string));
                        std::cout<<"Table Dropped successfully\n";
                    }
                else
                    yyerror("The Table Does not exists");

         }
<<<<<<< HEAD
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 214 "sql.y"
    {
				if(check_table(*(yyvsp[(3) - (8)].string))==true)
=======
#line 1526 "src/parser.cpp"
    break;

  case 46: /* insert_stmt: INSERT INTO IDENTIFIER VALUES OPEN_PAR list_values CLOSE_PAR SEMICOLON  */
#line 244 "sql.y"
                                                                                   {
				if(check_table(*(yyvsp[-5].string))==true)
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
                {
                        insert_into_table(*(yyvsp[(3) - (8)].string),(yyvsp[(6) - (8)].literals_list));
                        std::cout<<"Inserted successfully\n";
                }
                else
                    yyerror("The Table Does not exists");

			}
<<<<<<< HEAD
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 227 "sql.y"
    {
=======
#line 1541 "src/parser.cpp"
    break;

  case 47: /* list_values: list_value  */
#line 257 "sql.y"
                       {
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
				(yyval.literals_list)=new values_list();
				(yyval.literals_list)->push_back((yyvsp[(1) - (1)].literal));
			}
<<<<<<< HEAD
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 232 "sql.y"
    {
				(yyvsp[(1) - (3)].literals_list)->push_back((yyvsp[(3) - (3)].literal));
                (yyval.literals_list)=(yyvsp[(1) - (3)].literals_list);
			}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 237 "sql.y"
    {
				(yyval.literal)=new Values(std::to_string((yyvsp[(1) - (1)].ival)),INT);
			}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 241 "sql.y"
    {
				(yyval.literal)=new Values(std::to_string((yyvsp[(1) - (1)].fval)),DECIMAL);
			}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 245 "sql.y"
    {
				(yyval.literal)=new Values(*(yyvsp[(1) - (1)].string),CHAR);
			}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 256 "sql.y"
    {
				if(check_table(*(yyvsp[(3) - (6)].string))==true)
                {
                        delete_from_table(*(yyvsp[(3) - (6)].string),(yyvsp[(5) - (6)].scond));
                        std::cout<<"Deleted successfully\n";
                }
                else
                    yyerror("The Table Does not exists");
           }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 267 "sql.y"
    {(yyval.scond)=(yyvsp[(1) - (1)].scond);}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 268 "sql.y"
    {  (yyval.scond)=(yyvsp[(1) - (1)].scond); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 269 "sql.y"
    {
=======
#line 1550 "src/parser.cpp"
    break;

  case 48: /* list_values: list_values COMMA list_value  */
#line 262 "sql.y"
                        {
				(yyvsp[-2].literals_list)->push_back((yyvsp[0].literal));
                (yyval.literals_list)=(yyvsp[-2].literals_list);
			}
#line 1559 "src/parser.cpp"
    break;

  case 49: /* list_value: NUMBER  */
#line 267 "sql.y"
                   {
				(yyval.literal)=new Values(std::to_string((yyvsp[0].ival)),INT);
			}
#line 1567 "src/parser.cpp"
    break;

  case 50: /* list_value: FLOAT  */
#line 271 "sql.y"
                        {
				(yyval.literal)=new Values(std::to_string((yyvsp[0].fval)),DECIMAL);
			}
#line 1575 "src/parser.cpp"
    break;

  case 51: /* list_value: STRING  */
#line 275 "sql.y"
                        {
				(yyval.literal)=new Values(*(yyvsp[0].string),CHAR);
			}
#line 1583 "src/parser.cpp"
    break;

  case 52: /* delete_stmt: DELETE FROM IDENTIFIER WHERE sexpr SEMICOLON  */
#line 286 "sql.y"
           {
				if(check_table(*(yyvsp[-3].string))==true)
                        delete_from_table(*(yyvsp[-3].string),(yyvsp[-1].scond));
                else
                    yyerror("The Table Does not exists");
           }
#line 1594 "src/parser.cpp"
    break;

  case 53: /* sexpr: sor_expr  */
#line 294 "sql.y"
              {(yyval.scond)=(yyvsp[0].scond);}
#line 1600 "src/parser.cpp"
    break;

  case 54: /* sor_expr: sand_expr  */
#line 295 "sql.y"
                   {  (yyval.scond)=(yyvsp[0].scond); }
#line 1606 "src/parser.cpp"
    break;

  case 55: /* sor_expr: sor_expr OR sand_expr  */
#line 296 "sql.y"
                                {
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
         (yyval.scond)=new select_cond();
         (yyval.scond)->left=(yyvsp[(1) - (3)].scond);
         (yyval.scond)->right=(yyvsp[(3) - (3)].scond);
         (yyval.scond)->relation_type=OR;
        }
<<<<<<< HEAD
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 277 "sql.y"
    {  
=======
#line 1617 "src/parser.cpp"
    break;

  case 56: /* sand_expr: sand_expr AND scond_b  */
#line 304 "sql.y"
        {  
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
            (yyval.scond)=new select_cond();
            (yyval.scond)->left =(yyvsp[(1) - (3)].scond);
            (yyval.scond)->right=(yyvsp[(3) - (3)].scond);
            (yyval.scond)->relation_type=AND;
        }
<<<<<<< HEAD
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 284 "sql.y"
    {
            (yyval.scond)=(yyvsp[(1) - (1)].scond);
        }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 288 "sql.y"
    {
            Values lv;
            lv.data=std::to_string((yyvsp[(3) - (3)].ival));
            lv.type=INT;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),GE,lv);

        }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 295 "sql.y"
    {
            Values lv;
            lv.data=std::to_string((yyvsp[(3) - (3)].ival));
            lv.type=INT;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),GT,lv);

        }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 302 "sql.y"
    {
            Values lv;
            lv.data=std::to_string((yyvsp[(3) - (3)].ival));
            lv.type=INT;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),NE,lv);
        
        }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 309 "sql.y"
    {
            Values lv;
            lv.data=std::to_string((yyvsp[(3) - (3)].ival));
            lv.type=INT;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),LT,lv);
        }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 315 "sql.y"
    {
            Values lv;
            lv.data=std::to_string((yyvsp[(3) - (3)].ival));
            lv.type=INT;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),LE,lv);
=======
#line 1628 "src/parser.cpp"
    break;

  case 57: /* sand_expr: scond_b  */
#line 311 "sql.y"
        {
            (yyval.scond)=(yyvsp[0].scond);
        }
#line 1636 "src/parser.cpp"
    break;

  case 58: /* scond_b: IDENTIFIER GE diff_value  */
#line 315 "sql.y"
                                 {
            (yyval.scond)=new select_cond(*(yyvsp[-2].string),GE,(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
            delete (yyvsp[0].literal);

>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
        }
    break;

<<<<<<< HEAD
  case 58:
/* Line 1792 of yacc.c  */
#line 322 "sql.y"
    {
            Values lv;
            lv.data=std::to_string((yyvsp[(3) - (3)].ival));
            lv.type=INT;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),E,lv);
        }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 329 "sql.y"
    {
            Values lv;
            lv.data=std::to_string((yyvsp[(3) - (3)].fval));
            lv.type=DECIMAL;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),GE,lv);
        }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 336 "sql.y"
    {
            Values lv;
            lv.data=std::to_string((yyvsp[(3) - (3)].fval));
            lv.type=DECIMAL;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),GT,lv);
        }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 343 "sql.y"
    {
            Values lv;
            lv.data=std::to_string((yyvsp[(3) - (3)].fval));
            lv.type=DECIMAL;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),NE,lv);
        }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 350 "sql.y"
    {
            Values lv;
            lv.data=std::to_string((yyvsp[(3) - (3)].fval));
            lv.type=DECIMAL;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),LT,lv);
=======
  case 59: /* scond_b: IDENTIFIER GT diff_value  */
#line 320 "sql.y"
                                 {
            (yyval.scond)=new select_cond(*(yyvsp[-2].string),GT,(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
            delete (yyvsp[0].literal);

        }
#line 1656 "src/parser.cpp"
    break;

  case 60: /* scond_b: IDENTIFIER NE diff_value  */
#line 325 "sql.y"
                                 {
            (yyval.scond)=new select_cond(*(yyvsp[-2].string),NE,(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
            delete (yyvsp[0].literal);
        
        }
#line 1666 "src/parser.cpp"
    break;

  case 61: /* scond_b: IDENTIFIER LT diff_value  */
#line 330 "sql.y"
                                 {
            (yyval.scond)=new select_cond(*(yyvsp[-2].string),LT,(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
            delete (yyvsp[0].literal);
        }
#line 1675 "src/parser.cpp"
    break;

  case 62: /* scond_b: IDENTIFIER LE diff_value  */
#line 334 "sql.y"
                                 {
            (yyval.scond)=new select_cond(*(yyvsp[-2].string),LE,(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
            delete (yyvsp[0].literal);
        }
#line 1684 "src/parser.cpp"
    break;

  case 63: /* scond_b: IDENTIFIER E diff_value  */
#line 339 "sql.y"
        {
            (yyval.scond)=new select_cond(*(yyvsp[-2].string),E,(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
            delete (yyvsp[0].literal);
        }
#line 1693 "src/parser.cpp"
    break;

  case 64: /* scond_b: OPEN_PAR sexpr CLOSE_PAR  */
#line 344 "sql.y"
        {
            (yyval.scond)=(yyvsp[-1].scond);
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
        }
    break;

<<<<<<< HEAD
  case 63:
/* Line 1792 of yacc.c  */
#line 357 "sql.y"
    {
            Values lv;
            lv.data=std::to_string((yyvsp[(3) - (3)].fval));
            lv.type=DECIMAL;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),LE,lv);
        }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 364 "sql.y"
    {
            Values lv;
            lv.data=std::to_string((yyvsp[(3) - (3)].fval));
            lv.type=DECIMAL;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),E,lv);
        }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 371 "sql.y"
    {
            Values lv;
            lv.data=*(yyvsp[(3) - (3)].string);
            lv.type=CHAR;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),E,lv);
        }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 378 "sql.y"
    {
            Values lv;
            lv.data=*(yyvsp[(3) - (3)].string);
            lv.type=CHAR;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),GT,lv);
        }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 385 "sql.y"
    {
            Values lv;
            lv.data=*((yyvsp[(3) - (3)].string));
            lv.type=CHAR;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),NE,lv);
        }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 392 "sql.y"
    {
            Values lv;
            lv.data=*(yyvsp[(3) - (3)].string);
            lv.type=CHAR;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),LT,lv);
        }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 399 "sql.y"
    {
            Values lv;
            lv.data=*(yyvsp[(3) - (3)].string);
            lv.type=CHAR;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),LE,lv);
        }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 406 "sql.y"
    {
            Values lv;
            lv.data=*((yyvsp[(3) - (3)].string));
            lv.type=CHAR;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),E,lv);
        }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 413 "sql.y"
    {
            Values lv;
            lv.data=*((yyvsp[(3) - (3)].string));
            lv.type=IDENTIFIER;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),GE,lv);
        }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 420 "sql.y"
    {
            Values lv;
            lv.data=*((yyvsp[(3) - (3)].string));
            lv.type=IDENTIFIER;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),GT,lv);
        }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 427 "sql.y"
    {
            Values lv;
            lv.data=*((yyvsp[(3) - (3)].string));
            lv.type=IDENTIFIER;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),NE,lv);
        }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 434 "sql.y"
    {
            Values lv;
            lv.data=*((yyvsp[(3) - (3)].string));
            lv.type=IDENTIFIER;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),LT,lv);
        }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 441 "sql.y"
    {
            Values lv;
            lv.data=*((yyvsp[(3) - (3)].string));
            lv.type=IDENTIFIER;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),LE,lv);
        }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 448 "sql.y"
    {
            Values lv;
            lv.data=*(yyvsp[(3) - (3)].string);
            lv.type=IDENTIFIER;
            (yyval.scond)=new select_cond(*(yyvsp[(1) - (3)].string),E,lv);
        }
    break;


/* Line 1792 of yacc.c  */
#line 2160 "src\\parser.cpp"
=======
  case 65: /* diff_value: IDENTIFIER  */
#line 349 "sql.y"
          {  
                (yyval.literal)=new Values();
                (yyval.literal)->data=*(yyvsp[0].string);
                (yyval.literal)->type=IDENTIFIER;
          }
#line 1711 "src/parser.cpp"
    break;

  case 66: /* diff_value: diff_value_without_identifier  */
#line 354 "sql.y"
                                          { (yyval.literal)=(yyvsp[0].literal); }
#line 1717 "src/parser.cpp"
    break;

  case 67: /* diff_value_without_identifier: STRING  */
#line 358 "sql.y"
          {  
                (yyval.literal)=new Values();
                (yyval.literal)->data=*(yyvsp[0].string);
                (yyval.literal)->type=CHAR;    
          }
#line 1727 "src/parser.cpp"
    break;

  case 68: /* diff_value_without_identifier: NUMBER  */
#line 364 "sql.y"
          {

                (yyval.literal)=new Values();
                (yyval.literal)->data=std::to_string((yyvsp[0].ival));
                (yyval.literal)->type=INT;    
          }
#line 1738 "src/parser.cpp"
    break;

  case 69: /* diff_value_without_identifier: FLOAT  */
#line 371 "sql.y"
          {

                (yyval.literal)=new Values();
                (yyval.literal)->data=std::to_string((yyvsp[0].fval));
                (yyval.literal)->type=DECIMAL;    
          }
#line 1749 "src/parser.cpp"
    break;

  case 70: /* update_stmt: UPDATE IDENTIFIER SET update_values WHERE sexpr SEMICOLON  */
#line 384 "sql.y"
           {
				if(check_table(*(yyvsp[-5].string))==true)
                        update_table(*(yyvsp[-5].string),(yyvsp[-3].list_sets),(yyvsp[-1].scond));
                else
                    yyerror("The Table Does not exists");
           }
#line 1760 "src/parser.cpp"
    break;

  case 71: /* update_values: update_value  */
#line 392 "sql.y"
                           { (yyval.list_sets)=new update_sets; (yyval.list_sets)->push_back((yyvsp[0].update_set_val)); }
#line 1766 "src/parser.cpp"
    break;

  case 72: /* update_values: update_values COMMA update_value  */
#line 394 "sql.y"
             {
                (yyvsp[-2].list_sets)->push_back((yyvsp[0].update_set_val));
                (yyval.list_sets)=(yyvsp[-2].list_sets);
             }
#line 1775 "src/parser.cpp"
    break;

  case 73: /* update_value: IDENTIFIER E diff_value_without_identifier  */
#line 400 "sql.y"
            {
                update_set * new_set= new update_set(*(yyvsp[-2].string),(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
                delete (yyvsp[0].literal);
                (yyval.update_set_val)=new_set;
            }
#line 1785 "src/parser.cpp"
    break;

  case 74: /* select_stmt: SELECT columns FROM table_list WHERE sexpr SEMICOLON  */
#line 413 "sql.y"
           {
              select_from_tables((yyvsp[-5].string_array),(yyvsp[-3].string_array),(yyvsp[-1].scond));  
           }
#line 1793 "src/parser.cpp"
    break;

  case 75: /* table_list: IDENTIFIER  */
#line 418 "sql.y"
          { 
                std::vector<std::string*>* strings=new std::vector<std::string*>;
                if(check_table(*(yyvsp[0].string)))
                    strings->push_back((yyvsp[0].string));
                else 
                    yyerror("The table does not exists");
                (yyval.string_array)=strings;
          }
#line 1806 "src/parser.cpp"
    break;

  case 76: /* table_list: table_list COMMA IDENTIFIER  */
#line 426 "sql.y"
                                        {
                if(check_table(*(yyvsp[0].string)))
                    (yyvsp[-2].string_array)->push_back((yyvsp[0].string));
                else 
                    yyerror("The table does not exists");
                (yyval.string_array)=(yyvsp[-2].string_array);
          }
#line 1818 "src/parser.cpp"
    break;

  case 77: /* help_tables: HELP TABLES SEMICOLON  */
#line 435 "sql.y"
           {
                help_tables();
           }
#line 1826 "src/parser.cpp"
    break;

  case 79: /* cmd: CREATE TABLE  */
#line 440 "sql.y"
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
#line 1848 "src/parser.cpp"
    break;

  case 80: /* cmd: DROP TABLE  */
#line 458 "sql.y"
   {
		std::string print_string="\n\nDrop Table : \n"
		"\tDROP TABLE table_name;\n"
		"The table_name specified will be dropped.\n"
		"The table is dropped temporarily\n"
		"If Commit is passed after this command the table will be dropped Permanently\n";
		std::cout<<print_string<<std::endl;
   }
#line 1861 "src/parser.cpp"
    break;

  case 81: /* cmd: SELECT  */
#line 467 "sql.y"
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
#line 1881 "src/parser.cpp"
    break;

  case 82: /* cmd: INSERT  */
#line 483 "sql.y"
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
#line 1900 "src/parser.cpp"
    break;

  case 83: /* cmd: DELETE  */
#line 498 "sql.y"
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
#line 1915 "src/parser.cpp"
    break;

  case 84: /* cmd: UPDATE  */
#line 509 "sql.y"
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
#line 1931 "src/parser.cpp"
    break;

  case 85: /* cmd: CONDITIONS  */
#line 521 "sql.y"
   {
		std::string print_string="\n\nThe Conditions :\n"
		"\t\toperand1 operator operand2\n"
		"The operand1 is always some column_name .\n"
		"The operator can be >,<,<=,>=,=\n"
		"The operand2 can be column name or string literal , decimal or integer\n";
		std::cout<<print_string<<std::endl;
   }
#line 1944 "src/parser.cpp"
    break;

  case 86: /* quit_stmt: QUIT SEMICOLON  */
#line 531 "sql.y"
                 {
		 	save_to_buffer();
			exit(0);
		 }
#line 1953 "src/parser.cpp"
    break;


#line 1957 "src/parser.cpp"

>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05
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

<<<<<<< HEAD

/* Line 2055 of yacc.c  */
#line 465 "sql.y"
=======
#line 539 "sql.y"
>>>>>>> 763a0a4b8d48d943295278ca9167a344d45e9c05





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


