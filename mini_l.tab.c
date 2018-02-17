/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 5 "mini_l.y" /* yacc.c:339  */


  #include <stdio.h>
  #include <string>

  int yylex(void);
  void yyerror(const char *msg);

  // stuff from flex that bison needs to know about:



#line 79 "mini_l.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "mini_l.tab.h".  */
#ifndef YY_YY_MINI_L_TAB_H_INCLUDED
# define YY_YY_MINI_L_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END_PARAMS = 260,
    BEGIN_LOCALS = 261,
    END_LOCALS = 262,
    BEGIN_BODY = 263,
    END_BODY = 264,
    ARRAY = 265,
    OF = 266,
    IF = 267,
    THEN = 268,
    ENDIF = 269,
    ELSE = 270,
    WHILE = 271,
    DO = 272,
    FOREACH = 273,
    IN = 274,
    BEGINLOOP = 275,
    ENDLOOP = 276,
    CONTINUE = 277,
    READ = 278,
    WRITE = 279,
    AND = 280,
    OR = 281,
    NOT = 282,
    TRUE = 283,
    FALSE = 284,
    RETURN = 285,
    PLUS = 286,
    SUB = 287,
    UMINUS = 288,
    MULT = 289,
    DIV = 290,
    MOD = 291,
    COLON = 292,
    COMMA = 293,
    L_PAREN = 294,
    R_PAREN = 295,
    L_SQUARE_BRACKET = 296,
    IDENT = 297,
    R_SQUARE_BRACKET = 298,
    ASSIGN = 299,
    NUMBER = 300,
    INTEGER = 301,
    SEMICOLON = 302,
    EQ = 303,
    NEQ = 304,
    LT = 305,
    GT = 306,
    LTE = 307,
    GTE = 308
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "mini_l.y" /* yacc.c:355  */

  int		    int_val;
  char      *sval;


