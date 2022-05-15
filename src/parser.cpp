/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
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

#line 83 "src/parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
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




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
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
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
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

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
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
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-64)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -64,   -64,   134,   -64,   -64,   -64,   -26,    -6,   -49,   -64,
      67,   -64,    22,   -64,    -1,     3,   -64,   -64,   -64,   -64,
      38,   -64,   -63,   -64,    58,    61,    -8,    87,   -64,   -64,
      81,   -64,   -64,   -64,   -64,   -64,   -64
};

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
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 14: /* create_stmt: CREATE TABLE IDENTIFIER OPEN_PAR definitions COMMA primary_key COMMA foreign_keys CLOSE_PAR SEMICOLON  */
#line 96 "sql.y"
                { // i need to check whether the table exist 
			// if so then the raise an error
			// otherwise i need to create the table
            add_reference_attr((yyvsp[-2].refer_list),*(yyvsp[-8].string));
            
            raise_foreign_key((yyvsp[-6].cols),(yyvsp[-2].refer_list));
            raise_primary_key((yyvsp[-6].cols),(yyvsp[-4].string_array));
            create_table(*(yyvsp[-8].string),(yyvsp[-6].cols));


            // this is for deleting stuff
            for(col* column : *(yyvsp[-6].cols))
                delete column;
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
           (yyval.cols)=new col_list;
           (yyval.cols)->push_back((yyvsp[0].column));
           }
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
		(yyval.condition)=new cond(OR,-1,"");
		(yyval.condition)->left=(yyvsp[-2].condition);
		(yyval.condition)->right=(yyvsp[0].condition);
		}
#line 1435 "src/parser.cpp"
    break;

  case 35: /* and_expr: and_expr AND condition  */
#line 188 "sql.y"
                                {
		(yyval.condition)=new cond(AND,-1,"");
		(yyval.condition)->left=(yyvsp[-2].condition);
		(yyval.condition)->right=(yyvsp[0].condition);
		}
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
                {
                    col_list* cols=get_table(*(yyvsp[-1].string));
                    display_table(cols);
                    for(col* column : *cols)
                        delete column;
                    delete cols;
                    
                }
                else
                    yyerror("The Table Does not exists");
             }
#line 1511 "src/parser.cpp"
    break;

  case 45: /* drop_stmt: DROP TABLE IDENTIFIER SEMICOLON  */
#line 223 "sql.y"
         {
                if(check_table(*(yyvsp[-1].string))==true)
                    {
                        drop_table(*(yyvsp[-1].string));
                        std::cout<<"Table Dropped successfully\n";
                    }
                else
                    yyerror("The Table Does not exists");

         }
#line 1526 "src/parser.cpp"
    break;

  case 46: /* insert_stmt: INSERT INTO IDENTIFIER VALUES OPEN_PAR list_values CLOSE_PAR SEMICOLON  */
#line 244 "sql.y"
                                                                                   {
				if(check_table(*(yyvsp[-5].string))==true)
                {
                        insert_into_table(*(yyvsp[-5].string),(yyvsp[-2].literals_list));
                        std::cout<<"Inserted successfully\n";
                }
                else
                    yyerror("The Table Does not exists");

			}
#line 1541 "src/parser.cpp"
    break;

  case 47: /* list_values: list_value  */
#line 257 "sql.y"
                       {
				(yyval.literals_list)=new values_list();
				(yyval.literals_list)->push_back((yyvsp[0].literal));
			}
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
         (yyval.scond)=new select_cond();
         (yyval.scond)->left=(yyvsp[-2].scond);
         (yyval.scond)->right=(yyvsp[0].scond);
         (yyval.scond)->relation_type=OR;
        }
#line 1617 "src/parser.cpp"
    break;

  case 56: /* sand_expr: sand_expr AND scond_b  */
#line 304 "sql.y"
        {  
            (yyval.scond)=new select_cond();
            (yyval.scond)->left =(yyvsp[-2].scond);
            (yyval.scond)->right=(yyvsp[0].scond);
            (yyval.scond)->relation_type=AND;
        }
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

        }
#line 1646 "src/parser.cpp"
    break;

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
        }
#line 1701 "src/parser.cpp"
    break;

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 539 "sql.y"





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


