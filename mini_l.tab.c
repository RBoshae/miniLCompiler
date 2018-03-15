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

  /* Putting CPP includes here */
  #include <vector>
  #include <iostream>
  #include <string>
  #include <cstdlib>
  #include <sstream>
  #include <iostream>
  using namespace std;

  #include "header.h"

  /* Putting C includes here */
  #include <stdio.h>
  #include <stdlib.h>

  extern int yylex();
  void yyerror(const char *msg);
  extern int currentColumn;
  extern int currentLine;
  extern FILE *yyin;

  /* stuff from flex that bison needs to know about: */

  // FunctionRelatedStatements Function; // Look at TODO 1
  /* VariableDeclarationStatements Var; // Look at TODO 2
  Identifiers identifiers;
  Expression expression; */


#line 97 "mini_l.tab.c" /* yacc.c:339  */

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
/* "%code requires" blocks.  */
#line 36 "mini_l.y" /* yacc.c:355  */

  #include <string>

#line 131 "mini_l.tab.c" /* yacc.c:355  */

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
    ARRAY = 264,
    OF = 265,
    IF = 266,
    THEN = 267,
    ENDIF = 268,
    ELSE = 269,
    WHILE = 270,
    DO = 271,
    FOREACH = 272,
    IN = 273,
    BEGINLOOP = 274,
    ENDLOOP = 275,
    CONTINUE = 276,
    READ = 277,
    WRITE = 278,
    TRUE = 279,
    FALSE = 280,
    COLON = 281,
    COMMA = 282,
    INTEGER = 283,
    AND = 284,
    OR = 285,
    BEGIN_BODY = 286,
    RETURN = 287,
    NOT = 288,
    END_BODY = 289,
    SEMICOLON = 290,
    ASSIGN = 291,
    PLUS = 292,
    SUB = 293,
    MULT = 294,
    DIV = 295,
    MOD = 296,
    L_SQUARE_BRACKET = 297,
    R_SQUARE_BRACKET = 298,
    L_PAREN = 299,
    EQ = 300,
    NEQ = 301,
    LT = 302,
    GT = 303,
    LTE = 304,
    GTE = 305,
    R_PAREN = 306,
    NUMBER = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 47 "mini_l.y" /* yacc.c:355  */

  int		      int_val;
  char        *s_val;
  int         type;

  struct {

      char* name;              // This string represents an identifier
      int   int_value;          // This value refers to a user-declared int value
      int   size_value;         // This value refers to a user-declared array size
      char* type_value;

  } attr;

  ID          *id;
  Declaration *list_of_ids;
  Variable    *variable;



