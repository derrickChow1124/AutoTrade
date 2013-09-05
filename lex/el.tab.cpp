/* A Bison parser, made by GNU Bison 2.7.1.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.1"

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
#line 1 "el.y"

#include <stdio.h>
#include "tree.h"
#include "operator.h"
extern int yylex();
extern void yyerror(char *s, ...);


/* Line 371 of yacc.c  */
#line 77 "el.tab.c"

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
   by #include "el.tab.h".  */
#ifndef YY_YY_EL_TAB_H_INCLUDED
# define YY_YY_EL_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     INPUTS = 258,
     VARIABLES = 259,
     IBP = 260,
     NUMBER = 261,
     TRUE = 262,
     FALSE = 263,
     TEXT = 264,
     CLOSE = 265,
     THIS = 266,
     NEXT = 267,
     BAR = 268,
     MARKET = 269,
     STOP = 270,
     LIMIT = 271,
     VOLUMN = 272,
     NAME = 273,
     CMP = 274,
     ASM = 275,
     ADD = 276,
     SUB = 277,
     MUL = 278,
     DIV = 279,
     LSB = 280,
     RSB = 281,
     COL = 282,
     COM = 283,
     BUY = 284,
     SELL = 285,
     SHORT = 286,
     SELLSHORT = 287,
     TO = 288,
     COVER = 289,
     BUYTOCOVER = 290,
     SHARE = 291,
     PLOT1 = 292,
     IF = 293,
     THEN = 294,
     ELSE = 295,
     AND = 296,
     OR = 297,
     NOT = 298,
     ONCE = 299,
     BBEGIN = 300,
     BEND = 301,
     UNARY = 302
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 10 "el.y"

  int fn;


/* Line 387 of yacc.c  */
#line 172 "el.tab.c"
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

