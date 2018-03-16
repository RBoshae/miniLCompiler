/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 37 "mini_l.y" /* yacc.c:1909  */

  #include <string>

#line 48 "mini_l.tab.h" /* yacc.c:1909  */

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
#line 48 "mini_l.y" /* yacc.c:1909  */

  int		      int_val;
  char        *s_val;
  int         type;

  struct {

      char* name;              // This string represents an identifier
      int   int_value;          // This value refers to a user-declared int value
      int   size_value;         // This value refers to a user-declared array size
      char* type_value;

  } attr;

  ID                  *id;
  Declaration         *list_of_ids;
  Variable            *variable;
  Read                *list_of_read_variables;
  MultiplicativeExpr  *multiplicative_expr;
  Term                *term;


#line 136 "mini_l.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_L_TAB_H_INCLUDED  */
