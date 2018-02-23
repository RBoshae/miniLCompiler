/* Mini Language                             */
/* Written by Rick Boshae and Gabriel Cortez */
/* mini_l.y                                  */

%{

  #include <stdio.h>
  /*#include <string>*/

  int yylex(void);
  void yyerror(const char *msg);

  /* stuff from flex that bison needs to know about: */


%}

/** Some Noets on Union:
 * Bison fundamentally works by asking flex to get the next token, which it
 * returns as an object of type "yystype".  But tokens could be of any
 * arbitrary data type!  So we deal with that in Bison by defining a C union
 * holding each of the types of tokens that Flex could return, and have Bison
 * use that union instead of "int" for the definition of "yystype":
**/
%union{
  int		    int_val;
  char      *sval;

}

%error-verbose                /* error-verbose lists additional information regarding the error. */
%start	Program_Prime

/* define the constant-string tokens: */

/* define the "terminal symbol" token types I'm going to use (in CAPS by convention), and associate each with a field of the union: */
%token <*sval> IDENT
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS

%token ARRAY OF IF THEN ENDIF ELSE WHILE DO FOREACH IN BEGINLOOP ENDLOOP CONTINUE READ
       WRITE TRUE FALSE

%left COLON COMMA INTEGER AND OR
%right BEGIN_BODY RETURN NOT

%token END_BODY SEMICOLON ASSIGN

%left	PLUS SUB
%left	MULT DIV MOD
%left L_SQUARE_BRACKET R_SQUARE_BRACKET
%right L_PAREN
%left EQ NEQ LT GT LTE GTE
%left R_PAREN
%token <int_val> NUMBER

%%

Program_Prime:  Program                                                  {printf("Program_Prime --> Program\n");}
                ;

Program:        /* empty - epsilon */                                    {printf("Program --> epsilon\n");}
                | Function Program                                       {printf("Program --> Function Program\n");}
                ;

Function:       FUNCTION identifiers SEMICOLON BEGIN_PARAMS Alpha END_PARAMS BEGIN_LOCALS Alpha END_LOCALS BEGIN_BODY Beta END_BODY {printf("Function --> FUNCTION identifiers SEMICOLON BEGIN_PARAMS Alpha END_PARAMS BEGIN_LOCALS Alpha END_LOCALS BEGIN_BODY Beta SEMICOLON END_BODY\n");}
                ;



Alpha:              /* empty - epsilon */                                {printf("Alpha --> epsilon\n");}
                | Declaration SEMICOLON Alpha                            {printf("Alpha --> Declaration SEMICOLON Alpha\n");}
                ;

Beta:             Statement SEMICOLON                                    {printf("Beta --> Statement SEMICOLON\n");}
                | Statement SEMICOLON Beta                               {printf("Beta --> Statement SEMICOLON Beta\n");}
                ;

Declaration:    identifiers C COLON D INTEGER                            {printf("Declaration --> identifiers C COLON D INTEGER\n");}


C:              /* empty - epsilon */                                    {printf("C --> epsilon\n");}
                | COMMA identifiers C                                    {printf("C --> COMMA identifiers C\n");}
                ;

D:              /* empty - epsilon */                                    {printf("D --> epsilon\n");}
                | ARRAY L_SQUARE_BRACKET numbers R_SQUARE_BRACKET OF      {printf("D --> ARRAY L_SQUARE_BRACKET numbers R_SQUARE_BRACKET OF\n");}
                ;

Statement:      E                                                        {printf("Statement --> E\n");}
                | F                                                      {printf("Statement --> F\n");}
                | H                                                      {printf("Statement --> H\n");}
                | I                                                      {printf("Statement --> I\n");}
                | J                                                      {printf("Statement --> J\n");}
                | K                                                      {printf("Statement --> K\n");}
                | WRITE Var Lima                                         {printf("Statement --> WRITE Var Lima\n");}
                | WRITE Var                                              {printf("Statement --> WRITE Var\n");}
                | CONTINUE                                               {printf("Statement --> CONTINUE\n");}
                | RETURN Expression                                      {printf("Statement --> RETURN Expression\n");}
                ;