#line 179 "mini_l.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_L_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 196 "mini_l.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   312

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  233

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    46,    47,    50,    51,    52,    53,    54,
      55,    56,    57,    60,    61,    64,    65,    68,    69,    70,
      71,    74,    75,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    89,    92,    93,    94,    95,    98,    99,   102,
     103,   106,   107,   110,   111,   114,   115,   118,   119,   122,
     123,   126,   129,   132,   133,   140,   141,   144,   145,   148,
     149,   150,   151,   152,   153,   154,   155,   158,   159,   160,
     161,   162,   163,   166,   167,   168,   169,   170,   171,   172,
     175,   176,   177,   180,   181,   182,   185,   186,   187,   188,
     191,   192,   193,   194,   197,   198,   199,   200,   203,   204,
     205,   206,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   220,   221,   224,   225
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "ARRAY", "OF",
  "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOREACH", "IN",
  "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT",
  "TRUE", "FALSE", "RETURN", "PLUS", "SUB", "UMINUS", "MULT", "DIV", "MOD",
  "COLON", "COMMA", "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "IDENT",
  "R_SQUARE_BRACKET", "ASSIGN", "NUMBER", "INTEGER", "SEMICOLON", "EQ",
  "NEQ", "LT", "GT", "LTE", "GTE", "$accept", "Program_Prime", "Program",
  "Function", "A", "B", "Declaration", "C", "Statement", "D", "E", "F",
  "G", "H", "I", "J", "K", "L", "M", "N", "Bool-Expr", "Relation-And-Expr",
  "P", "Relation-Expr", "Comp", "Expression", "Q", "R",
  "Multiplicative-Expr", "S", "T", "U", "Term", "V", "Var", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF -154

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-154)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,   -13,    47,  -154,    15,    -8,  -154,  -154,    62,     7,
      92,    39,    63,    32,    18,     9,    59,    71,   104,    75,
     112,   121,    90,  -154,   100,    10,    19,  -154,    69,   148,
     102,  -154,   125,  -154,   159,   166,   152,   152,   167,   144,
    -154,   146,   146,    88,   151,   180,   153,   154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,   149,    72,   155,
     158,   127,   191,   113,  -154,  -154,    -2,   152,   -24,  -154,
     192,   179,   179,   111,     4,   -12,  -154,   193,   256,   195,
     177,   177,    88,  -154,    88,  -154,   210,   256,    88,   211,
     175,   212,   185,   220,   187,   160,  -154,  -154,   152,   111,
      88,  -154,  -154,   198,   241,    73,   256,   152,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,    88,    88,    88,    88,
      88,    88,  -154,  -154,  -154,   256,   188,   202,   146,  -154,
    -154,   200,   207,  -154,  -154,  -154,  -154,   236,   208,   242,
    -154,   250,   251,   218,   226,    88,   229,  -154,  -154,  -154,
      25,   224,   179,  -154,    13,    13,   -12,   -12,   -12,   228,
     209,   257,   177,  -154,  -154,  -154,   230,  -154,  -154,   274,
    -154,  -154,  -154,    88,  -154,   244,   194,  -154,    88,    88,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,   225,  -154,   264,   256,  -154,  -154,  -154,
     249,  -154,   248,   256,   139,   282,    13,    13,  -154,   267,
    -154,   252,  -154,  -154,   253,   254,   283,   255,  -154,  -154,
    -154,  -154,  -154,   240,   256,  -154,   258,  -154,  -154,   285,
    -154,  -154,  -154
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,    17,    21,     0,     0,    14,     0,     0,
       0,    22,     0,    18,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,   113,     0,     0,     0,    23,    24,
      25,    26,    27,    28,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,    61,    63,     0,     0,   113,   104,
       0,    53,    55,     0,    73,    86,   102,     0,     0,     0,
      45,    49,     0,    52,     0,     5,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    64,     0,     0,
       0,   105,   103,     0,     0,     0,     0,     0,    54,    56,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    87,    88,    89,     0,     0,     0,     0,    46,
      50,     0,     0,     6,    16,    32,     7,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,    65,   106,   108,
       0,     0,    57,    59,    74,    75,    90,    94,    98,     0,
       0,     0,    47,   114,     8,    19,     0,    10,    11,     0,
      66,    60,   107,     0,   109,     0,     0,    58,     0,     0,
      76,    78,    77,    79,    91,    92,    93,    95,    96,    97,
      99,   100,   101,     0,    41,     0,     0,    48,    20,    12,
     111,   110,     0,     0,     0,     0,    80,    83,    39,     0,
      42,     0,   112,    33,     0,     0,     0,     0,    81,    82,
      84,    85,    40,     0,    37,    35,     0,    34,    43,     0,
      38,    36,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,   299,  -154,     2,   -53,  -154,   280,   -74,  -154,
    -154,   103,  -154,  -154,  -154,  -154,   -80,  -154,  -154,  -154,
     -26,  -154,   -69,   201,   213,   -36,  -153,  -149,  -108,   -83,
     -32,   -22,   -16,   109,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    12,    46,    13,    17,    47,    48,
      49,   205,    50,    51,    52,    53,   129,    54,    55,    56,
      70,    71,   108,    72,   116,    73,   180,   181,    74,   122,
     123,   124,    75,   175,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,   130,   182,   109,   126,    90,   183,    83,    94,   154,
     155,    77,    10,    80,    81,   105,    21,    84,     1,    22,
      32,    27,   119,   120,   121,    20,    34,    99,    35,     5,
      57,   104,   151,    57,   134,   117,   118,   100,   102,     8,
      44,   103,   143,   101,   178,   179,   131,     6,   132,    11,
      57,   159,   135,   218,   220,    23,    33,   219,   221,    57,
      11,    11,   104,   173,   146,   174,     9,    57,    18,   150,
     206,   207,   144,   184,   187,   190,    15,    16,    57,    19,
     153,    36,   197,   177,    36,    37,    38,    39,    37,    38,
      39,    40,    41,    42,    40,    41,    42,    57,    14,    43,
     162,    24,    43,   156,   157,   158,    66,   195,    25,   171,
      26,    44,    82,   149,    44,    68,    45,    11,    69,    89,
      28,    66,   211,   204,   185,   188,   191,    82,    29,   214,
      68,    30,    57,    69,   186,   189,   192,   200,    16,    36,
     209,    96,    97,    37,    38,    39,    66,    59,    57,    40,
      41,    42,    98,   215,   203,    68,    58,    43,    69,   110,
     111,   112,   113,   114,   115,    57,    60,    61,    57,    44,
     229,   230,    36,    62,    93,    57,    37,    38,    39,    63,
      64,    65,    40,    41,    42,    66,    79,    78,    44,    85,
      43,    67,    84,    88,    68,    57,    57,    69,    91,    95,
      86,    87,    44,    92,   107,   106,    36,   142,   202,   203,
      37,    38,    39,   125,   127,   128,    40,    41,    42,   133,
     136,    36,   137,   138,    43,    37,    38,    39,   139,   140,
     194,    40,    41,    42,   141,   160,    44,    36,   147,    43,
     148,    37,    38,    39,   161,   164,   208,    40,    41,    42,
     163,    44,    36,   166,   165,    43,    37,    38,    39,   167,
     168,   228,    40,    41,    42,   169,   170,    44,    36,   172,
      43,   176,    37,    38,    39,   193,   198,   196,    40,    41,
      42,   148,    44,   199,   201,   210,    43,   173,   222,   110,
     111,   112,   113,   114,   115,   213,   217,   226,    44,   223,
     224,   225,   227,     7,    31,   231,   232,   216,   152,   212,
       0,     0,   145
};

