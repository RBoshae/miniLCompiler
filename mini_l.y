/* Mini Language                             */
/* Written by Rick Boshae and Gabriel Cortez */
/* mini_l.y                                  */

%{

  #include <stdio.h>

  void yyerror(const char *msg);

%}

%union{
  int		    int_val;

}

%start	Program_Prime
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS
%token BEGIN_BODY END_BODY ARRAY OF IF THEN ENDIF ELSE WHILE DO
%token FOREACH IN BEGINLOOP ENDLOOP CONTINUE READ WRITE AND OR
%token NOT TRUE FALSE RETURN PLUS SUB MULT DIV MOD EQ NEQ LT GT
%token LTE GTE SEMICOLON COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET
%token IDENT R_SQUARE_BRACKET ASSIGN NUMBER
%token	<int_val>	INTEGER
%left	PLUS SUB
%left	MULT DIV

%%

Program_Prime:  Program                     {printf("Program_Prime --> Program\n");}
                ;

Program:        /* empty - epsilon */       {printf("Program --> epsilon\n");}
                | Function Program          {printf("Program --> Function Program\n");}
                ;

Function:       FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}

A:              /* empty - epsilon */                                    {printf("A --> epsilon\n");}
                | Declaration SEMICOLON A                                {printf("A --> Declaration SEMICOLON A\n");}
                ;

B:              /* empty - epsilon */                                    {printf("B --> epsilon\n");}
                | Statement SEMICOLON B                                  {printf("B --> Statement SEMICOLON B\n");}
                ;

Declaration:    IDENT C COLON D INTEGER                                  {printf("Declaration --> IDENT C COLON D INTEGER\n");}
                ;

C:              /* empty - epsilon */                                    {printf("C --> epsilon\n");}
                | COMMA IDENT C                                          {printf("C --> COMMA IDENT C\n");}
                ;

D:              /* empty - epsilon */                                    {printf("D --> epsilon\n");}
                | ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF      {printf("D --> ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF\n");}
                ;

Statement:      E                                                        {printf("Statement --> E\n");}
                | F                                                      {printf("Statement --> F\n");}
                | H                                                      {printf("Statement --> H\n");}
                | I                                                      {printf("Statement --> I\n");}
                | J                                                      {printf("Statement --> J\n");}
                | K                                                      {printf("Statement --> K\n");}
                | M                                                      {printf("Statement --> M\n");}
                | N                                                      {printf("Statement --> N\n");}
                | O                                                      {printf("Statement --> O\n");}
                ;

E:              Var ASSIGN Expression                                    {printf("E --> Var ASSIGN Expression\n");}

F:              IF Bool-Expr THEN Statement SEMICOLON B G ENDIF          {printf("F --> Var ASSIGN Expression\n");}
                ;

G:              /* empty - epsilon */                                    {printf("G --> epsilon\n");}
                | ELSE Statement SEMICOLON B                             {printf("G --> ELSE Statement SEMICOLON B\n");}
                ;

H:              WHILE Bool-Expr BEGINLOOP Statement SEMICOLON B ENDLOOP  {printf("H --> ELSE Statement SEMICOLON B\n");}
                ;

I:              DO BEGINLOOP Statement SEMICOLON B ENDLOOP               {printf("I --> DO BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
                ;

J:              FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP  {printf("J --> FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
                ;

K:              READ Var L                                               {printf("K --> READ Var L\n");}
                ;

L:              /* empty - epsilon */                                    {printf("L --> epsilon\n");}
                | COMMA Var                                              {printf("L --> COMMA Var\n");}
                ;

M:              WRITE Var L                                              {printf("M --> WRITE Var L\n");}
                ;

N:              CONTINUE                                                 {printf("N --> CONTINUE\n");}
                ;

O:              RETURN Expression                                        {printf("O --> RETURN Expression\n");}
                ;

Bool-Expr:      Relation-And-Expr P                                      {printf("Bool-Expr --> Relation-And-Expr P\n");}
                ;

P:              /* empty - epsilon */                                    {printf("P --> epsilon");}
                | OR Relation-And-Expr P                                 {printf("P --> OR Relation-And-Expr P ");}
                ;

Relation-And-Expr:  Relation-Expr Q                                      {printf("Relation-And-Expr --> Relation-Expr Q ");}

Q:              /* empty - epsilon */                                    {printf("Q --> epsilon");}
                | AND Relation-Expr Q                                    {printf("Q --> AND Relation-Expr Q");}
                ;

Relation-Expr:  R Expression Comp Expression                             {printf("Relation-Expr --> R Expression Comp Expression");}
                | R TRUE                                                 {printf("Relation-Expr --> R TRUE");}
                | R FALSE                                                {printf("Relation-Expr --> R FALSE");}
                | R L_PAREN Bool-Expr R_PAREN                            {printf("Relation-Expr --> R L_PAREN Bool-Expr R_PAREN");}
                ;

R:              /* empty - epsilon */                                    {printf("R --> epsilon");}
                | NOT                                                    {printf("R --> NOT");}
                ;

Comp:           EQ                                                       {printf("Comp --> EQ");}
                | NEQ                                                    {printf("Comp --> NEQ");}
                | LT                                                     {printf("Comp --> LT");}
                | GT                                                     {printf("Comp --> GT");}
                | LTE                                                    {printf("Comp --> LTE");}
                | GTE                                                    {printf("Comp --> GTE");}
                ;

Expression:     Multiplicative-Expr S T
                ;

S:              /* empty - epsilon */                                  {printf("S --> epsilon");}
                | PLUS Multiplicative-Expr S T                         {printf("S --> PLUS Multiplicative-Expr S T");}
                ;

T:              /* empty - epsilon */                                  {printf("T --> epsilon");}
                | SUB Multiplicative-Expr S T                          {printf("T --> SUB Multiplicative-Expr S T");}

Multiplicative-Expr:  Term U V W                                       {printf("Multiplicative-Expr --> Term U V W");}
                ;

U:              /* empty - epsilon */                                  {printf("U --> epsilon");}
                | MULT Term U V W                                      {printf("U --> MULT Term U V W");}
                ;

V:              /* empty - epsilon */                                  {printf("V --> epsilon");}
                | DIV Term U V W                                       {printf("V --> DIV Term U V W");}
                ;

W:              /* empty - epsilon */                                  {printf("W --> epsilon");}
                | MOD Term U V W                                       {printf("W --> MOD Term U V W");}

Term:           X Var                                                  {printf("Term --> X Var");}
                | X NUMBER                                             {printf("Term --> X NUMBER");}
                | X L_PAREN Expression R_PAREN                         {printf("Term --> X L_PAREN Expression R_PAREN");}
                | IDENT L_PAREN Y R_PAREN                              {printf("Term --> IDENT L_PAREN Y R_PAREN");}
                ;

X:              /* empty - epsilon */                                  {printf("X --> epsilon");}
                | SUB                                                  {printf("X --> SUB");}
                ;

Y:              /* empty - epsilon */                                  {printf("Y --> epsilon");}
                | Expression Z                                         {printf("Y --> Expression Z");}
                ;

Z:              /* empty - epsilon */                                  {printf("Z --> epsilon");}
                | COMMA Expression Z                                   {printf("Z --> COMMA Expression Z");}

Var:            IDENT                                                  {printf("Var --> IDENT");}
                | IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET   {printf("Var --> IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET");}
                ;

%%

void yyerror(const char *msg)
{
  // extern int yylineno;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  extern int currentColumn;
  extern int currentLine;

  printf("Error Occured.\n");

  return;
}

int main( int argc, char **argv )
{
  //yylex();
  yyparse();
}