E:              Var ASSIGN Expression                                    {printf("E --> Var ASSIGN Expression\n");}
                ;

F:              IF Bool-Expr THEN Statement SEMICOLON Beta G ENDIF             {printf("F --> IF Bool-Expr THEN Statement SEMICOLON Beta G ENDIF \n");}
                | IF Bool-Expr THEN Statement SEMICOLON G ENDIF                {printf("F --> IF Bool-Expr THEN Statement SEMICOLON G ENDIF \n");}
                ;

G:              /* empty - epsilon */                                                    {printf("G --> epsilon\n");}
                | ELSE Statement SEMICOLON                                               {printf("G --> ELSE Statement SEMICOLON\n");}
                | ELSE Statement SEMICOLON Beta                                          {printf("G --> ELSE Statement SEMICOLON Beta\n");}
                ;

H:              WHILE Bool-Expr BEGINLOOP Statement SEMICOLON ENDLOOP                    {printf("WHILE Bool-Expr BEGINLOOP Statement SEMICOLON ENDLOOP");}
                | WHILE Bool-Expr BEGINLOOP Statement SEMICOLON Beta ENDLOOP             {printf("H --> WHILE Bool-Expr BEGINLOOP Statement SEMICOLON Beta ENDLOOP\n");}
                ;

I:              DO BEGINLOOP Statement SEMICOLON ENDLOOP WHILE Bool-Expr                       {printf("I --> DO BEGINLOOP Statement SEMICOLON ENDLOOP WHILE Bool-Expr\n");}
                | DO BEGINLOOP Statement SEMICOLON Beta ENDLOOP WHILE Bool-Expr                {printf("I --> DO BEGINLOOP Statement SEMICOLON Beta ENDLOOP WHILE Bool-Expr\n");}
                ;