static const yytype_int16 yycheck[] =
{
      28,    81,   155,    72,    78,    58,   155,    43,    61,   117,
     118,    37,     5,    41,    42,    39,    14,    41,     3,    10,
      10,    19,    34,    35,    36,     7,     7,    63,    26,    42,
      58,    67,   106,    61,    87,    31,    32,    39,    66,    47,
      42,    67,    95,    45,    31,    32,    82,     0,    84,    42,
      78,   125,    88,   206,   207,    46,    46,   206,   207,    87,
      42,    42,    98,    38,   100,    40,     4,    95,     5,   105,
     178,   179,    98,   156,   157,   158,    37,    38,   106,    47,
     116,    12,   162,   152,    12,    16,    17,    18,    16,    17,
      18,    22,    23,    24,    22,    23,    24,   125,     6,    30,
     128,    42,    30,   119,   120,   121,    33,   160,    37,   145,
       6,    42,    39,    40,    42,    42,    47,    42,    45,    47,
       8,    33,   196,   176,   156,   157,   158,    39,     7,   203,
      42,    41,   160,    45,   156,   157,   158,   173,    38,    12,
     193,    28,    29,    16,    17,    18,    33,    45,   176,    22,
      23,    24,    39,    14,    15,    42,     8,    30,    45,    48,
      49,    50,    51,    52,    53,   193,    41,     8,   196,    42,
     223,   224,    12,     7,    47,   203,    16,    17,    18,    27,
      28,    29,    22,    23,    24,    33,    42,    20,    42,     9,
      30,    39,    41,    44,    42,   223,   224,    45,    43,     8,
      47,    47,    42,    45,    25,    13,    12,    47,    14,    15,
      16,    17,    18,    20,    19,    38,    22,    23,    24,     9,
       9,    12,    47,    11,    30,    16,    17,    18,    43,     9,
      21,    22,    23,    24,    47,    47,    42,    12,    40,    30,
      40,    16,    17,    18,    42,     9,    21,    22,    23,    24,
      43,    42,    12,    11,    46,    30,    16,    17,    18,     9,
       9,    21,    22,    23,    24,    47,    40,    42,    12,    40,
      30,    47,    16,    17,    18,    47,    46,    20,    22,    23,
      24,    40,    42,     9,    40,    21,    30,    38,    21,    48,
      49,    50,    51,    52,    53,    47,    14,    14,    42,    47,
      47,    47,    47,     4,    24,    47,    21,   204,   107,   200,
      -1,    -1,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    55,    56,    57,    42,     0,    56,    47,     4,
       5,    42,    58,    60,     6,    37,    38,    61,     5,    47,
       7,    58,    10,    46,    42,    37,     6,    58,     8,     7,
      41,    61,    10,    46,     7,    58,    12,    16,    17,    18,
      22,    23,    24,    30,    42,    47,    59,    62,    63,    64,
      66,    67,    68,    69,    71,    72,    73,    88,     8,    45,
      41,     8,     7,    27,    28,    29,    33,    39,    42,    45,
      74,    75,    77,    79,    82,    86,    88,    74,    20,    42,
      88,    88,    39,    79,    41,     9,    47,    47,    44,    47,
      59,    43,    45,    47,    59,     8,    28,    29,    39,    79,
      39,    45,    88,    74,    79,    39,    13,    25,    76,    76,
      48,    49,    50,    51,    52,    53,    78,    31,    32,    34,
      35,    36,    83,    84,    85,    20,    62,    19,    38,    70,
      70,    79,    79,     9,    59,    79,     9,    47,    11,    43,
       9,    47,    47,    59,    74,    78,    79,    40,    40,    40,
      79,    62,    77,    79,    82,    82,    86,    86,    86,    62,
      47,    42,    88,    43,     9,    46,    11,     9,     9,    47,
      40,    79,    40,    38,    40,    87,    47,    76,    31,    32,
      80,    81,    80,    81,    83,    84,    85,    83,    84,    85,
      83,    84,    85,    47,    21,    59,    20,    70,    46,     9,
      79,    40,    14,    15,    59,    65,    82,    82,    21,    59,
      21,    62,    87,    47,    62,    14,    65,    14,    80,    81,
      80,    81,    21,    47,    47,    47,    14,    47,    21,    59,
      59,    47,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    59,    59,    60,    60,    60,
      60,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    63,    64,    64,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    71,
      71,    72,    73,    74,    74,    75,    75,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    78,    78,    78,
      78,    78,    78,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    80,    81,    81,    81,    82,    82,    82,    82,
      83,    83,    83,    83,    84,    84,    84,    84,    85,    85,
      85,    85,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    87,    87,    88,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    10,    11,    11,    12,    11,
      12,    12,    13,     2,     3,     2,     3,     3,     4,     8,
       9,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     7,     8,     8,     9,     3,     4,     6,
       7,     5,     6,     8,     9,     2,     3,     2,     3,     2,
       3,     1,     2,     1,     2,     1,     2,     2,     3,     3,
       4,     1,     2,     1,     2,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     4,     4,     4,     4,
       2,     3,     3,     2,     3,     3,     1,     2,     2,     2,
       2,     3,     3,     3,     2,     3,     3,     3,     2,     3,
       3,     3,     1,     2,     1,     2,     3,     4,     3,     4,
       5,     2,     3,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
        case 2:
#line 43 "mini_l.y" /* yacc.c:1646  */
    {printf("Program_Prime --> Program\n");}
#line 1451 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "mini_l.y" /* yacc.c:1646  */
    {printf("Program --> epsilon\n");}
#line 1457 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "mini_l.y" /* yacc.c:1646  */
    {printf("Program --> Function Program\n");}
#line 1463 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 50 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY SEMICOLON END_BODY\n");}
#line 1469 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
#line 1475 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 52 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY SEMICOLON END_BODY\n");}
#line 1481 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 53 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
#line 1487 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 54 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY SEMICOLON END_BODY\n");}
#line 1493 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 55 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
#line 1499 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY SEMICOLON END_BODY\n");}
#line 1505 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 57 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
#line 1511 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "mini_l.y" /* yacc.c:1646  */
    {printf("A --> Declaration SEMICOLON\n");}
#line 1517 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "mini_l.y" /* yacc.c:1646  */
    {printf("A --> Declaration SEMICOLON A\n");}
#line 1523 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 64 "mini_l.y" /* yacc.c:1646  */
    {printf("B --> Statement SEMICOLON\n");}
#line 1529 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 65 "mini_l.y" /* yacc.c:1646  */
    {printf("B --> Statement SEMICOLON B\n");}
#line 1535 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 68 "mini_l.y" /* yacc.c:1646  */
    {printf("Declaration --> IDENT COLON INTEGER\n");}
#line 1541 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 69 "mini_l.y" /* yacc.c:1646  */
    {printf("Declaration --> IDENT C COLON INTEGER\n");}
#line 1547 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 70 "mini_l.y" /* yacc.c:1646  */
    {printf("Declaration --> IDENT COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1553 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 71 "mini_l.y" /* yacc.c:1646  */
    {printf("Declaration --> IDENT C COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1559 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 74 "mini_l.y" /* yacc.c:1646  */
    {printf("C --> COMMA IDENT\n");}
#line 1565 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 75 "mini_l.y" /* yacc.c:1646  */
    {printf("C --> COMMA IDENT C\n");}
#line 1571 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 78 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> D\n");}
#line 1577 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 79 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> E\n");}
#line 1583 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 80 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> I\n");}
#line 1589 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 81 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> H\n");}
#line 1595 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 82 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> I\n");}
#line 1601 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 83 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> J\n");}
#line 1607 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 84 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> L\n");}
#line 1613 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 85 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> M\n");}
#line 1619 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 86 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> N\n");}
#line 1625 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 89 "mini_l.y" /* yacc.c:1646  */
    {printf("D --> Var ASSIGN Expression\n");}
#line 1631 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 92 "mini_l.y" /* yacc.c:1646  */
    {printf("E --> IF Bool-Expr THEN Statement SEMICOLON ENDIF SEMICOLON");}
#line 1637 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 93 "mini_l.y" /* yacc.c:1646  */
    {printf("E --> IF Bool-Expr THEN Statement SEMICOLON F ENDIF SEMICOLON");}
#line 1643 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 94 "mini_l.y" /* yacc.c:1646  */
    {printf("E --> IF Bool-Expr THEN Statement SEMICOLON B ENDIF SEMICOLON");}
#line 1649 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 95 "mini_l.y" /* yacc.c:1646  */
    {printf("E --> IF Bool-Expr THEN Statement SEMICOLON B F ENDIF SEMICOLON");}
#line 1655 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 98 "mini_l.y" /* yacc.c:1646  */
    {printf("F --> ELSE Statement SEMICOLON\n");}
#line 1661 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 99 "mini_l.y" /* yacc.c:1646  */
    {printf("F --> ELSE Statement SEMICOLON B\n");}
#line 1667 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 102 "mini_l.y" /* yacc.c:1646  */
    {printf("G --> WHILE Bool-Expr BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
#line 1673 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 103 "mini_l.y" /* yacc.c:1646  */
    {printf("G --> WHILE Bool-Expr BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
#line 1679 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 106 "mini_l.y" /* yacc.c:1646  */
    {printf("H --> DO BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
#line 1685 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 107 "mini_l.y" /* yacc.c:1646  */
    {printf("H --> DO BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
#line 1691 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 110 "mini_l.y" /* yacc.c:1646  */
    {printf("I --> FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
#line 1697 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 111 "mini_l.y" /* yacc.c:1646  */
    {printf("I --> FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
#line 1703 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 114 "mini_l.y" /* yacc.c:1646  */
    {printf("J --> READ Var\n");}
#line 1709 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 115 "mini_l.y" /* yacc.c:1646  */
    {printf("J --> READ Var K\n");}
#line 1715 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 118 "mini_l.y" /* yacc.c:1646  */
    {printf("K --> COMMA Var\n");}
#line 1721 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 119 "mini_l.y" /* yacc.c:1646  */
    {printf("K --> COMMA Var K\n");}
#line 1727 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 122 "mini_l.y" /* yacc.c:1646  */
    {printf("L --> WRITE Var\n");}
#line 1733 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 123 "mini_l.y" /* yacc.c:1646  */
    {printf("L --> WRITE Var K\n");}
#line 1739 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 126 "mini_l.y" /* yacc.c:1646  */
    {printf("M --> CONTINUE\n");}
#line 1745 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 129 "mini_l.y" /* yacc.c:1646  */
    {printf("N --> RETURN Expression\n");}
#line 1751 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 132 "mini_l.y" /* yacc.c:1646  */
    {printf("Bool-Expr --> Relation-And-Expr\n");}
#line 1757 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 133 "mini_l.y" /* yacc.c:1646  */
    {printf("Bool-Expr --> Relation-And-Expr P\n");}
#line 1763 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 140 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-And-Expr --> Relation-Expr\n");}
#line 1769 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 141 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-And-Expr --> Relation-Expr P\n");}
#line 1775 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 144 "mini_l.y" /* yacc.c:1646  */
    {printf("P --> AND Relation-Expr\n");}
#line 1781 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 145 "mini_l.y" /* yacc.c:1646  */
    {printf("P --> AND Relation-Expr P\n");}
#line 1787 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 148 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> Expression Comp Expression\n");}
#line 1793 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 149 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> NOT Expression Comp Expression\n");}
#line 1799 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 150 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> TRUE\n");}
#line 1805 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 151 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> NOT TRUE\n");}
#line 1811 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 152 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> FALSE\n");}
#line 1817 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 153 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> NOT FALSE\n");}
#line 1823 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 154 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> L_PAREN Bool-Expr R_PAREN\n");}
#line 1829 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 155 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> NOT L_PAREN Bool-Expr R_PAREN\n");}
#line 1835 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 158 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> EQ\n");}
#line 1841 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 159 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> NEQ\n");}
#line 1847 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 160 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> LT\n");}
#line 1853 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 161 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> GT\n");}
#line 1859 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 162 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> LTE\n");}
#line 1865 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 163 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> GTE\n");}
#line 1871 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 166 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> Multiplicative-Expr\n");}
#line 1877 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 167 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> PLUS Multiplicative-Expr\n");}
#line 1883 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 168 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> SUB Multiplicative-Expr\n");}
#line 1889 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 169 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> PLUS Multiplicative-Expr Q\n");}
#line 1895 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 170 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> SUB Multiplicative-Expr Q\n");}
#line 1901 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 171 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> PLUS Multiplicative-Expr R\n");}
#line 1907 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 172 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> SUB Multiplicative-Expr R\n");}
#line 1913 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 175 "mini_l.y" /* yacc.c:1646  */
    {printf("Q --> PLUS Multiplicative-Expr\n");}
#line 1919 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 176 "mini_l.y" /* yacc.c:1646  */
    {printf("Q --> PLUS Multiplicative-Expr Q\n");}
#line 1925 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 177 "mini_l.y" /* yacc.c:1646  */
    {printf("Q --> PLUS Multiplicative-Expr R\n");}
#line 1931 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 180 "mini_l.y" /* yacc.c:1646  */
    {printf("T --> SUB Multiplicative-Expr\n");}
#line 1937 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 181 "mini_l.y" /* yacc.c:1646  */
    {printf("T --> SUB Multiplicative-Expr Q\n");}
#line 1943 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 182 "mini_l.y" /* yacc.c:1646  */
    {printf("T --> SUB Multiplicative-Expr R\n");}
#line 1949 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 185 "mini_l.y" /* yacc.c:1646  */
    {printf("Multiplicative-Expr --> Term\n");}
#line 1955 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 186 "mini_l.y" /* yacc.c:1646  */
    {printf("Multiplicative-Expr --> Term S\n");}
#line 1961 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 187 "mini_l.y" /* yacc.c:1646  */
    {printf("Multiplicative-Expr --> Term T\n");}
#line 1967 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 188 "mini_l.y" /* yacc.c:1646  */
    {printf("Multiplicative-Expr --> Term U\n");}
#line 1973 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 191 "mini_l.y" /* yacc.c:1646  */
    {printf("U --> MULT Term\n");}
#line 1979 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 192 "mini_l.y" /* yacc.c:1646  */
    {printf("U --> MULT Term S\n");}
#line 1985 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 193 "mini_l.y" /* yacc.c:1646  */
    {printf("U --> MULT Term T\n");}
#line 1991 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 194 "mini_l.y" /* yacc.c:1646  */
    {printf("U --> MULT Term U\n");}
#line 1997 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 197 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> DIV Term\n");}
#line 2003 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 198 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> DIV Term S\n");}
#line 2009 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 199 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> DIV Term T\n");}
#line 2015 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 200 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> DIV Term U\n");}
#line 2021 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 203 "mini_l.y" /* yacc.c:1646  */
    {printf("W --> MOD Term\n");}
#line 2027 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 204 "mini_l.y" /* yacc.c:1646  */
    {printf("W --> MOD Term S\n");}
#line 2033 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 205 "mini_l.y" /* yacc.c:1646  */
    {printf("W --> MOD Term T\n");}
#line 2039 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 206 "mini_l.y" /* yacc.c:1646  */
    {printf("W --> MOD Term U\n");}
#line 2045 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 209 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> Var\n");}
#line 2051 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 210 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> UMINUS Var\n");}
#line 2057 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 211 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> NUMBER\n");}
#line 2063 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 212 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> UMINUS NUMBER\n");}
#line 2069 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 213 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> L_PAREN Expression R_PAREN\n");}
#line 2075 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 214 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> UMINUS L_PAREN Expression R_PAREN\n");}
#line 2081 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 215 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> IDENT L_PAREN R_PAREN\n");}
#line 2087 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 216 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> IDENT L_PAREN Expression R_PAREN\n");}
#line 2093 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 217 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> IDENT L_PAREN Expression V R_PAREN\n");}
#line 2099 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 220 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> COMMA Expression\n");}
#line 2105 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 221 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> COMMA Expression V\n");}
#line 2111 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 224 "mini_l.y" /* yacc.c:1646  */
    {printf("Var --> IDENT\n");}
#line 2117 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 225 "mini_l.y" /* yacc.c:1646  */
    {printf("Var --> IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");}
#line 2123 "mini_l.tab.c" /* yacc.c:1646  */
    break;


#line 2127 "mini_l.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 227 "mini_l.y" /* yacc.c:1906  */


void yyerror(const char *msg)
{
  // extern int yylineno;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  extern int currentColumn;
  extern int currentLine;

  printf("Rick's Error: %s at symbol '%s' on line %d column %d \n", msg, yytext, currentLine, currentColumn);

  return;
}

int main( int argc, char **argv )
{
  //yylex();
  yyparse();
}
