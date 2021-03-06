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
  /*#include <string>*/

  int yylex(void);
  void yyerror(const char *msg);

  /* stuff from flex that bison needs to know about: */



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
# define YYERROR_VERBOSE 1
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
    IDENT = 258,
    FUNCTION = 259,
    BEGIN_PARAMS = 260,
    END_PARAMS = 261,
    BEGIN_LOCALS = 262,
    END_LOCALS = 263,
    BEGIN_BODY = 264,
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
    TRUE = 280,
    FALSE = 281,
    RETURN = 282,
    COLON = 283,
    COMMA = 284,
    NUMBER = 285,
    INTEGER = 286,
    END_BODY = 287,
    SEMICOLON = 288,
    AND = 289,
    OR = 290,
    ASSIGN = 291,
    NOT = 292,
    PLUS = 293,
    SUB = 294,
    MULT = 295,
    DIV = 296,
    MOD = 297,
    L_SQUARE_BRACKET = 298,
    R_SQUARE_BRACKET = 299,
    L_PAREN = 300,
    EQ = 301,
    NEQ = 302,
    LT = 303,
    GT = 304,
    LTE = 305,
    GTE = 306,
    R_PAREN = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "mini_l.y" /* yacc.c:355  */

  int		    int_val;
  char      *sval;


#line 178 "mini_l.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_L_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 195 "mini_l.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   236

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    81,    81,    84,    85,    88,    93,    94,    97,    98,
     101,   104,   105,   108,   109,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   124,   127,   128,   131,   132,
     133,   136,   137,   140,   141,   144,   145,   148,   149,   152,
     153,   156,   157,   160,   161,   164,   165,   168,   169,   172,
     173,   174,   175,   176,   177,   178,   179,   182,   183,   184,
     185,   186,   187,   190,   193,   194,   197,   198,   201,   204,
     205,   208,   209,   212,   213,   216,   217,   218,   219,   220,
     221,   222,   225,   226,   229,   230,   233,   234,   237
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "FUNCTION", "BEGIN_PARAMS",
  "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "ARRAY", "OF",
  "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOREACH", "IN",
  "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "TRUE", "FALSE",
  "RETURN", "COLON", "COMMA", "NUMBER", "INTEGER", "END_BODY", "SEMICOLON",
  "AND", "OR", "ASSIGN", "NOT", "PLUS", "SUB", "MULT", "DIV", "MOD",
  "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "L_PAREN", "EQ", "NEQ", "LT",
  "GT", "LTE", "GTE", "R_PAREN", "$accept", "Program_Prime", "Program",
  "Function", "Alpha", "Beta", "Declaration", "C", "D", "Statement", "E",
  "F", "G", "H", "I", "J", "K", "Lima", "Bool-Expr", "Papa",
  "Relation-And-Expr", "Quebec", "Relation-Expr", "Comp", "Expression",
  "S", "T", "Multiplicative-Expr", "U", "V", "W", "Term", "Y", "Z", "Var",
  "identifiers", YY_NULLPTR
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
     305,   306,   307
};
# endif

