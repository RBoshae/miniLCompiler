/* Mini Language                             */
/* Written by Rick Boshae and Gabriel Cortez */
/* mini_l.y                                  */

%{

  #include <stdio.h>
  #include <string>

  int yylex(void);
  void yyerror(const char *msg);

  // stuff from flex that bison needs to know about:


%}

// Bison fundamentally works by asking flex to get the next token, which it
// returns as an object of type "yystype".  But tokens could be of any
// arbitrary data type!  So we deal with that in Bison by defining a C union
// holding each of the types of tokens that Flex could return, and have Bison
// use that union instead of "int" for the definition of "yystype":
%union{
  int		    int_val;
  char      *sval;

}

%start Program_Prime
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY ARRAY OF IF THEN ENDIF ELSE WHILE DO FOREACH IN BEGINLOOP ENDLOOP CONTINUE READ WRITE AND OR NOT TRUE FALSE RETURN PLUS SUB UMINUS MULT DIV MOD COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET IDENT R_SQUARE_BRACKET ASSIGN NUMBER	<int_val>	INTEGER
%left SEMICOLON
%left EQ NEQ LT GT LTE GTE
%left	PLUS SUB
%left	MULT DIV MOD
%nonassoc UMINUS
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
                | I                                                      {printf("Statement --> I\n");}
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
                | IF Bool-Expr THEN Statement SEMICOLON G ENDIF SEMICOLON     {printf("E --> IF Bool-Expr THEN Statement SEMICOLON G ENDIF SEMICOLON");}
                | IF Bool-Expr THEN Statement SEMICOLON B ENDIF SEMICOLON     {printf("E --> IF Bool-Expr THEN Statement SEMICOLON B ENDIF SEMICOLON");}
                | IF Bool-Expr THEN Statement SEMICOLON B G ENDIF SEMICOLON   {printf("E --> IF Bool-Expr THEN Statement SEMICOLON B G ENDIF SEMICOLON");}
                ;

G:                ELSE Statement SEMICOLON                                    {printf("G --> ELSE Statement SEMICOLON\n");}
                | ELSE Statement SEMICOLON B                                  {printf("G --> ELSE Statement SEMICOLON B\n");}
                ;

