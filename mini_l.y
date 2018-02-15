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

// Gabe works from here down

    Relation-And-Expr:
        Relation-And-Expr --> Relation-Expr Q
        Q --> and Relation-Expr Q | epsilon

    Relation-Expr:
        Relation-Expr --> R Expression Comp Expression | R true | R false | R ( Bool-Expr )
        R --> not | epsilon

    Comp:
        Comp --> == | <> | < | > | <= | >=

    Expression:
        Expression --> Multiplicative-Expr S T
        S --> + Multiplicative-Expr S T | epsilon
        T --> - Multiplicative-Expr S T | epsilon

    Multiplicative-Expr:
        Multiplicative-Expr --> Term U V W
        U --> * Term U V W | epsilon
        V --> / Term U V W | epsilon
        W --> % Term U V W | epsilon

    Term:
        Term --> X Var | X number | X ( Expression ) | identifier ( Y )
        X --> - | epsilon
        Y -->  Expression Z | epsilon
        Z -- > ,Expression Z | epsilon


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