#define YYPACT_NINF -138

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-138)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,    17,    25,  -138,     0,  -138,    -7,  -138,  -138,    55,
      17,    60,    43,    48,    75,    17,    17,    52,    17,  -138,
      48,    76,    84,  -138,    54,    67,    90,    77,  -138,   206,
      61,    20,    20,    88,    17,  -138,    17,    17,     4,    78,
      79,  -138,  -138,  -138,  -138,  -138,  -138,    80,    68,   103,
    -138,  -138,  -138,    70,    49,    20,   113,    92,    97,    73,
      94,    93,  -138,    -5,   124,   206,   127,   120,   120,     4,
    -138,  -138,   206,     4,     4,  -138,  -138,  -138,    20,    73,
    -138,     4,  -138,    98,    91,   206,    20,  -138,    20,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,     4,     4,   118,     4,
     111,     4,   206,   129,    17,    17,  -138,  -138,   115,  -138,
    -138,   128,   116,     4,   119,  -138,  -138,   150,    92,    97,
    -138,    94,     4,  -138,    93,     4,   145,   155,   136,   156,
     142,   179,   120,  -138,  -138,  -138,  -138,   158,  -138,  -138,
     118,    94,   111,    93,     4,  -138,     4,  -138,  -138,   174,
     178,   182,   206,  -138,   206,   185,   191,  -138,   118,   145,
     111,    93,   155,  -138,   183,    20,   194,   186,   187,   201,
    -138,  -138,  -138,   145,   111,  -138,  -138,  -138,    20,   190,
     206,  -138,  -138,   145,  -138,  -138,   195,  -138,  -138,  -138
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,    88,     0,     1,     4,     0,
       6,     0,     0,    11,     0,     6,     0,     0,     6,     7,
      11,    13,     0,    12,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,    15,    16,    17,    18,    19,    20,     0,    86,     0,
      51,    53,    77,     0,     0,     0,     0,    42,    46,     0,
      64,    69,    75,    86,     0,     0,     0,    38,    22,     0,
      24,     5,     8,     0,     0,    14,    52,    54,     0,     0,
      78,     0,    76,     0,     0,     0,     0,    41,     0,    45,
      57,    58,    59,    60,    61,    62,     0,     0,    66,     0,
      71,    82,     0,     0,     0,     0,    37,    21,     0,     9,
      25,     0,     0,     0,     0,    55,    79,     0,    43,    47,
      49,    64,     0,    63,    69,     0,    73,    84,     0,     0,
       0,     0,    39,    87,    56,    50,    80,    28,    44,    48,
      66,    64,    71,    69,     0,    68,     0,    83,    81,     0,
       0,     0,     0,    40,     0,    28,     0,    65,    66,    73,
      71,    69,    84,    31,     0,     0,     0,     0,     0,     0,
      27,    67,    70,    73,    71,    85,    32,    33,     0,     0,
      29,    26,    72,    73,    34,    36,     0,    30,    74,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,   217,  -138,     1,   -62,  -138,   205,  -138,   -63,
    -138,  -138,    71,  -138,  -138,  -138,  -138,   -60,   -31,   109,
     146,   112,   147,   157,   -11,  -110,  -137,   -68,  -106,   -86,
     -90,   -93,  -138,    72,   -24,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    11,    39,    12,    17,    25,    40,
      41,    42,   156,    43,    44,    45,    46,   106,    56,    87,
      57,    89,    58,    96,    59,    98,   123,    60,   100,   126,
     145,    61,   128,   147,    62,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       6,    64,   103,   157,     1,    47,   124,     5,   107,    13,
     109,   140,    67,    68,    13,    20,    19,    13,   142,    22,
       5,   171,   117,     5,    83,     7,     9,    70,    48,   121,
      82,   158,   143,    66,    52,    48,    48,   160,    74,   129,
     101,    47,    79,    54,    84,    50,    51,   112,    47,    69,
      52,   161,     5,    48,   141,   174,   159,    53,   108,    54,
      10,    47,   110,   111,    48,    55,    14,    84,   151,   172,
     114,    48,   153,     5,   173,   155,    15,    16,    47,    80,
      21,   132,    18,   182,    48,   120,    24,   164,   183,   167,
     127,   168,    26,   188,    81,    76,    77,    27,    28,    29,
      52,    48,   135,   131,    48,    49,    47,    30,    65,    54,
      71,    74,    72,    47,    75,    78,    73,   186,   187,    90,
      91,    92,    93,    94,    95,    47,    85,    86,    47,    48,
      47,    88,    97,    99,   177,   162,    48,    90,    91,    92,
      93,    94,    95,   116,   102,     5,   104,   184,    48,   105,
     115,    48,   125,    48,    31,    47,    47,   122,    32,    33,
      34,     5,   130,   150,    35,    36,    37,   116,   134,    38,
      31,   136,   133,   154,    32,    33,    34,     5,    48,    48,
      35,    36,    37,   137,   146,    38,    31,   144,   148,   149,
      32,    33,    34,     5,   165,   163,    35,    36,    37,   152,
     154,    38,    31,   166,   176,   170,    32,    33,    34,     5,
     178,   185,    35,    36,    37,   181,   189,    38,    31,   179,
     180,     8,    32,    33,    34,    23,   169,   138,    35,    36,
      37,   139,   118,    38,   175,   119,   113
};