#line 217 "mini_l.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_L_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "mini_l.tab.c" /* yacc.c:358  */

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
#define YYLAST   272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  191

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
static const yytype_uint16 yyrline[] =
{
       0,   116,   116,   121,   122,   129,   134,   135,   140,   141,
     144,   198,   199,   270,   271,   276,   277,   278,   279,   280,
     281,   282,   291,   292,   293,   296,   299,   300,   303,   304,
     305,   308,   309,   312,   313,   316,   317,   320,   329,   337,
     338,   341,   342,   345,   346,   349,   350,   353,   354,   357,
     358,   359,   360,   361,   362,   363,   364,   367,   368,   369,
     370,   371,   372,   375,   407,   408,   418,   419,   422,   427,
     428,   433,   434,   437,   438,   441,   444,   447,   450,   453,
     454,   455,   458,   459,   462,   463,   466,   474,   478,   486
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "FUNCTION", "BEGIN_PARAMS",
  "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "ARRAY", "OF", "IF", "THEN",
  "ENDIF", "ELSE", "WHILE", "DO", "FOREACH", "IN", "BEGINLOOP", "ENDLOOP",
  "CONTINUE", "READ", "WRITE", "TRUE", "FALSE", "COLON", "COMMA",
  "INTEGER", "AND", "OR", "BEGIN_BODY", "RETURN", "NOT", "END_BODY",
  "SEMICOLON", "ASSIGN", "PLUS", "SUB", "MULT", "DIV", "MOD",
  "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "L_PAREN", "EQ", "NEQ", "LT",
  "GT", "LTE", "GTE", "R_PAREN", "NUMBER", "$accept", "Program_Prime",
  "Program", "Function", "Alpha", "Beta", "Declaration", "C", "D",
  "Statement", "E", "F", "G", "H", "I", "J", "K", "Lima", "Bool-Expr",
  "Papa", "Relation-And-Expr", "Quebec", "Relation-Expr", "Comp",
  "Expression", "S", "T", "Multiplicative-Expr", "U", "V", "W", "Term",
  "Y", "Z", "Var", "identifiers", "numbers", YY_NULLPTR
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

#define YYPACT_NINF -134

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-134)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,     9,    22,  -134,    17,  -134,   -12,  -134,  -134,    24,
       9,    33,    16,    28,    51,     9,     9,    38,     9,  -134,
      28,    54,    61,  -134,    40,    52,    48,    43,  -134,   240,
    -134,    60,     8,     8,    87,     9,  -134,     9,     9,    39,
      73,    76,  -134,  -134,  -134,  -134,  -134,  -134,    78,    71,
     106,  -134,  -134,    37,    46,     8,   105,    88,   100,    93,
      96,   107,  -134,    32,  -134,   125,   240,   127,   120,   120,
      39,  -134,  -134,   240,    39,    39,  -134,  -134,  -134,     8,
      93,    39,  -134,  -134,    99,    77,   240,     8,  -134,     8,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,    39,    39,   113,
      39,   116,    39,   240,   118,     9,     9,  -134,  -134,   108,
    -134,  -134,   114,   109,    39,   115,  -134,  -134,   123,    88,
     100,  -134,    96,    39,  -134,   107,    39,   129,   137,   130,
     136,   152,   157,   120,  -134,  -134,  -134,  -134,   174,  -134,
    -134,   113,    96,   116,   107,    39,  -134,    39,  -134,  -134,
     196,   163,   162,   240,  -134,   240,   169,   173,  -134,   113,
     129,   116,   107,   137,  -134,   167,     8,   177,   158,   159,
     185,  -134,  -134,  -134,   129,   116,  -134,  -134,  -134,     8,
     218,   240,  -134,  -134,   129,  -134,  -134,   180,  -134,  -134,
    -134
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,    88,     0,     1,     4,     0,
       6,     0,     0,    11,     0,     6,     0,     0,     6,     7,
      11,    13,     0,    12,     0,     0,     0,     0,    10,     0,
      89,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,    15,    16,    17,    18,    19,    20,     0,    86,
       0,    51,    53,     0,     0,     0,     0,    42,    46,     0,
      64,    69,    75,    86,    77,     0,     0,     0,    37,    21,
       0,    24,     5,     8,     0,     0,    14,    52,    54,     0,
       0,     0,    76,    78,     0,     0,     0,     0,    41,     0,
      45,    57,    58,    59,    60,    61,    62,     0,     0,    66,
       0,    71,    82,     0,     0,     0,     0,    38,    22,     0,
       9,    25,     0,     0,     0,     0,    55,    79,     0,    43,
      47,    49,    64,     0,    63,    69,     0,    73,    84,     0,
       0,     0,     0,    39,    87,    56,    50,    80,    28,    44,
      48,    66,    64,    71,    69,     0,    68,     0,    83,    81,
       0,     0,     0,     0,    40,     0,    28,     0,    65,    66,
      73,    71,    69,    84,    31,     0,     0,     0,     0,     0,
       0,    27,    67,    70,    73,    71,    85,    32,    33,     0,
       0,    29,    26,    72,    73,    34,    36,     0,    30,    74,
      35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,   197,  -134,    -2,   -72,  -134,   182,  -134,   -59,
    -134,  -134,    47,  -134,  -134,  -134,  -134,   -65,   -31,    85,
     121,    89,   126,   134,    18,   -21,  -133,   -78,  -119,  -105,
     -74,   -95,  -134,    42,   -19,    -1,   -24
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    11,    40,    12,    17,    25,    41,
      42,    43,   157,    44,    45,    46,    47,   107,    56,    88,
      57,    90,    58,    97,    59,    99,   124,    60,   101,   127,
     146,    61,   129,   148,    62,    63,    64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       6,   110,    65,    31,   108,   125,   143,   104,   158,    13,
      48,     5,     5,    19,    13,    20,    22,    13,    68,    69,
     122,     1,     7,     9,    84,   161,   172,   118,    49,    10,
      83,   144,    51,    52,    67,    82,    49,    49,   160,    14,
       5,    53,     5,   175,   130,   142,    54,    48,   113,     5,
     162,    15,    55,    49,    48,    16,   174,    71,    18,   152,
      30,    77,    78,    24,    21,    49,   156,    48,   154,    26,
     184,    80,    49,    85,    75,    54,   102,    54,   165,    29,
      28,    79,    27,    70,    48,    49,   173,   133,   109,    30,
      81,    30,   111,   112,   168,    30,   169,    85,    30,   115,
     183,   141,    49,    50,   132,    49,    66,    72,   187,   188,
     189,    73,    48,    75,    74,   121,    76,    86,    87,    48,
     128,   159,    91,    92,    93,    94,    95,    96,   117,    89,
      49,    48,   136,    98,    48,   178,    48,    49,    91,    92,
      93,    94,    95,    96,   103,   105,   100,   106,   185,    49,
     116,   123,    49,   131,    49,     5,   126,   134,   138,   117,
     135,    48,    48,    32,   147,   163,   137,    33,    34,    35,
     145,   150,   151,    36,    37,    38,   153,     5,   166,    49,
      49,   149,   167,   155,    39,    32,   171,   177,   155,    33,
      34,    35,   179,   180,   181,    36,    37,    38,   182,     5,
     190,     8,    23,   170,   139,   176,    39,    32,   119,   140,
       0,    33,    34,    35,   114,   120,   164,    36,    37,    38,
       0,     5,     0,     0,     0,     0,     0,     0,    39,    32,
       0,     0,     0,    33,    34,    35,     0,     0,   186,    36,
      37,    38,     0,     5,     0,     0,     0,     0,     0,     0,
      39,    32,     0,     0,     0,    33,    34,    35,     0,     0,
       0,    36,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,    39
};