#endif /* !YY_YY_EL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 200 "el.tab.c"

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
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
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   352

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  135

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      51,    52,     2,     2,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
       2,    47,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    16,    18,
      20,    23,    27,    30,    32,    34,    36,    38,    40,    42,
      44,    49,    54,    56,    60,    65,    71,    73,    75,    77,
      84,    86,    91,    98,   101,   107,   110,   116,   117,   119,
     124,   126,   128,   132,   134,   137,   139,   140,   141,   144,
     148,   153,   158,   162,   166,   168,   170,   174,   178,   182,
     186,   190,   194,   197,   201,   205,   208,   211,   215,   220,
     222,   224,   226,   228,   230,   235,   237,   241,   243,   245,
     247,   249,   251
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    -1,    -1,    56,    -1,    63,    -1,
      56,    63,    -1,    63,    49,    -1,    49,    -1,    58,    -1,
      56,    49,    -1,    56,    63,    49,    -1,    56,    58,    -1,
      67,    -1,    69,    -1,    74,    -1,    78,    -1,    82,    -1,
      59,    -1,    60,    -1,     3,    27,    61,    49,    -1,     4,
      27,    61,    49,    -1,    62,    -1,    61,    50,    62,    -1,
      77,    51,    76,    52,    -1,     5,    77,    51,    76,    52,
      -1,    64,    -1,    65,    -1,    57,    -1,    38,    76,    39,
      64,    40,    64,    -1,    66,    -1,    38,    76,    39,    63,
      -1,    38,    76,    39,    64,    40,    65,    -1,    44,    65,
      -1,    44,    51,    76,    52,    65,    -1,    44,    68,    -1,
      44,    51,    76,    52,    68,    -1,    -1,    64,    -1,    70,
      71,    72,    73,    -1,    29,    -1,    30,    -1,    29,    33,
      34,    -1,    35,    -1,    30,    31,    -1,    32,    -1,    -1,
      -1,    76,    36,    -1,    12,    13,    14,    -1,    12,    13,
      76,    15,    -1,    12,    13,    76,    16,    -1,    11,    13,
      10,    -1,    77,    75,    76,    -1,    47,    -1,    20,    -1,
      76,    23,    76,    -1,    76,    24,    76,    -1,    76,    21,
      76,    -1,    76,    22,    76,    -1,    76,    41,    76,    -1,
      76,    42,    76,    -1,    43,    76,    -1,    76,    47,    76,
      -1,    76,    19,    76,    -1,    22,    76,    -1,    21,    76,
      -1,    51,    76,    52,    -1,    76,    25,    76,    26,    -1,
      80,    -1,    78,    -1,    18,    -1,    10,    -1,    77,    -1,
      77,    51,    79,    52,    -1,    76,    -1,    79,    50,    76,
      -1,     6,    -1,     7,    -1,     8,    -1,    81,    -1,     9,
      -1,    45,    55,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    50,    51,    52,    53,    56,    57,    58,
      59,    60,    61,    64,    65,    66,    67,    73,    76,    77,
      80,    86,    94,    98,   104,   108,   114,   115,   118,   119,
     129,   130,   138,   148,   149,   152,   153,   156,   157,   160,
     169,   170,   171,   172,   173,   174,   177,   181,   182,   185,
     191,   198,   205,   213,   223,   224,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   244,   245,   248,   249,   252,   253,   256,   257,   258,
     259,   262,   264
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INPUTS", "VARIABLES", "IBP", "NUMBER",
  "TRUE", "FALSE", "TEXT", "CLOSE", "THIS", "NEXT", "BAR", "MARKET",
  "STOP", "LIMIT", "VOLUMN", "NAME", "CMP", "ASM", "ADD", "SUB", "MUL",
  "DIV", "LSB", "RSB", "COL", "COM", "BUY", "SELL", "SHORT", "SELLSHORT",
  "TO", "COVER", "BUYTOCOVER", "SHARE", "PLOT1", "IF", "THEN", "ELSE",
  "AND", "OR", "NOT", "ONCE", "BBEGIN", "BEND", "'='", "UNARY", "';'",
  "','", "'('", "')'", "$accept", "start", "stmts", "stmt_list",
  "other_sstmt", "cstmt", "inputs", "variables", "variable_list",
  "variable", "if_stmt", "matched", "unmatched", "unmatched_once",
  "matched_once", "once_matched", "order_stmt", "order_verb", "order_name",
  "order_amount", "order_action", "assignment", "asm", "exp", "name",
  "name_call", "argu_list", "literal", "text", "block", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301,    61,   302,    59,
      44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    55,    56,    56,    56,
      56,    56,    56,    57,    57,    57,    57,    57,    58,    58,
      59,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      65,    65,    65,    66,    66,    67,    67,    68,    68,    69,
      70,    70,    70,    70,    70,    70,    71,    72,    72,    73,
      73,    73,    73,    74,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    78,    78,    79,    79,    80,    80,    80,
      80,    81,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     2,     1,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     1,     3,     4,     5,     1,     1,     1,     6,
       1,     4,     6,     2,     5,     2,     5,     0,     1,     4,
       1,     1,     3,     1,     2,     1,     0,     0,     2,     3,
       4,     4,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     2,     2,     3,     4,     1,
       1,     1,     1,     1,     4,     1,     3,     1,     1,     1,
       1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    72,    71,    40,    41,    45,    43,     0,
      37,     3,     8,     0,     2,     4,    28,     9,    18,    19,
       5,    26,    27,    30,    13,    14,    46,    15,    73,    16,
      17,     0,     0,     0,    44,    77,    78,    79,    81,     0,
       0,     0,     0,     0,    73,    70,    69,    80,     0,    38,
      33,    35,     0,     1,    10,    12,     6,     7,    47,    55,
      54,     0,     0,     0,     0,    22,     0,     0,    42,    66,
      65,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    11,     0,     0,    75,     0,
      53,     0,    20,     0,     0,    21,    67,    64,    58,    59,
      56,    57,     0,    31,    26,    60,    61,    63,    37,     0,
       0,    39,    48,     0,    74,     0,    23,     0,    68,     0,
      34,    36,     0,     0,    76,     0,    24,    29,    32,    52,
      49,     0,    25,    50,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    64,    65,
      20,    21,    22,    23,    24,    51,    25,    26,    58,    86,
     111,    27,    62,    43,    44,    45,    89,    46,    47,    30
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -46
static const yytype_int16 yypact[] =
{
      24,   -18,   -11,   -46,   -46,    -3,     7,   -46,   -46,   129,
     138,    24,   -46,    26,   -46,    96,   -46,   -46,   -46,   -46,
       6,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -12,   -46,
     -46,    42,    42,    11,   -46,   -46,   -46,   -46,   -46,   129,
     129,   129,   129,   263,    10,   -46,   -46,   -46,   129,   -46,
     -46,   -46,    18,   -46,   -46,   -46,    31,   -46,   129,   -46,
     -46,   129,   129,    -4,    -9,   -46,    37,    55,   -46,   -46,
     -46,    73,   174,   129,   129,   129,   129,   129,   129,   156,
     129,   129,   129,   183,   -46,   -46,    32,   270,   305,   -45,
     305,    56,   -46,    42,   129,   -46,   -46,    53,    -5,    -5,
      21,    21,   297,   -46,    69,    73,   140,    53,   156,    98,
     102,   -46,   -46,   129,   -46,   129,   -46,   215,   -46,   156,
     -46,   -46,   106,    15,   305,   222,   -46,   -46,   -46,   -46,
     -46,   256,   -46,   -46,   -46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -46,   -46,   107,   -46,   -46,   108,   -46,   -46,    85,    34,
     -14,    -7,    -6,   -46,   -46,    22,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     9,     0,     2,   -46,   -46,   -46,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      28,    56,    29,    49,    50,   113,     3,   114,    59,    31,
      28,    28,    29,    29,     4,    28,    32,    29,    76,    77,
      78,    35,    36,    37,    38,     3,    53,     1,     2,   130,
      33,    66,    66,     4,     3,    60,    39,    40,    34,    61,
      92,    93,     4,   109,   110,    68,    78,    63,    69,    70,
      71,    72,     3,     5,     6,    57,     7,    83,    41,     8,
       4,    61,     9,    91,    84,   103,    42,    87,    10,    11,
      88,    90,   104,    12,    74,    75,    76,    77,    78,    28,
      85,    29,    97,    98,    99,   100,   101,   102,    94,   105,
     106,   107,    73,    66,    74,    75,    76,    77,    78,     1,
       2,    49,   120,   117,    95,    93,     3,   115,    28,   119,
      29,   122,   127,   128,     4,   123,   129,    67,    52,    28,
      82,    29,   124,    55,   125,     5,     6,   116,     7,     0,
     121,     8,   131,     0,     9,    35,    36,    37,    38,     3,
      10,    11,     0,     0,     0,    54,     0,     4,     3,     0,
      39,    40,     0,     0,     0,     0,     4,     0,     0,    73,
       0,    74,    75,    76,    77,    78,     3,     5,     6,     0,
       7,     0,    41,     8,     4,     0,     9,     0,     0,     0,
      42,    80,    10,    11,     0,     5,     6,    82,     7,    48,
       0,     8,     0,    73,     9,    74,    75,    76,    77,    78,
      10,    11,    73,     0,    74,    75,    76,    77,    78,     0,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
       0,    82,     0,     0,    80,    81,    96,     0,     0,     0,
      82,     0,     0,     0,    73,   108,    74,    75,    76,    77,
      78,    73,     0,    74,    75,    76,    77,    78,     0,     0,
       0,     0,     0,     0,     0,     0,    80,    81,     0,     0,
       0,     0,    82,    80,    81,     0,     0,   126,     0,    82,
       0,   133,   134,     0,   132,    73,     0,    74,    75,    76,
      77,    78,    73,     0,    74,    75,    76,    77,    78,    73,
       0,    74,    75,    76,    77,    78,     0,    80,    81,     0,
       0,     0,    79,    82,    80,    81,   112,     0,     0,     0,
      82,    80,    81,     0,     0,     0,    73,    82,    74,    75,
      76,    77,    78,   118,    73,     0,    74,    75,    76,    77,
      78,     0,     0,     0,     0,     0,     0,     0,    80,    81,
       0,     0,     0,     0,    82,     0,    80,    81,     0,     0,
       0,     0,    82
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       0,    15,     0,    10,    10,    50,    10,    52,    20,    27,
      10,    11,    10,    11,    18,    15,    27,    15,    23,    24,
      25,     6,     7,     8,     9,    10,     0,     3,     4,    14,
      33,    31,    32,    18,    10,    47,    21,    22,    31,    51,
      49,    50,    18,    11,    12,    34,    25,     5,    39,    40,
      41,    42,    10,    29,    30,    49,    32,    48,    43,    35,
      18,    51,    38,    63,    46,    79,    51,    58,    44,    45,
      61,    62,    79,    49,    21,    22,    23,    24,    25,    79,
      49,    79,    73,    74,    75,    76,    77,    78,    51,    80,
      81,    82,    19,    93,    21,    22,    23,    24,    25,     3,
       4,   108,   108,    94,    49,    50,    10,    51,   108,    40,
     108,    13,   119,   119,    18,    13,    10,    32,    11,   119,
      47,   119,   113,    15,   115,    29,    30,    93,    32,    -1,
     108,    35,   123,    -1,    38,     6,     7,     8,     9,    10,
      44,    45,    -1,    -1,    -1,    49,    -1,    18,    10,    -1,
      21,    22,    -1,    -1,    -1,    -1,    18,    -1,    -1,    19,
      -1,    21,    22,    23,    24,    25,    10,    29,    30,    -1,
      32,    -1,    43,    35,    18,    -1,    38,    -1,    -1,    -1,
      51,    41,    44,    45,    -1,    29,    30,    47,    32,    51,
      -1,    35,    -1,    19,    38,    21,    22,    23,    24,    25,
      44,    45,    19,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    41,    42,    52,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    19,    52,    21,    22,    23,    24,
      25,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    47,    41,    42,    -1,    -1,    52,    -1,    47,
      -1,    15,    16,    -1,    52,    19,    -1,    21,    22,    23,
      24,    25,    19,    -1,    21,    22,    23,    24,    25,    19,
      -1,    21,    22,    23,    24,    25,    -1,    41,    42,    -1,
      -1,    -1,    39,    47,    41,    42,    36,    -1,    -1,    -1,
      47,    41,    42,    -1,    -1,    -1,    19,    47,    21,    22,
      23,    24,    25,    26,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    -1,    47,    -1,    41,    42,    -1,    -1,
      -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    10,    18,    29,    30,    32,    35,    38,
      44,    45,    49,    54,    55,    56,    57,    58,    59,    60,
      63,    64,    65,    66,    67,    69,    70,    74,    77,    78,
      82,    27,    27,    33,    31,     6,     7,     8,     9,    21,
      22,    43,    51,    76,    77,    78,    80,    81,    51,    64,
      65,    68,    55,     0,    49,    58,    63,    49,    71,    20,
      47,    51,    75,     5,    61,    62,    77,    61,    34,    76,
      76,    76,    76,    19,    21,    22,    23,    24,    25,    39,
      41,    42,    47,    76,    46,    49,    72,    76,    76,    79,
      76,    77,    49,    50,    51,    49,    52,    76,    76,    76,
      76,    76,    76,    63,    64,    76,    76,    76,    52,    11,
      12,    73,    36,    50,    52,    51,    62,    76,    26,    40,
      65,    68,    13,    13,    76,    76,    52,    64,    65,    10,
      14,    76,    52,    15,    16
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
  YYUSE (yytype);
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

  YYUSE (yytype);
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
        case 2:
/* Line 1787 of yacc.c  */
#line 48 "el.y"
    { root = (yyvsp[(1) - (1)].fn); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 50 "el.y"
    { (yyval.fn) = stmtsV.create(); }
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 52 "el.y"
    { (yyval.fn) = stmtsV.createI((yyvsp[(1) - (1)].fn)); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 53 "el.y"
    { (yyval.fn) = stmtsV.putI((yyvsp[(1) - (2)].fn), (yyvsp[(2) - (2)].fn)); }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 56 "el.y"
    { (yyval.fn) = stmtsV.createI((yyvsp[(1) - (2)].fn)); }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 57 "el.y"
    { (yyval.fn) = stmtsV.create();    }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 58 "el.y"
    { (yyval.fn) = stmtsV.createI((yyvsp[(1) - (1)].fn)); }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 60 "el.y"
    { (yyval.fn) = stmtsV.putI((yyvsp[(1) - (3)].fn), (yyvsp[(2) - (3)].fn)); }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 61 "el.y"
    { (yyval.fn) = stmtsV.putI((yyvsp[(1) - (2)].fn), (yyvsp[(2) - (2)].fn)); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 68 "el.y"
    {
  func_stmt fs;
  fs.func = (yyvsp[(1) - (1)].fn);
  (yyval.fn) = stmtV.put(fs);
}
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 76 "el.y"
    { (yyval.fn) = -1; }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 81 "el.y"
    {
  putInput((yyvsp[(3) - (4)].fn));
}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 87 "el.y"
    {
  var_stmt vs;
  vs.vars = (yyvsp[(3) - (4)].fn);
  (yyval.fn) = stmtV.put(vs);
}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 95 "el.y"
    {
  (yyval.fn) = astsV.createI((yyvsp[(1) - (1)].fn));
}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 99 "el.y"
    {
  (yyval.fn) = astsV.putI((yyvsp[(1) - (3)].fn), (yyvsp[(3) - (3)].fn));
}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 105 "el.y"
    {
  (yyval.fn) = newast(NodeType::VARDEC, (yyvsp[(1) - (4)].fn), (yyvsp[(3) - (4)].fn));
}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 109 "el.y"
    {
  (yyval.fn) = newast(NodeType::IBPVARDEC, (yyvsp[(2) - (5)].fn), (yyvsp[(4) - (5)].fn));
}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 120 "el.y"
    {
  if_stmt i;
  i.con = (yyvsp[(2) - (6)].fn);
  i.then = (yyvsp[(4) - (6)].fn);
  i.els = (yyvsp[(6) - (6)].fn);
  (yyval.fn) = stmtV.put(i);
}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 131 "el.y"
    {
  if_stmt i;
  i.con = (yyvsp[(2) - (4)].fn);
  i.then = (yyvsp[(4) - (4)].fn);
  i.els = -1;
  (yyval.fn) = stmtV.put(i);
}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 139 "el.y"
    {
  if_stmt i;
  i.con = (yyvsp[(2) - (6)].fn);
  i.then = (yyvsp[(4) - (6)].fn);
  i.els = (yyvsp[(6) - (6)].fn);
  (yyval.fn) = stmtV.put(i);
}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 148 "el.y"
    { (yyval.fn) = new_once(-1, (yyvsp[(2) - (2)].fn)); }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 149 "el.y"
    { (yyval.fn) = new_once((yyvsp[(3) - (5)].fn), (yyvsp[(5) - (5)].fn)); }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 152 "el.y"
    { (yyval.fn) = new_once(-1, (yyvsp[(2) - (2)].fn)); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 153 "el.y"
    { (yyval.fn) = new_once((yyvsp[(3) - (5)].fn), (yyvsp[(5) - (5)].fn)); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 156 "el.y"
    { (yyval.fn) = -1; }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 161 "el.y"
    {
  auto &oa = boost::get<order_stmt>(stmtV[(yyval.fn) = (yyvsp[(4) - (4)].fn)]);
  oa.op = (yyvsp[(1) - (4)].fn);
  oa.name = (yyvsp[(2) - (4)].fn);
  oa.num = (yyvsp[(3) - (4)].fn);
}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 169 "el.y"
    { (yyval.fn) = 0; }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 170 "el.y"
    { (yyval.fn) = 1; }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 171 "el.y"
    { (yyval.fn) = 2; }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 172 "el.y"
    { (yyval.fn) = 2; }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 173 "el.y"
    { (yyval.fn) = 3; }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 174 "el.y"
    { (yyval.fn) = 3; }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 177 "el.y"
    { (yyval.fn) = -1; }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 181 "el.y"
    { (yyval.fn) = -1; }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 186 "el.y"
    {
  order_stmt o;
  o.type = 0;
  (yyval.fn) = stmtV.put(o);
}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 192 "el.y"
    {
	order_stmt o;
	o.type = 1;
	o.price = (yyvsp[(3) - (4)].fn);
	(yyval.fn) = stmtV.put(o);
      }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 199 "el.y"
    {
	order_stmt o;
	o.type = 2;
	o.price = (yyvsp[(3) - (4)].fn);
	(yyval.fn) = stmtV.put(o);
      }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 206 "el.y"
    {
	order_stmt o;
	o.type = 3;
	(yyval.fn) = stmtV.put(o);
      }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 214 "el.y"
    {
  asm_stmt as;
  as.var = (yyvsp[(1) - (3)].fn);
  as.type = (yyvsp[(2) - (3)].fn);
  as.exp = (yyvsp[(3) - (3)].fn);
  (yyval.fn) = stmtV.put(as);
}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 223 "el.y"
    { (yyval.fn) = 0; }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 227 "el.y"
    { (yyval.fn) = newast(NodeType::MUL, (yyvsp[(1) - (3)].fn), (yyvsp[(3) - (3)].fn)); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 228 "el.y"
    { (yyval.fn) = newast(NodeType::DIV, (yyvsp[(1) - (3)].fn), (yyvsp[(3) - (3)].fn)); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 229 "el.y"
    { (yyval.fn) = newast(NodeType::ADD, (yyvsp[(1) - (3)].fn), (yyvsp[(3) - (3)].fn)); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 230 "el.y"
    { (yyval.fn) = newast(NodeType::SUB, (yyvsp[(1) - (3)].fn), (yyvsp[(3) - (3)].fn)); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 231 "el.y"
    { (yyval.fn) = newast(NodeType::AND, (yyvsp[(1) - (3)].fn), (yyvsp[(3) - (3)].fn)); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 232 "el.y"
    { (yyval.fn) = newast(NodeType::OR,  (yyvsp[(1) - (3)].fn), (yyvsp[(3) - (3)].fn)); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 233 "el.y"
    { (yyval.fn) = newast(NodeType::NOT, (yyvsp[(2) - (2)].fn), -1); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 234 "el.y"
    { (yyval.fn) = newcmp(0,  (yyvsp[(1) - (3)].fn), (yyvsp[(3) - (3)].fn)); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 235 "el.y"
    { (yyval.fn) = newcmp((yyvsp[(2) - (3)].fn), (yyvsp[(1) - (3)].fn), (yyvsp[(3) - (3)].fn)); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 236 "el.y"
    { (yyval.fn) = newast(NodeType::UMINUS, (yyvsp[(2) - (2)].fn), -1); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 237 "el.y"
    { (yyval.fn) = (yyvsp[(2) - (2)].fn); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 238 "el.y"
    { (yyval.fn) = (yyvsp[(2) - (3)].fn); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 239 "el.y"
    { (yyval.fn) = newast(NodeType::BAR, (yyvsp[(1) - (4)].fn), (yyvsp[(3) - (4)].fn)); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 244 "el.y"
    { (yyval.fn) = newname((yyvsp[(1) - (1)].fn)); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 245 "el.y"
    { (yyval.fn) = newname(0); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 248 "el.y"
    { (yyval.fn) = newast(NodeType::FUNC, (yyvsp[(1) - (1)].fn), -1); }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 249 "el.y"
    { (yyval.fn) = newast(NodeType::FUNC, (yyvsp[(1) - (4)].fn), (yyvsp[(3) - (4)].fn)); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 252 "el.y"
    { (yyval.fn) = astsV.createI((yyvsp[(1) - (1)].fn)); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 253 "el.y"
    { (yyval.fn) = astsV.putI((yyvsp[(1) - (3)].fn), (yyvsp[(3) - (3)].fn)); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 256 "el.y"
    { (yyval.fn) = newdouble((yyvsp[(1) - (1)].fn)); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 257 "el.y"
    { (yyval.fn) = newtf(true); }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 258 "el.y"
    { (yyval.fn) = newtf(false); }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 262 "el.y"
    { (yyval.fn) = newtext((yyvsp[(1) - (1)].fn)); }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 265 "el.y"
    {
  block_stmt bs;
  bs.stmts = (yyvsp[(2) - (3)].fn);
  (yyval.fn) = stmtV.put(bs);
}
    break;


/* Line 1787 of yacc.c  */
#line 2018 "el.tab.c"
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


/* Line 2050 of yacc.c  */
#line 271 "el.y"