J:              FOREACH identifiers IN identifiers BEGINLOOP Statement SEMICOLON Beta ENDLOOP  {printf("J --> FOREACH identifiers IN identifiers BEGINLOOP Statement SEMICOLON Beta ENDLOOP\n");}
                | FOREACH identifiers IN identifiers BEGINLOOP Statement SEMICOLON ENDLOOP     {printf("J --> FOREACH identifiers IN identifiers BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
                ;

K:              READ Var Lima                                                {printf("K --> READ Var Lima\n");}
                | READ Var                                                   {printf("K --> READ Var Lima\n");}
                ;

Lima:           COMMA Var                                                    {printf("Lima --> COMMA Var\n");}
                | COMMA Var Lima                                             {printf("Lima --> COMMA Var\n");}
                ;

Bool-Expr:      Relation-And-Expr Papa                                       {printf("Bool-Expr --> Relation-And-Expr Papa\n");}
                | Relation-And-Expr                                          {printf("Bool-Expr --> Relation-And-Expr\n");}
                ;

Papa:             OR Relation-And-Expr                                       {printf("Papa --> OR Relation-And-Expr\n");}
                | OR Relation-And-Expr Papa                                  {printf("Papa --> OR Relation-And-Expr Papa\n");}
                ;

Relation-And-Expr:  Relation-Expr Quebec                                     {printf("Relation-And-Expr --> Relation-Expr Quebec\n");}
                    | Relation-Expr                                          {printf("Relation-And-Expr --> Relation-Expr\n");}
                    ;

Quebec:         AND Relation-Expr                                            {printf("Quebec --> AND Relation-Expr\n");}
                | AND Relation-Expr Quebec                                   {printf("Quebec --> AND Relation-Expr Quebec\n");}
                ;

Relation-Expr:  Expression Comp Expression                                   {printf("Relation-Expr --> Expression Comp Expression\n");}
                | NOT Expression Comp Expression                             {printf("Relation-Expr --> NOT Expression Comp Expression\n");}
                | TRUE                                                       {printf("Relation-Expr --> TRUE\n");}
                | NOT TRUE                                                   {printf("NOT Relation-Expr --> TRUE\n");}
                | FALSE                                                      {printf("Relation-Expr --> FALSE\n");}
                | NOT FALSE                                                  {printf("Relation-Expr --> FALSE\n");}
                | L_PAREN Bool-Expr R_PAREN                                  {printf("Relation-Expr --> L_PAREN Bool-Expr R_PAREN\n");}
                | NOT L_PAREN Bool-Expr R_PAREN                              {printf("Relation-Expr --> L_PAREN Bool-Expr R_PAREN\n");}
                ;

Comp:           EQ                                                           {printf("Comp --> EQ\n");}
                | NEQ                                                        {printf("Comp --> NEQ\n");}
                | LT                                                         {printf("Comp --> LT\n");}
                | GT                                                         {printf("Comp --> GT\n");}
                | LTE                                                        {printf("Comp --> LTE\n");}
                | GTE                                                        {printf("Comp --> GTE\n");}
                ;

Expression:     Multiplicative-Expr S T
                ;

S:              /* empty - epsilon */                                        {printf("S --> epsilon\n");}
                | PLUS Multiplicative-Expr S T                               {printf("S --> PLUS Multiplicative-Expr S T\n");}
                ;

T:              /* empty - epsilon */                                        {printf("T --> epsilon\n");}
                | SUB Multiplicative-Expr S T                                {printf("T --> SUB Multiplicative-Expr S T\n");}
                ;

Multiplicative-Expr:  Term U V W                                             {printf("Multiplicative-Expr --> Term U V W\n");}
                ;

U:              /* empty - epsilon */                                        {printf("U --> epsilon\n");}
                | MULT Term U V W                                            {printf("U --> MULT Term U V W\n");}
                ;

V:              /* empty - epsilon */                                        {printf("V --> epsilon\n");}
                | DIV Term U V W                                             {printf("V --> DIV Term U V W\n");}
                ;

W:              /* empty - epsilon */                                        {printf("W --> epsilon\n");}
                | MOD Term U V W                                             {printf("W --> MOD Term U V W\n");}
                ;

Term:           Var                                                          {printf("Term --> Var\n");}
                | SUB Var                                                    {printf("Term --> SUB Var\n");}
                | numbers                                                     {printf("Term --> numbers\n");}
                | SUB numbers                                                 {printf("Term --> SUB numbers\n");}
                | L_PAREN Expression R_PAREN                                 {printf("Term --> L_PAREN Expression R_PAREN\n");}
                | SUB L_PAREN Expression R_PAREN                             {printf("Term --> X L_PAREN Expression R_PAREN\n");}
                | identifiers L_PAREN Y R_PAREN                              {printf("Term --> identifiers L_PAREN Y R_PAREN\n");}
                ;

Y:              /* empty - epsilon */                                        {printf("Y --> epsilon\n");}
                | Expression Z                                               {printf("Y --> Expression Z\n");}
                ;

Z:              /* empty - epsilon */                                        {printf("Z --> epsilon\n");}
                | COMMA Expression Z                                         {printf("Z --> COMMA Expression Z\n");}
                ;

Var:            identifiers                                                  {printf("Var --> identifiers\n");}
                | identifiers L_SQUARE_BRACKET Expression R_SQUARE_BRACKET   {printf("Var --> identifiers L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");}
                ;

identifiers:    IDENT                                                        {printf("identifiers --> IDENT %s\n", yyval.sval);}
                ;

numbers:        NUMBER                                                       {printf("numbers --> NUMBER %d\n", yyval.int_val);}
                ;
%%

void yyerror(const char *msg)
{
  /* extern int yylineno;	// defined and maintained in lex.c */
  extern char *yytext;	/* defined and maintained in lex.c */
  extern int currentColumn;
  extern int currentLine;

  printf("Compiler Error: %s at symbol '%s' on line %d column %d \n", msg, yytext, currentLine, currentColumn);

  return;
}

int main( int argc, char **argv )
{
  /* yylex(); */
  yyparse();
}