static const yytype_int16 yycheck[] =
{
       1,    73,    33,    27,    69,   100,   125,    66,   141,    10,
      29,     3,     3,    15,    15,    16,    18,    18,    37,    38,
      98,     4,     0,    35,    55,   144,   159,    86,    29,     5,
      54,   126,    24,    25,    35,    54,    37,    38,   143,     6,
       3,    33,     3,   162,   103,   123,    38,    66,    79,     3,
     145,    35,    44,    54,    73,    27,   161,    39,     7,   131,
      52,    24,    25,     9,    26,    66,   138,    86,   133,     8,
     175,    53,    73,    55,    42,    38,    44,    38,   150,    31,
      28,    44,    42,    44,   103,    86,   160,   106,    70,    52,
      44,    52,    74,    75,   153,    52,   155,    79,    52,    81,
     174,   122,   103,    43,   105,   106,    19,    34,   180,   181,
     184,    35,   131,    42,    36,    97,    10,    12,    30,   138,
     102,   142,    45,    46,    47,    48,    49,    50,    51,    29,
     131,   150,   114,    37,   153,   166,   155,   138,    45,    46,
      47,    48,    49,    50,    19,    18,    39,    27,   179,   150,
      51,    38,   153,    35,   155,     3,    40,    43,    35,    51,
      51,   180,   181,    11,    27,   147,    51,    15,    16,    17,
      41,    35,    20,    21,    22,    23,    19,     3,    15,   180,
     181,    51,    20,    14,    32,    11,    13,    20,    14,    15,
      16,    17,    15,    35,    35,    21,    22,    23,    13,     3,
      20,     4,    20,   156,   119,   163,    32,    11,    87,   120,
      -1,    15,    16,    17,    80,    89,    20,    21,    22,    23,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    32,    11,
      -1,    -1,    -1,    15,    16,    17,    -1,    -1,    20,    21,
      22,    23,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    11,    -1,    -1,    -1,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    54,    55,    56,     3,    88,     0,    55,    35,
       5,    57,    59,    88,     6,    35,    27,    60,     7,    57,
      88,    26,    57,    60,     9,    61,     8,    42,    28,    31,
      52,    89,    11,    15,    16,    17,    21,    22,    23,    32,
      58,    62,    63,    64,    66,    67,    68,    69,    87,    88,
      43,    24,    25,    33,    38,    44,    71,    73,    75,    77,
      80,    84,    87,    88,    89,    71,    19,    88,    87,    87,
      44,    77,    34,    35,    36,    42,    10,    24,    25,    44,
      77,    44,    87,    89,    71,    77,    12,    30,    72,    29,
      74,    45,    46,    47,    48,    49,    50,    76,    37,    78,
      39,    81,    44,    19,    62,    18,    27,    70,    70,    77,
      58,    77,    77,    71,    76,    77,    51,    51,    62,    73,
      75,    77,    80,    38,    79,    84,    40,    82,    77,    85,
      62,    35,    88,    87,    43,    51,    77,    51,    35,    72,
      74,    78,    80,    81,    84,    41,    83,    27,    86,    51,
      35,    20,    58,    19,    70,    14,    58,    65,    79,    78,
      82,    81,    84,    77,    20,    58,    15,    20,    62,    62,
      65,    13,    79,    83,    82,    81,    86,    20,    71,    15,
      35,    35,    13,    83,    82,    71,    20,    58,    58,    83,
      20
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
      84,    84,    85,    85,    86,    86,    87,    87,    88,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    12,     0,     3,     2,     3,
       5,     0,     3,     0,     5,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     2,     3,     8,     7,     0,     3,
       4,     6,     7,     7,     8,     9,     8,     2,     3,     2,
       3,     2,     1,     2,     3,     2,     1,     2,     3,     3,
       4,     1,     2,     1,     2,     3,     4,     1,     1,     1,
       1,     1,     1,     3,     0,     4,     0,     4,     4,     0,
       5,     0,     5,     0,     5,     1,     2,     1,     2,     3,
       4,     4,     0,     2,     0,     3,     1,     4,     1,     1
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
        case 3:
#line 121 "mini_l.y" /* yacc.c:1646  */
    {/**/}
#line 1461 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 123 "mini_l.y" /* yacc.c:1646  */
    {
                                                                             /* Program.function_list = $1.function_list; */
                                                                             /* Program.program_list = $2.program_list; */
                                                                           }
#line 1470 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 129 "mini_l.y" /* yacc.c:1646  */
    {/*Function.name = identifiers.name;*/}
#line 1476 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 134 "mini_l.y" /* yacc.c:1646  */
    {printf("Alpha --> epsilon\n");}
#line 1482 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 135 "mini_l.y" /* yacc.c:1646  */
    {printf("Alpha --> Declaration SEMICOLON Alpha\n");}
#line 1488 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 140 "mini_l.y" /* yacc.c:1646  */
    {printf("Beta --> Statement SEMICOLON\n");}
#line 1494 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 141 "mini_l.y" /* yacc.c:1646  */
    {printf("Beta --> Statement SEMICOLON Beta\n");}
#line 1500 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 144 "mini_l.y" /* yacc.c:1646  */
    { // C produces comma separated identifiers
                                                                          // D produces arrays

                                                                          // Examples of input to expect
                                                                          /** Example Input:
                                                                           *   n : integer;
                                                                           *   i, j, k: integer;
                                                                           *   t : array [20] of integer;
                                                                           */

                                                                           /** Example Output:
                                                                            *   . n         // from 'n : integer;'
                                                                            *   . i         // from 'i, j, k: integer;'
                                                                            *   . j
                                                                            *   . k
                                                                            *   .[] t, 20   // from 't : array [20] of integer;'
                                                                            */

                                                                          // Now we need a declaration container to store the value of synthesized_id
                                                                          /* Declaration* declarations = new Declaration(); */
                                                                          Declaration *synthesized_list_of_ids = new Declaration();

                                                                          // Check if C aka $2 is not Null
                                                                          if ((yyvsp[-3].list_of_ids) != NULL)
                                                                          {
                                                                            synthesized_list_of_ids = (yyvsp[-3].list_of_ids);
                                                                          } // consider if $2 is NULL

                                                                          if ((yyvsp[-1].int_val) > 0)
                                                                          {
                                                                            synthesized_list_of_ids->isArray = true;
                                                                            synthesized_list_of_ids->arraySize = (yyvsp[-1].int_val);
                                                                          }
                                                                          // Things that I will do later:
                                                                          // TODO: If declaration is already declared in table throw error.

                                                                          // Grab the synthesized value from identifiers
                                                                          ID *synthesized_id = new ID();
                                                                          synthesized_id = (yyvsp[-4].id);
                                                                          /* cout << "Declaration: synthesized_id = $1; // value of synthesized_id: " << synthesized_id->name << endl; // Debugging */
                                                                          /* cout << "Declaration: synthesized_id = $1; // value of $1: " << $1->name << endl; // Debugging */

                                                                          /* synthesized_list_of_ids->printIntermediateCode(); // HITLER */
                                                                          // cout << "NO SEGFAult yet" << endl; // Debugging
                                                                          // Push backthe value of synthesized_id in the Declaration.list_of_ids
                                                                          synthesized_list_of_ids->list_of_ids.push_back(synthesized_id);



                                                                          // Print Declarations
                                                                          synthesized_list_of_ids->printIntermediateCode(); // HITLER
                                                                        }
#line 1557 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 198 "mini_l.y" /* yacc.c:1646  */
    {(yyval.list_of_ids) = NULL;}
#line 1563 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 199 "mini_l.y" /* yacc.c:1646  */
    {
                                                                          // The C rule at the moment only applies to Declaration production. So it is safe to assume
                                                                          // the values used in C are used in Declaration

                                                                          // Assume C or $3 is an object of Type Declaration and we want to move the id's stored in $3's list to the $$ we are sending up.

                                                                          // Grab the synthesized value from identifiers
                                                                          ID *synthesized_id = new ID();
                                                                          synthesized_id = (yyvsp[-1].id);


                                                                          if ((yyvsp[0].list_of_ids) != NULL)
                                                                          {
                                                                            /* cout << " I am not null" << endl; // Debugging */
                                                                            /* declarations = $3; */
                                                                            /* cout << "C: synthesized_id = $2; // value of $2: " << $2->name << endl; // Debugging */
                                                                            /* cout << "C: synthesized_id = $2; // value of synthesized_id: " << synthesized_id->name << endl; // Debugging */
                                                                            (yyvsp[0].list_of_ids)->list_of_ids.push_back(synthesized_id);
                                                                            (yyval.list_of_ids) = (yyvsp[0].list_of_ids);

                                                                          }
                                                                          else if ((yyvsp[0].list_of_ids) == NULL)
                                                                          {
                                                                            Declaration *declarations = new Declaration();
                                                                            /* cout << " I AM null" << endl; // Debugging */
                                                                            /* cout << "C: synthesized_id = $2; // value of $2: " << $2->name << endl; // Debugging */
                                                                            /* cout << "C: synthesized_id = $2; // value of synthesized_id: " << synthesized_id->name << endl; // Debugging */

                                                                            declarations->list_of_ids.push_back(synthesized_id);
                                                                            (yyval.list_of_ids) = declarations;

                                                                          }
                                                                          else
                                                                          {
                                                                            cout << "Error in production C: What are you doing here." << endl;
                                                                            (yyval.list_of_ids) = NULL;
                                                                          }


                                                                          /* if (declarations->list_of_ids.size() != 0) {
                                                                            for (int i = 0; i < declarations->list_of_ids.size(); i++) {
                                                                              $$->list_of_ids.push_back(declarations->list_of_ids.at(i));
                                                                            }
                                                                          } */ // HITLER


                                                                          /* if (($3)->list_of_ids.size() != 0) {
                                                                            for (int i = 0; i < ($3)->list_of_ids.size(); i++) {
                                                                              $$->list_of_ids.push_back($3->list_of_ids.at(i));
                                                                            }
                                                                          } */ // HITLER


                                                                          /* // Similar to the process used in Declaration. Store the synthesized value of identifier.
                                                                          // See declation for more detail.
                                                                          Declaration* declations = new Declaration(); */




                                                                          // Now we need a declaration container to store the value of synthesized_id
                                                                          /* Declaration* declations = new Declaration(); */

                                                                          // Push backthe value of synthesized_id in the Declaration.list_of_ids
                                                                          /* declarations->list_of_ids.push_back(synthesized_id); */

                                                                          /* $$->list_of_ids.push_back(synthesized_id); */ // HITLER

                                                                        }
#line 1637 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 270 "mini_l.y" /* yacc.c:1646  */
    { (yyval.int_val) = -1; }
#line 1643 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 271 "mini_l.y" /* yacc.c:1646  */
    {
                                                                            (yyval.int_val) = (yyvsp[-2].int_val);
                                                                          }
#line 1651 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 276 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> E\n");}
#line 1657 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 277 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> F\n");}
#line 1663 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 278 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> H\n");}
#line 1669 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 279 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> I\n");}
#line 1675 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 280 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> J\n");}
#line 1681 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 281 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> K\n"); /*Associated with READ*/}
#line 1687 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 282 "mini_l.y" /* yacc.c:1646  */
    {
                                                                          // Think of write into register.
                                                                          cout << "Inside of Write Var\n";
                                                                          Write w;
                                                                          w.mSingleVariable.id.name = (yyvsp[0].variable)->id.name;

                                                                          w.printIntermediateCodeSingleVariable();

                                                                        }
#line 1701 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 291 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> WRITE Var Lima\n");}
#line 1707 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 292 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> CONTINUE\n");}
#line 1713 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 293 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> RETURN Expression\n");}
#line 1719 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 296 "mini_l.y" /* yacc.c:1646  */
    {printf("E --> Var ASSIGN Expression\n");}
#line 1725 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 299 "mini_l.y" /* yacc.c:1646  */
    {printf("F --> IF Bool-Expr THEN Statement SEMICOLON Beta G ENDIF \n");}
#line 1731 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 300 "mini_l.y" /* yacc.c:1646  */
    {printf("F --> IF Bool-Expr THEN Statement SEMICOLON G ENDIF \n");}
#line 1737 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 303 "mini_l.y" /* yacc.c:1646  */
    {printf("G --> epsilon\n");}
#line 1743 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 304 "mini_l.y" /* yacc.c:1646  */
    {printf("G --> ELSE Statement SEMICOLON\n");}
#line 1749 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 305 "mini_l.y" /* yacc.c:1646  */
    {printf("G --> ELSE Statement SEMICOLON Beta\n");}
#line 1755 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 308 "mini_l.y" /* yacc.c:1646  */
    {printf("WHILE Bool-Expr BEGINLOOP Statement SEMICOLON ENDLOOP");}
#line 1761 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 309 "mini_l.y" /* yacc.c:1646  */
    {printf("H --> WHILE Bool-Expr BEGINLOOP Statement SEMICOLON Beta ENDLOOP\n");}
#line 1767 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 312 "mini_l.y" /* yacc.c:1646  */
    {printf("I --> DO BEGINLOOP Statement SEMICOLON ENDLOOP WHILE Bool-Expr\n");}
#line 1773 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 313 "mini_l.y" /* yacc.c:1646  */
    {printf("I --> DO BEGINLOOP Statement SEMICOLON Beta ENDLOOP WHILE Bool-Expr\n");}
#line 1779 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 316 "mini_l.y" /* yacc.c:1646  */
    {printf("J --> FOREACH identifiers IN identifiers BEGINLOOP Statement SEMICOLON Beta ENDLOOP\n");}
#line 1785 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 317 "mini_l.y" /* yacc.c:1646  */
    {printf("J --> FOREACH identifiers IN identifiers BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
#line 1791 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 320 "mini_l.y" /* yacc.c:1646  */
    { // Done
                                                                /* cout << "K: | READ Var // value of $2.id.name: " << $2->id.name << endl; // Debugging */
                                                                Read r;                                      // Storing variable in read to handle print.
                                                                r.mSingleVariable.id.name = (yyvsp[0].variable)->id.name;

                                                                r.printIntermediateCodeSingleVariable();
                                                              }
#line 1803 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 329 "mini_l.y" /* yacc.c:1646  */
    {
                                                                  // If 'read' is confusing think of it as read var into register.

                                                                }
#line 1812 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 337 "mini_l.y" /* yacc.c:1646  */
    {printf("Lima --> COMMA Var\n"); /*Nothing needs to happen here, the level above handles comma-separated lists.*/}
#line 1818 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 338 "mini_l.y" /* yacc.c:1646  */
    {printf("Lima --> COMMA Var\n");}
#line 1824 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 341 "mini_l.y" /* yacc.c:1646  */
    {printf("Bool-Expr --> Relation-And-Expr Papa\n");}
#line 1830 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 342 "mini_l.y" /* yacc.c:1646  */
    {printf("Bool-Expr --> Relation-And-Expr\n");}
#line 1836 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 345 "mini_l.y" /* yacc.c:1646  */
    {printf("Papa --> OR Relation-And-Expr\n");}
#line 1842 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 346 "mini_l.y" /* yacc.c:1646  */
    {printf("Papa --> OR Relation-And-Expr Papa\n");}
#line 1848 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 349 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-And-Expr --> Relation-Expr Quebec\n");}
#line 1854 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 350 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-And-Expr --> Relation-Expr\n");}
#line 1860 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 353 "mini_l.y" /* yacc.c:1646  */
    {printf("Quebec --> AND Relation-Expr\n");}
#line 1866 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 354 "mini_l.y" /* yacc.c:1646  */
    {printf("Quebec --> AND Relation-Expr Quebec\n");}
#line 1872 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 357 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> Expression Comp Expression\n");}
#line 1878 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 358 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> NOT Expression Comp Expression\n");}
#line 1884 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 359 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> TRUE\n");}
#line 1890 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 360 "mini_l.y" /* yacc.c:1646  */
    {printf("NOT Relation-Expr --> TRUE\n");}
#line 1896 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 361 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> FALSE\n");}
#line 1902 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 362 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> FALSE\n");}
#line 1908 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 363 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> L_PAREN Bool-Expr R_PAREN\n");}
#line 1914 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 364 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> L_PAREN Bool-Expr R_PAREN\n");}
#line 1920 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 367 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> EQ\n");}
#line 1926 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 368 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> NEQ\n");}
#line 1932 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 369 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> LT\n");}
#line 1938 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 370 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> GT\n");}
#line 1944 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 371 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> LTE\n");}
#line 1950 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 372 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> GTE\n");}
#line 1956 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 375 "mini_l.y" /* yacc.c:1646  */
    {
                                                                                cout << "We're in expression." << endl;

                                                                                // At the end of the Expression rule we can determine whether the output code is an addition or subtraction.
                                                                                // Arithmetic Operator Statments  Addition
                                                                                /* cout << "Expression:     Multiplicative-Expr S T // Value of S: " << $2 << " T: " << $3 << endl; // Debugging
                                                                                if ($2 == 1)
                                                                                {
                                                                                  for (int i = 0; i < Number_List.size(); i++) {

                                                                                    cout << "+ " << generateTempVariable() << " " <<  ", " << Number_List.at(i) << endl;
                                                                                  }
                                                                                }
                                                                                else if ($2 == 3)
                                                                                {
                                                                                  for (int i = 0; i < Number_List.size(); i++) {

                                                                                    cout << "+ " << generateTempVariable() << " " <<  ", " << Entry_List.at(i).name << endl;
                                                                                  }
                                                                                }

                                                                                Entry_List.clear();
                                                                                Number_List.clear(); */
                                                                                /*
                                                                                TODO: Include conditional logic to handle other cases
                                                                                if (S) {

                                                                                } else if (T){} */
                                                                                /* Number_List.clear(); */
                                                                              }
#line 1991 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 407 "mini_l.y" /* yacc.c:1646  */
    {/*$$ = 0;*/}
#line 1997 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 408 "mini_l.y" /* yacc.c:1646  */
    {
                                                                                /* if ($2 == 1) {
                                                                                  $$ = 1;
                                                                                } else if ($2 == 3) {
                                                                                  $$ = 3;
                                                                                } */

                                                                              }
#line 2010 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 418 "mini_l.y" /* yacc.c:1646  */
    {/*$$ = 0;*/}
#line 2016 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 419 "mini_l.y" /* yacc.c:1646  */
    {/*$$ = 2;*/}
#line 2022 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 422 "mini_l.y" /* yacc.c:1646  */
    {/*$$ = $1;*/
                                                                              cout << "*t0 " << (yyvsp[-3].variable)->id.name << ", " << (yyvsp[-2].variable)->id.name << endl;
                                                                            }
#line 2030 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 427 "mini_l.y" /* yacc.c:1646  */
    {printf("U --> epsilon\n");}
#line 2036 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 428 "mini_l.y" /* yacc.c:1646  */
    {/*printf("U --> MULT Term U V W\n");*/
                                                                                (yyval.variable) = (yyvsp[-3].variable);
                                                                              }
#line 2044 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 433 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> epsilon\n");}
#line 2050 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 434 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> DIV Term U V W\n");}
#line 2056 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 437 "mini_l.y" /* yacc.c:1646  */
    {printf("W --> epsilon\n");}
#line 2062 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 438 "mini_l.y" /* yacc.c:1646  */
    {printf("W --> MOD Term U V W\n");}
#line 2068 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 441 "mini_l.y" /* yacc.c:1646  */
    {
                                                                                (yyval.variable) = (yyvsp[0].variable);
                                                                              }
#line 2076 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 444 "mini_l.y" /* yacc.c:1646  */
    {
                                                                                /*$$ = 4;*/  /* 4 -- represents Unary minus variable*/
                                                                              }
#line 2084 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 447 "mini_l.y" /* yacc.c:1646  */
    {
                                                                                //$$ = 1;  /* 1 -- represents numbers */
                                                                              }
#line 2092 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 450 "mini_l.y" /* yacc.c:1646  */
    {
                                                                                //$$ = 2;  /* 2 -- represents unary minus numbers */
                                                                              }
#line 2100 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 453 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> L_PAREN Expression R_PAREN\n");}
#line 2106 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 454 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> X L_PAREN Expression R_PAREN\n");}
#line 2112 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 455 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> identifiers L_PAREN Y R_PAREN\n");}
#line 2118 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 458 "mini_l.y" /* yacc.c:1646  */
    {printf("Y --> epsilon\n");}
#line 2124 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 459 "mini_l.y" /* yacc.c:1646  */
    {printf("Y --> Expression Z\n");}
#line 2130 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 462 "mini_l.y" /* yacc.c:1646  */
    {printf("Z --> epsilon\n");}
#line 2136 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 463 "mini_l.y" /* yacc.c:1646  */
    {printf("Z --> COMMA Expression Z\n");}
#line 2142 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 466 "mini_l.y" /* yacc.c:1646  */
    {
                                                                                /* ID *synthesized_id = new ID(); */
                                                                                ID synthesized_id = *((yyvsp[0].id));
                                                                                /* cout << "Declaration: synthesized_id = $1; // value of $1: " << $1->name << endl; // Debugging */
                                                                                /* synthesized_id = $1; */
                                                                                (yyval.variable)->id = synthesized_id;
                                                                              }
#line 2154 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 474 "mini_l.y" /* yacc.c:1646  */
    { // All idents are immediately stored in a list called
                                                                              }
#line 2161 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 478 "mini_l.y" /* yacc.c:1646  */
    {
                                                                              //
                                                                              ID *temp_id = new ID();
                                                                              temp_id->name = (yyvsp[0].s_val);
                                                                              (yyval.id) = temp_id; // passes up pointer to ID object to parent node.
                                                                             }
#line 2172 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 486 "mini_l.y" /* yacc.c:1646  */
    {
                                                                              /* $$ = $1; */
                                                                              /* string counter = generateTempVariable(); */
                                                                              /* cout <<  "NUMBER: value of $$: " << $$ << endl;
                                                                              Table_Entry temp;
                                                                              temp.int_value = $1; */
                                                                              /* Entry_List.push_back(temp); */
/*
                                                                              Number_List.push_back((int)$1); */
                                                                             }
#line 2187 "mini_l.tab.c" /* yacc.c:1646  */
    break;


#line 2191 "mini_l.tab.c" /* yacc.c:1646  */
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
#line 500 "mini_l.y" /* yacc.c:1906  */


void yyerror(const char *msg)
{
  /* extern int yylineno;	// defined and maintained in lex.c */
  extern char *yytext;	/* defined and maintained in lex.c */
  // extern int currentColumn;
  // extern int currentLine;

  printf("Rick's Compiler Error: %s at symbol '%s' on line %d column %d \n", msg, yytext, currentLine, currentColumn);
}

int main( int argc, char **argv )
{
  /* yylex(); */
  yyparse();
}
