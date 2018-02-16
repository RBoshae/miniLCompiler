/* Mini Language                             */
/* Written by Rick Boshae and Gabriel Cortez */
/* mini_l.y                                  */

%{
  #include "heading.h"
  int yyerror(char *s);
  int yylex(void);
%}

%union{
  int		    int_val;
  string*	  op_val;
}

%start	input

%token	<int_val>	INTEGER_LITERAL
%type	<int_val>	exp
%left	PLUS
%left	MULT

%%

Program_Prime:  Program
                ;

Program:        /* empty - epsilon */
                | Function Program
                ;

Function:       FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY

A:              /* empty - epsilon */
                | Declaration SEMICOLON A
                ;

B:              /* empty - epsilon */
                | Statement SEMICOLON B
                ;

Declaration:    IDENT C COLON D INTEGER
                ;

C:              /* empty - epsilon */
                | COMMA identifier C
                ;

D:              /* empty - epsilon */
                | ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF
                ;

Statement:      E
                | F
                | H
                | I
                | J
                | K
                | M
                | N
                ;

E:              Variable ASSIGN Expression

F:              IF Bool-Exp THEN Statement SEMICOLON B G ENDIF
                ;

G:              /* empty - epsilon */
                | ELSE Statement SEMICOLON B
                ;

H:              WHILE Bool-Exp BEGINLOOP Statement SEMICOLON B ENDLOOP
                ;

I:              DO BEGINLOOP Statement SEMICOLON B ENDLOOP
                ;

J:              FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP
                ;

K:              READ Var L
                ;

L:              /* empty - epsilon */
                | COMMA Var
                ;

M:              WRITE Var L
                ;

N:              CONTINUE
                ;

O:              RETURN Expression
                ;

Bool-Expr:      Relation-And-Expr P
                ;

P:              /* empty - epsilon */
                | OR Relation-And-Exp P
                ;

Relation-And-Expr:  Relation-Expr Q

Q:              /* empty - epsilon */
                | AND Relation-Expr Q
                ;

Relation-Expr:  R Expression Comp Expression
                | R TRUE
                | R FALSE
                | R L_PAREN Bool-Expr R_PAREN
                ;

R:              /* empty - epsilon */
                | NOT
                ;

Comp:           ==
                | <>
                | <
                | >
                | <=
                | >=
                ;

Expression:     Multiplicative-Expr S T
                ;

S:              /* empty - epsilon */
                | + Multiplicative-Expr S T
                ;

T:              /* empty - epsilon */
                | - Multiplicative-Expr S T
                ;

Multiplicative-Expr:  Term U V W
                ;

U:              /* empty - epsilon */
                | * Term U V W
                ;

V:              /* empty - epsilon */
                | / Term U V W
                ;

W:              /* empty - epsilon */
                | % Term U V W
                ;

Term:           X Var
                | X NUMBER
                | X L_PAREN Expression R_PAREN
                | IDENT L_PAREN Y R_PAREN
                ;

X:              /* empty - epsilon */
                | -
                ;

Y:              /* empty - epsilon */
                | Expression Z
                ;

Z:              /* empty - epsilon */
                | COMMA Expression Z
                ;

%%

int yyerror(string s)
{
  extern int yylineno;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c

  cerr << "ERROR: " << s << " at symbol \"" << yytext;
  cerr << "\" on line " << yylineno << endl;
  exit(1);
}

int yyerror(char *s)
{
  return yyerror(string(s));
}
