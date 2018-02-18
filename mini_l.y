/* Mini Language                             */
/* Written by Rick Boshae and Gabriel Cortez */
/* mini_l.y                                  */

%{

  #include <stdio.h>

  void yyerror(const char *msg);

  /* stuff from flex that bison needs to know about: */


%}

/* Bison fundamentally works by asking flex to get the next token, which it
// returns as an object of type "yystype".  But tokens could be of any
// arbitrary data type!  So we deal with that in Bison by defining a C union
// holding each of the types of tokens that Flex could return, and have Bison
// use that union instead of "int" for the definition of "yystype":*/
%union{
  int		    int_val;
  char      *sval;

}

%start Program_Prime
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY ARRAY OF IF THEN ENDIF ELSE WHILE DO FOREACH IN BEGINLOOP ENDLOOP CONTINUE READ WRITE AND OR NOT TRUE FALSE RETURN PLUS SUB SUB MULT DIV MOD COLON COMMA L_SQUARE_BRACKET IDENT R_SQUARE_BRACKET ASSIGN NUMBER	<int_val>	INTEGER
%left SEMICOLON
%left EQ NEQ LT GT LTE GTE
%left	PLUS SUB
%left	MULT DIV MOD
%left L_SQUARE_BRACKET R_SQUARE_BRACKET
%token L_PAREN
%token EQ NEQ LT GT LTE GTE
%token R_PAREN

%%

Program_Prime:  Program                      {printf("Program_Prime --> Program\n");}
                ;

Program:        /* empty - epsilon */        {printf("Program --> epsilon\n");}
                | Function Program           {printf("Program --> Function Program\n");}
                ;

