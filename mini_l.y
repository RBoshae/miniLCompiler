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

input:		/* empty */
		| exp	{ cout << "Result: " << $1 << endl; }
		;

exp:		INTEGER_LITERAL	{ $$ = $1; }
    | exp PLUS exp	{ $$ = $1 + $3; }
    | exp MULT exp	{ $$ = $1 * $3; }
    ;

Program_Prime: Program
               ;

Program:  /* empty - epsilon */
         | Function Program
         ;

Function: function identifier SEMICOLON beginparams A endparams beginLocals A endLocals beginBody Statement B ; endBody
        A --> Declaration ; A | epsilon
        B --> Statement ; B | epsilon


    Declaration:
        Declaration --> identifier C : D integer
        C --> COMMA identifier C | epsilon
        D --> ARRAY [ number ] of | epsilon


    Statement:
        Statement --> E | F | H | I | J | K | M | N
        E --> Variable := Expression
        F --> if Bool-Exp then Statement ; B G endif
        G --> else Statement ; B | epsilon
        H --> while Bool-Exp beginLoop Statement ; B endLoop
        I --> do beginLoop Statement ; B endloop
        J --> forEach identifier in identifier beginLoop Statement ; B endloop
        K --> read Var L
        L --> ,Var | epsilon
        M --> write Var L
        N --> continue
        O --> return Expression


    Bool-Expr:
        Bool-Expr --> Relation-And-Expr P
        P --> or Relation-And-Exp P | epsilon

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