I:                WHILE Bool-Expr BEGINLOOP Statement SEMICOLON ENDLOOP       {printf("I --> WHILE Bool-Expr BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
                | WHILE Bool-Expr BEGINLOOP Statement SEMICOLON B ENDLOOP     {printf("I --> WHILE Bool-Expr BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
                ;

J:                DO BEGINLOOP Statement SEMICOLON ENDLOOP                    {printf("J --> DO BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
                | DO BEGINLOOP Statement SEMICOLON B ENDLOOP                  {printf("J --> DO BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
                ;

J:                FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON ENDLOOP    {printf("J --> FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
                | FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP  {printf("J --> FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
                ;

K:                READ Var                                                    {printf("K --> READ Var\n");}
                | READ Var L                                                  {printf("K --> READ Var L\n");}
                ;

L:                COMMA Var                                                   {printf("L --> COMMA Var\n");}
                | COMMA Var L                                                 {printf("L --> COMMA Var L\n");}
                ;

M:                WRITE Var                                                   {printf("M --> WRITE Var\n");}
                | WRITE Var L                                                 {printf("M --> WRITE Var L\n");}
                ;

N:              CONTINUE                                                      {printf("N --> CONTINUE\n");}
                ;

O:              RETURN Expression                                             {printf("O --> RETURN Expression\n");}
                ;

Bool-Expr:        Relation-And-Expr                                           {printf("Bool-Expr --> Relation-And-Expr\n");}
                | Relation-And-Expr P                                         {printf("Bool-Expr --> Relation-And-Expr P\n");}
                ;

P:                OR Relation-And-Expr                                        {printf("P --> OR Relation-And-Expr\n");}
                | OR Relation-And-Expr P                                      {printf("P --> OR Relation-And-Expr P\n");}
                ;

Relation-And-Expr:    Relation-Expr                                           {printf("Relation-And-Expr --> Relation-Expr\n");}
                    | Relation-Expr Q                                         {printf("Relation-And-Expr --> Relation-Expr Q\n");}
                    ;

Q:                AND Relation-Expr                                      {printf("Q --> AND Relation-Expr\n");}
                | AND Relation-Expr Q                                    {printf("Q --> AND Relation-Expr Q\n");}
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
                | Multiplicative-Expr PLUS Multiplicative-Expr S      {printf("Expression --> PLUS Multiplicative-Expr S\n");}
                | Multiplicative-Expr SUB Multiplicative-Expr S       {printf("Expression --> SUB Multiplicative-Expr S\n");}
                | Multiplicative-Expr PLUS Multiplicative-Expr T      {printf("Expression --> PLUS Multiplicative-Expr T\n");}
                | Multiplicative-Expr SUB Multiplicative-Expr T       {printf("Expression --> SUB Multiplicative-Expr T\n");}
                ;

S:                PLUS Multiplicative-Expr                            {printf("S --> PLUS Multiplicative-Expr\n");}
                | PLUS Multiplicative-Expr S                          {printf("S --> PLUS Multiplicative-Expr S\n");}
                | PLUS Multiplicative-Expr T                          {printf("S --> PLUS Multiplicative-Expr T\n");}
                ;

T:                SUB Multiplicative-Expr                             {printf("T --> SUB Multiplicative-Expr\n");}
                | SUB Multiplicative-Expr S                           {printf("T --> SUB Multiplicative-Expr S\n");}
                | SUB Multiplicative-Expr T                           {printf("T --> SUB Multiplicative-Expr T\n");}
                ;

Multiplicative-Expr:  Term                                          {printf("Multiplicative-Expr --> Term\n");}
                | Term U                                            {printf("Multiplicative-Expr --> Term U\n");}
                | Term V                                            {printf("Multiplicative-Expr --> Term V\n");}
                | Term W                                            {printf("Multiplicative-Expr --> Term W\n");}
                ;

U:                MULT Term                                         {printf("U --> MULT Term\n");}
                | MULT Term U                                       {printf("U --> MULT Term U\n");}
                | MULT Term V                                       {printf("U --> MULT Term V\n");}
                | MULT Term W                                       {printf("U --> MULT Term W\n");}
                ;

V:                DIV Term                                          {printf("V --> DIV Term\n");}
                | DIV Term U                                        {printf("V --> DIV Term U\n");}
                | DIV Term V                                        {printf("V --> DIV Term V\n");}
                | DIV Term W                                        {printf("V --> DIV Term W\n");}
                ;

W:                MOD Term                                          {printf("W --> MOD Term\n");}
                | MOD Term U                                        {printf("W --> MOD Term U\n");}
                | MOD Term V                                        {printf("W --> MOD Term V\n");}
                | MOD Term W                                        {printf("W --> MOD Term W\n");}
                ;

Term:             Var                                                  {printf("Term --> Var\n");}
                | UMINUS Var                                           {printf("Term --> UMINUS Var\n");}
                | NUMBER                                               {printf("Term --> NUMBER\n");}
                | UMINUS NUMBER                                        {printf("Term --> UMINUS NUMBER\n");}
                | L_PAREN Expression R_PAREN                           {printf("Term --> L_PAREN Expression R_PAREN\n");}
                | UMINUS L_PAREN Expression R_PAREN                    {printf("Term --> UMINUS L_PAREN Expression R_PAREN\n");}
                | IDENT L_PAREN R_PAREN                                {printf("Term --> IDENT L_PAREN R_PAREN\n");}
                | IDENT L_PAREN Expression R_PAREN                     {printf("Term --> IDENT L_PAREN Expression R_PAREN\n");}
                | IDENT L_PAREN Expression Y R_PAREN                   {printf("Term --> IDENT L_PAREN Expression Y R_PAREN\n");}
                ;

Y:                COMMA Expression                                     {printf("Y --> epsilon\n");}
                | COMMA Expression Y                                   {printf("Y --> Expression Z\n");}
                ;

Var:              IDENT                                                {printf("Var --> IDENT\n");}
                | IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET   {printf("Var --> IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");}
                ;
%%

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