static const yytype_uint8 yycheck[] =
{
       1,    32,    65,   140,     4,    29,    99,     3,    68,    10,
      72,   121,    36,    37,    15,    16,    15,    18,   124,    18,
       3,   158,    85,     3,    55,     0,    33,    38,    29,    97,
      54,   141,   125,    34,    30,    36,    37,   143,    43,   102,
      45,    65,    53,    39,    55,    25,    26,    78,    72,    45,
      30,   144,     3,    54,   122,   161,   142,    37,    69,    39,
       5,    85,    73,    74,    65,    45,     6,    78,   130,   159,
      81,    72,   132,     3,   160,   137,    33,    29,   102,    30,
      28,   105,     7,   173,    85,    96,    10,   149,   174,   152,
     101,   154,     8,   183,    45,    25,    26,    43,    31,     9,
      30,   102,   113,   104,   105,    44,   130,    30,    20,    39,
      32,    43,    33,   137,    11,    45,    36,   179,   180,    46,
      47,    48,    49,    50,    51,   149,    13,    35,   152,   130,
     154,    34,    38,    40,   165,   146,   137,    46,    47,    48,
      49,    50,    51,    52,    20,     3,    19,   178,   149,    29,
      52,   152,    41,   154,    12,   179,   180,    39,    16,    17,
      18,     3,    33,    21,    22,    23,    24,    52,    52,    27,
      12,    52,    44,    15,    16,    17,    18,     3,   179,   180,
      22,    23,    24,    33,    29,    27,    12,    42,    52,    33,
      16,    17,    18,     3,    16,    21,    22,    23,    24,    20,
      15,    27,    12,    21,    21,    14,    16,    17,    18,     3,
      16,    21,    22,    23,    24,    14,    21,    27,    12,    33,
      33,     4,    16,    17,    18,    20,   155,   118,    22,    23,
      24,   119,    86,    27,   162,    88,    79
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    54,    55,    56,     3,    88,     0,    55,    33,
       5,    57,    59,    88,     6,    33,    29,    60,     7,    57,
      88,    28,    57,    60,    10,    61,     8,    43,    31,     9,
      30,    12,    16,    17,    18,    22,    23,    24,    27,    58,
      62,    63,    64,    66,    67,    68,    69,    87,    88,    44,
      25,    26,    30,    37,    39,    45,    71,    73,    75,    77,
      80,    84,    87,    88,    71,    20,    88,    87,    87,    45,
      77,    32,    33,    36,    43,    11,    25,    26,    45,    77,
      30,    45,    87,    71,    77,    13,    35,    72,    34,    74,
      46,    47,    48,    49,    50,    51,    76,    38,    78,    40,
      81,    45,    20,    62,    19,    29,    70,    70,    77,    58,
      77,    77,    71,    76,    77,    52,    52,    62,    73,    75,
      77,    80,    39,    79,    84,    41,    82,    77,    85,    62,
      33,    88,    87,    44,    52,    77,    52,    33,    72,    74,
      78,    80,    81,    84,    42,    83,    29,    86,    52,    33,
      21,    58,    20,    70,    15,    58,    65,    79,    78,    82,
      81,    84,    77,    21,    58,    16,    21,    62,    62,    65,
      14,    79,    83,    82,    81,    86,    21,    71,    16,    33,
      33,    14,    83,    82,    71,    21,    58,    58,    83,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    57,    57,    58,    58,
      59,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    64,    64,    65,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    77,    78,    78,    79,    79,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    84,    84,    84,
      84,    84,    85,    85,    86,    86,    87,    87,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    12,     0,     3,     2,     3,
       5,     0,     3,     0,     5,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     2,     3,     8,     7,     0,     3,
       4,     6,     7,     7,     8,     9,     8,     3,     2,     2,
       3,     2,     1,     2,     3,     2,     1,     2,     3,     3,
       4,     1,     2,     1,     2,     3,     4,     1,     1,     1,
       1,     1,     1,     3,     0,     4,     0,     4,     4,     0,
       5,     0,     5,     0,     5,     1,     2,     1,     2,     3,
       4,     4,     0,     2,     0,     3,     1,     4,     1
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
#line 81 "mini_l.y" /* yacc.c:1646  */
    {printf("Program_Prime --> Program\n");}
#line 1411 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 84 "mini_l.y" /* yacc.c:1646  */
    {printf("Program --> epsilon\n");}
#line 1417 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 85 "mini_l.y" /* yacc.c:1646  */
    {printf("Program --> Function Program\n");}
#line 1423 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 88 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION identifiers SEMICOLON BEGIN_PARAMS Alpha END_PARAMS BEGIN_LOCALS Alpha END_LOCALS BEGIN_BODY Beta SEMICOLON END_BODY\n");}
#line 1429 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 93 "mini_l.y" /* yacc.c:1646  */
    {printf("Alpha --> epsilon\n");}
#line 1435 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 94 "mini_l.y" /* yacc.c:1646  */
    {printf("Alpha --> Declaration SEMICOLON Alpha\n");}
#line 1441 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "mini_l.y" /* yacc.c:1646  */
    {printf("Beta --> Statement SEMICOLON\n");}
#line 1447 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 98 "mini_l.y" /* yacc.c:1646  */
    {printf("Beta --> Statement SEMICOLON Beta\n");}
#line 1453 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 101 "mini_l.y" /* yacc.c:1646  */
    {printf("Declaration --> identifiers C COLON D INTEGER\n");}
#line 1459 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 104 "mini_l.y" /* yacc.c:1646  */
    {printf("C --> epsilon\n");}
#line 1465 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 105 "mini_l.y" /* yacc.c:1646  */
    {printf("C --> COMMA identifiers C\n");}
#line 1471 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 108 "mini_l.y" /* yacc.c:1646  */
    {printf("D --> epsilon\n");}
#line 1477 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 109 "mini_l.y" /* yacc.c:1646  */
    {printf("D --> ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF\n");}
#line 1483 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 112 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> E\n");}
#line 1489 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 113 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> F\n");}
#line 1495 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 114 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> H\n");}
#line 1501 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 115 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> I\n");}
#line 1507 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 116 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> J\n");}
#line 1513 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 117 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> K\n");}
#line 1519 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 118 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> WRITE Var Lima\n");}
#line 1525 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 119 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> WRITE Var\n");}
#line 1531 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 120 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> CONTINUE\n");}
#line 1537 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 121 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> RETURN Expression\n");}
#line 1543 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 124 "mini_l.y" /* yacc.c:1646  */
    {printf("E --> Var ASSIGN Expression\n");}
#line 1549 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 127 "mini_l.y" /* yacc.c:1646  */
    {printf("F --> IF Bool-Expr THEN Statement SEMICOLON Beta G ENDIF \n");}
#line 1555 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 128 "mini_l.y" /* yacc.c:1646  */
    {printf("F --> IF Bool-Expr THEN Statement SEMICOLON G ENDIF \n");}
#line 1561 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 131 "mini_l.y" /* yacc.c:1646  */
    {printf("G --> epsilon\n");}
#line 1567 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 132 "mini_l.y" /* yacc.c:1646  */
    {printf("G --> ELSE Statement SEMICOLON\n");}
#line 1573 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 133 "mini_l.y" /* yacc.c:1646  */
    {printf("G --> ELSE Statement SEMICOLON Beta\n");}
#line 1579 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 136 "mini_l.y" /* yacc.c:1646  */
    {printf("WHILE Bool-Expr BEGINLOOP Statement SEMICOLON ENDLOOP");}
#line 1585 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 137 "mini_l.y" /* yacc.c:1646  */
    {printf("H --> WHILE Bool-Expr BEGINLOOP Statement SEMICOLON Beta ENDLOOP\n");}
#line 1591 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 140 "mini_l.y" /* yacc.c:1646  */
    {printf("I --> DO BEGINLOOP Statement SEMICOLON ENDLOOP WHILE Bool-Expr\n");}
#line 1597 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 141 "mini_l.y" /* yacc.c:1646  */
    {printf("I --> DO BEGINLOOP Statement SEMICOLON Beta ENDLOOP WHILE Bool-Expr\n");}
#line 1603 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 144 "mini_l.y" /* yacc.c:1646  */
    {printf("J --> FOREACH identifiers IN identifiers BEGINLOOP Statement SEMICOLON Beta ENDLOOP\n");}
#line 1609 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 145 "mini_l.y" /* yacc.c:1646  */
    {printf("J --> FOREACH identifiers IN identifiers BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
#line 1615 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 148 "mini_l.y" /* yacc.c:1646  */
    {printf("K --> READ Var Lima\n");}
#line 1621 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 149 "mini_l.y" /* yacc.c:1646  */
    {printf("K --> READ Var Lima\n");}
#line 1627 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 152 "mini_l.y" /* yacc.c:1646  */
    {printf("Lima --> COMMA Var\n");}
#line 1633 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 153 "mini_l.y" /* yacc.c:1646  */
    {printf("Lima --> COMMA Var\n");}
#line 1639 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 156 "mini_l.y" /* yacc.c:1646  */
    {printf("Bool-Expr --> Relation-And-Expr Papa\n");}
#line 1645 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 157 "mini_l.y" /* yacc.c:1646  */
    {printf("Bool-Expr --> Relation-And-Expr\n");}
#line 1651 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 160 "mini_l.y" /* yacc.c:1646  */
    {printf("Papa --> OR Relation-And-Expr\n");}
#line 1657 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 161 "mini_l.y" /* yacc.c:1646  */
    {printf("Papa --> OR Relation-And-Expr Papa\n");}
#line 1663 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 164 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-And-Expr --> Relation-Expr Quebec\n");}
#line 1669 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 165 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-And-Expr --> Relation-Expr\n");}
#line 1675 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 168 "mini_l.y" /* yacc.c:1646  */
    {printf("Quebec --> AND Relation-Expr\n");}
#line 1681 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 169 "mini_l.y" /* yacc.c:1646  */
    {printf("Quebec --> AND Relation-Expr Quebec\n");}
#line 1687 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 172 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> Expression Comp Expression\n");}
#line 1693 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 173 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> NOT Expression Comp Expression\n");}
#line 1699 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 174 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> TRUE\n");}
#line 1705 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 175 "mini_l.y" /* yacc.c:1646  */
    {printf("NOT Relation-Expr --> TRUE\n");}
#line 1711 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 176 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> FALSE\n");}
#line 1717 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 177 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> FALSE\n");}
#line 1723 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 178 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> L_PAREN Bool-Expr R_PAREN\n");}
#line 1729 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 179 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> L_PAREN Bool-Expr R_PAREN\n");}
#line 1735 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 182 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> EQ\n");}
#line 1741 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 183 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> NEQ\n");}
#line 1747 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 184 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> LT\n");}
#line 1753 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 185 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> GT\n");}
#line 1759 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 186 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> LTE\n");}
#line 1765 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 187 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> GTE\n");}
#line 1771 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 193 "mini_l.y" /* yacc.c:1646  */
    {printf("S --> epsilon\n");}
#line 1777 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 194 "mini_l.y" /* yacc.c:1646  */
    {printf("S --> PLUS Multiplicative-Expr S T\n");}
#line 1783 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 197 "mini_l.y" /* yacc.c:1646  */
    {printf("T --> epsilon\n");}
#line 1789 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 198 "mini_l.y" /* yacc.c:1646  */
    {printf("T --> SUB Multiplicative-Expr S T\n");}
#line 1795 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 201 "mini_l.y" /* yacc.c:1646  */
    {printf("Multiplicative-Expr --> Term U V W\n");}
#line 1801 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 204 "mini_l.y" /* yacc.c:1646  */
    {printf("U --> epsilon\n");}
#line 1807 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 205 "mini_l.y" /* yacc.c:1646  */
    {printf("U --> MULT Term U V W\n");}
#line 1813 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 208 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> epsilon\n");}
#line 1819 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 209 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> DIV Term U V W\n");}
#line 1825 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 212 "mini_l.y" /* yacc.c:1646  */
    {printf("W --> epsilon\n");}
#line 1831 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 213 "mini_l.y" /* yacc.c:1646  */
    {printf("W --> MOD Term U V W\n");}
#line 1837 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 216 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> Var\n");}
#line 1843 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 217 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> SUB Var\n");}
#line 1849 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 218 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> NUMBER\n");}
#line 1855 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 219 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> SUB NUMBER\n");}
#line 1861 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 220 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> L_PAREN Expression R_PAREN\n");}
#line 1867 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 221 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> X L_PAREN Expression R_PAREN\n");}
#line 1873 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 222 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> identifiers L_PAREN Y R_PAREN\n");}
#line 1879 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 225 "mini_l.y" /* yacc.c:1646  */
    {printf("Y --> epsilon\n");}
#line 1885 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 226 "mini_l.y" /* yacc.c:1646  */
    {printf("Y --> Expression Z\n");}
#line 1891 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 229 "mini_l.y" /* yacc.c:1646  */
    {printf("Z --> epsilon\n");}
#line 1897 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 230 "mini_l.y" /* yacc.c:1646  */
    {printf("Z --> COMMA Expression Z\n");}
#line 1903 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 233 "mini_l.y" /* yacc.c:1646  */
    {printf("Var --> identifiers\n");}
#line 1909 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 234 "mini_l.y" /* yacc.c:1646  */
    {printf("Var --> identifiers L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");}
#line 1915 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 237 "mini_l.y" /* yacc.c:1646  */
    {printf("identifiers --> IDENT %s\n", yyval.sval);}
#line 1921 "mini_l.tab.c" /* yacc.c:1646  */
    break;


#line 1925 "mini_l.tab.c" /* yacc.c:1646  */
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
#line 239 "mini_l.y" /* yacc.c:1906  */


void yyerror(const char *msg)
{
  /* extern int yylineno;	// defined and maintained in lex.c */
  extern char *yytext;	/* defined and maintained in lex.c */
  extern int currentColumn;
  extern int currentLine;

  printf("Rick's Error: %s at symbol '%s' on line %d column %d \n", msg, yytext, currentLine, currentColumn);

  return;
}

int main( int argc, char **argv )
{
  /* yylex(); */
  yyparse();
}