Function:         FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY SEMICOLON END_BODY {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY SEMICOLON END_BODY\n");}
                | FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY B SEMICOLON END_BODY {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
                | FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY SEMICOLON END_BODY {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY SEMICOLON END_BODY\n");}
                | FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
                | FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY SEMICOLON END_BODY {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY SEMICOLON END_BODY\n");}
                | FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY B SEMICOLON END_BODY {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
                | FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY SEMICOLON END_BODY {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY SEMICOLON END_BODY\n");}
                | FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
                ;

A:                Declaration SEMICOLON                                  {printf("A --> Declaration SEMICOLON\n");}
                | Declaration SEMICOLON A                                {printf("A --> Declaration SEMICOLON A\n");}
                ;

B:                Statement SEMICOLON                                    {printf("B --> Statement SEMICOLON\n");}
                | Statement SEMICOLON B                                  {printf("B --> Statement SEMICOLON B\n");}
                ;

Declaration:      IDENT COLON INTEGER                                                     {printf("Declaration --> IDENT COLON INTEGER\n");}
                | IDENT C COLON INTEGER                                                   {printf("Declaration --> IDENT C COLON INTEGER\n");}
                | IDENT COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER   {printf("Declaration --> IDENT COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
                | IDENT C COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {printf("Declaration --> IDENT C COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
                ;

C:                COMMA IDENT                                            {printf("C --> COMMA IDENT\n");}
                | COMMA IDENT C                                          {printf("C --> COMMA IDENT C\n");}
                ;

Statement:      D                                                        {printf("Statement --> D\n");}
                | E                                                      {printf("Statement --> E\n");}
                | G                                                      {printf("Statement --> I\n");}
                | H                                                      {printf("Statement --> H\n");}
                | I                                                      {printf("Statement --> I\n");}
                | J                                                      {printf("Statement --> J\n");}
                | L                                                      {printf("Statement --> L\n");}
                | M                                                      {printf("Statement --> M\n");}
                | N                                                      {printf("Statement --> N\n");}
                ;

D:              Var ASSIGN Expression                                    {printf("D --> Var ASSIGN Expression\n");}
                ;

E:                IF Bool-Expr THEN Statement SEMICOLON ENDIF SEMICOLON       {printf("E --> IF Bool-Expr THEN Statement SEMICOLON ENDIF SEMICOLON");}
                | IF Bool-Expr THEN Statement SEMICOLON F ENDIF SEMICOLON     {printf("E --> IF Bool-Expr THEN Statement SEMICOLON F ENDIF SEMICOLON");}
                | IF Bool-Expr THEN Statement SEMICOLON B ENDIF SEMICOLON     {printf("E --> IF Bool-Expr THEN Statement SEMICOLON B ENDIF SEMICOLON");}
                | IF Bool-Expr THEN Statement SEMICOLON B F ENDIF SEMICOLON   {printf("E --> IF Bool-Expr THEN Statement SEMICOLON B F ENDIF SEMICOLON");}
                ;

F:                ELSE Statement SEMICOLON                                    {printf("F --> ELSE Statement SEMICOLON\n");}
                | ELSE Statement SEMICOLON B                                  {printf("F --> ELSE Statement SEMICOLON B\n");}
                ;

G:                WHILE Bool-Expr BEGINLOOP Statement SEMICOLON ENDLOOP       {printf("G --> WHILE Bool-Expr BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
                | WHILE Bool-Expr BEGINLOOP Statement SEMICOLON B ENDLOOP     {printf("G --> WHILE Bool-Expr BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
                ;

H:                DO BEGINLOOP Statement SEMICOLON ENDLOOP                    {printf("H --> DO BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
                | DO BEGINLOOP Statement SEMICOLON B ENDLOOP                  {printf("H --> DO BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
                ;

I:                FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON ENDLOOP    {printf("I --> FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
                | FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP  {printf("I --> FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
                ;

J:                READ Var                                                    {printf("J --> READ Var\n");}
                | READ Var K                                                  {printf("J --> READ Var K\n");}
                ;

K:                COMMA Var                                                   {printf("K --> COMMA Var\n");}
                | COMMA Var K                                                 {printf("K --> COMMA Var K\n");}
                ;

L:                WRITE Var                                                   {printf("L --> WRITE Var\n");}
                | WRITE Var K                                                 {printf("L --> WRITE Var K\n");}
                ;

M:              CONTINUE                                                      {printf("M --> CONTINUE\n");}
                ;

N:              RETURN Expression                                             {printf("N --> RETURN Expression\n");}
                ;

Bool-Expr:        Relation-And-Expr                                           {printf("Bool-Expr --> Relation-And-Expr\n");}
                | Relation-And-Expr P                                         {printf("Bool-Expr --> Relation-And-Expr P\n");}
                ;

O:                OR Relation-And-Expr                                        {printf("O --> OR Relation-And-Expr\n");}
                | OR Relation-And-Expr O                                      {printf("O --> OR Relation-And-Expr O\n");}
                ;

Relation-And-Expr:    Relation-Expr                                           {printf("Relation-And-Expr --> Relation-Expr\n");}
                    | Relation-Expr P                                         {printf("Relation-And-Expr --> Relation-Expr P\n");}
                    ;

P:                AND Relation-Expr                                      {printf("P --> AND Relation-Expr\n");}
                | AND Relation-Expr P                                    {printf("P --> AND Relation-Expr P\n");}
                ;

Relation-Expr:    Expression Comp Expression                           {printf("Relation-Expr --> Expression Comp Expression\n");}
                | NOT Expression Comp Expression                       {printf("Relation-Expr --> NOT Expression Comp Expression\n");}
                | TRUE                                                 {printf("Relation-Expr --> TRUE\n");}
                | NOT TRUE                                             {printf("Relation-Expr --> NOT TRUE\n");}
                | FALSE                                                {printf("Relation-Expr --> FALSE\n");}
                | NOT FALSE                                            {printf("Relation-Expr --> NOT FALSE\n");}
                | L_PAREN Bool-Expr R_PAREN                            {printf("Relation-Expr --> L_PAREN Bool-Expr R_PAREN\n");}
                | NOT L_PAREN Bool-Expr R_PAREN                        {printf("Relation-Expr --> NOT L_PAREN Bool-Expr R_PAREN\n");}
                ;

Comp:             EQ                                                     {printf("Comp --> EQ\n");}
                | NEQ                                                    {printf("Comp --> NEQ\n");}
                | LT                                                     {printf("Comp --> LT\n");}
                | GT                                                     {printf("Comp --> GT\n");}
                | LTE                                                    {printf("Comp --> LTE\n");}
                | GTE                                                    {printf("Comp --> GTE\n");}
                ;

Expression:       Multiplicative-Expr                                 {printf("Expression --> Multiplicative-Expr\n");}
                | Multiplicative-Expr PLUS Multiplicative-Expr        {printf("Expression --> PLUS Multiplicative-Expr\n");}
                | Multiplicative-Expr SUB Multiplicative-Expr         {printf("Expression --> SUB Multiplicative-Expr\n");}
                | Multiplicative-Expr PLUS Multiplicative-Expr Q      {printf("Expression --> PLUS Multiplicative-Expr Q\n");}
                | Multiplicative-Expr SUB Multiplicative-Expr Q       {printf("Expression --> SUB Multiplicative-Expr Q\n");}
                | Multiplicative-Expr PLUS Multiplicative-Expr R      {printf("Expression --> PLUS Multiplicative-Expr R\n");}
                | Multiplicative-Expr SUB Multiplicative-Expr R       {printf("Expression --> SUB Multiplicative-Expr R\n");}
                ;

Q:                PLUS Multiplicative-Expr                            {printf("Q --> PLUS Multiplicative-Expr\n");}
                | PLUS Multiplicative-Expr Q                          {printf("Q --> PLUS Multiplicative-Expr Q\n");}
                | PLUS Multiplicative-Expr R                          {printf("Q --> PLUS Multiplicative-Expr R\n");}
                ;

R:                SUB Multiplicative-Expr                             {printf("T --> SUB Multiplicative-Expr\n");}
                | SUB Multiplicative-Expr Q                           {printf("T --> SUB Multiplicative-Expr Q\n");}
                | SUB Multiplicative-Expr R                           {printf("T --> SUB Multiplicative-Expr R\n");}
                ;

Multiplicative-Expr:  Term                                          {printf("Multiplicative-Expr --> Term\n");}
                | Term S                                            {printf("Multiplicative-Expr --> Term S\n");}
                | Term T                                            {printf("Multiplicative-Expr --> Term T\n");}
                | Term U                                            {printf("Multiplicative-Expr --> Term U\n");}
                ;

S:                MULT Term                                         {printf("U --> MULT Term\n");}
                | MULT Term S                                       {printf("U --> MULT Term S\n");}
                | MULT Term T                                       {printf("U --> MULT Term T\n");}
                | MULT Term U                                       {printf("U --> MULT Term U\n");}
                ;

T:                DIV Term                                          {printf("V --> DIV Term\n");}
                | DIV Term S                                        {printf("V --> DIV Term S\n");}
                | DIV Term T                                        {printf("V --> DIV Term T\n");}
                | DIV Term U                                        {printf("V --> DIV Term U\n");}
                ;

U:                MOD Term                                          {printf("W --> MOD Term\n");}
                | MOD Term S                                        {printf("W --> MOD Term S\n");}
                | MOD Term T                                        {printf("W --> MOD Term T\n");}
                | MOD Term U                                        {printf("W --> MOD Term U\n");}
                ;

Term:             Var                                                  {printf("Term --> Var\n");}
                | SUB Var                                           {printf("Term --> SUB Var\n");}
                | NUMBER                                               {printf("Term --> NUMBER\n");}
                | SUB NUMBER                                        {printf("Term --> SUB NUMBER\n");}
                | L_PAREN Expression R_PAREN                           {printf("Term --> L_PAREN Expression R_PAREN\n");}
                | SUB L_PAREN Expression R_PAREN                    {printf("Term --> SUB L_PAREN Expression R_PAREN\n");}
                | IDENT L_PAREN R_PAREN                                {printf("Term --> IDENT L_PAREN R_PAREN\n");}
                | IDENT L_PAREN Expression R_PAREN                     {printf("Term --> IDENT L_PAREN Expression R_PAREN\n");}
                | IDENT L_PAREN Expression V R_PAREN                   {printf("Term --> IDENT L_PAREN Expression V R_PAREN\n");}
                ;

V:                COMMA Expression                                     {printf("V --> COMMA Expression\n");}
                | COMMA Expression V                                   {printf("V --> COMMA Expression V\n");}
                ;

Var:              IDENT                                                {printf("Var --> IDENT\n");}
                | IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET   {printf("Var --> IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");}
                ;
%%

void yyerror(const char *msg)
{
  // extern int yylineno;	/* defined and maintained in lex.c */
  extern char *yytext;	/* defined and maintained in lex.c */
  extern int currentColumn;
  extern int currentLine;

  printf("Rick's Error: %s at symbol '%s' on line %d column %d \n", msg, yytext, currentLine, currentColumn);

  return;
}

int main( int argc, char **argv )
{
  yyparse();
}
