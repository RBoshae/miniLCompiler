/* Mini Language                             */
/* Written by Rick Boshae and Gabriel Cortez */
/* mini_l.y                                  */

%{

  #include <stdio.h>

  void yyerror(const char *msg);
  int yylex(void);

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

Program_Prime:  Program                     {printf("Program_Prime --> Program");}
                ;

Program:        /* empty - epsilon */       {printf("Program --> epsilon");}
                | Function Program          {printf("Program --> Function Program");}
                ;

Function:       FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY");}

A:              /* empty - epsilon */                                    {printf("A --> epsilon");}
                | Declaration SEMICOLON A                                {printf("A --> Declaration SEMICOLON A");}
                ;

B:              /* empty - epsilon */                                    {printf("B --> epsilon");}
                | Statement SEMICOLON B                                  {printf("B --> Statement SEMICOLON B");}
                ;

Declaration:    IDENT C COLON D INTEGER                                  {printf("Declaration --> IDENT C COLON D INTEGER");}
                ;

C:              /* empty - epsilon */                                    {printf("C --> epsilon");}
                | COMMA IDENT C                                          {printf("C --> COMMA IDENT C");}
                ;

D:              /* empty - epsilon */                                    {printf("D --> epsilon");}
                | ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF      {printf("D --> ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF");}
                ;

Statement:      E                                                        {printf("Statement --> E");}
                | F                                                      {printf("Statement --> F");}
                | H                                                      {printf("Statement --> H");}
                | I                                                      {printf("Statement --> I");}
                | J                                                      {printf("Statement --> J");}
                | K                                                      {printf("Statement --> K");}
                | M                                                      {printf("Statement --> M");}
                | N                                                      {printf("Statement --> N");}
                | O                                                      {printf("Statement --> O");}
                ;

E:              Var ASSIGN Expression                                    {printf("E --> Var ASSIGN Expression");}

F:              IF Bool-Expr THEN Statement SEMICOLON B G ENDIF          {printf("F --> Var ASSIGN Expression");}
                ;

G:              /* empty - epsilon */                                    {printf("G --> epsilon");}
                | ELSE Statement SEMICOLON B                             {printf("G --> ELSE Statement SEMICOLON B");}
                ;

H:              WHILE Bool-Expr BEGINLOOP Statement SEMICOLON B ENDLOOP  {printf("H --> ELSE Statement SEMICOLON B");}
                ;

I:              DO BEGINLOOP Statement SEMICOLON B ENDLOOP               {printf("I --> DO BEGINLOOP Statement SEMICOLON B ENDLOOP");}
                ;

J:              FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP  {printf("J --> FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP");}
                ;

K:              READ Var L                                               {printf("K --> READ Var L ");}
                ;

L:              /* empty - epsilon */                                    {printf("L --> epsilon");}
                | COMMA Var                                              {printf("L --> COMMA Var");}
                ;

M:              WRITE Var L                                              {printf("M --> WRITE Var L");}
                ;

N:              CONTINUE                                                 {printf("N --> CONTINUE");}
                ;

O:              RETURN Expression                                        {printf("O --> RETURN Expression");}
                ;

Bool-Expr:      Relation-And-Expr P                                      {printf("Bool-Expr --> Relation-And-Expr P");}
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

<<<<<<< HEAD
S:              /* empty - epsilon */                                  {printf("S --> epsilon");}
                | PLUS Multiplicative-Expr S T                         {printf("S --> PLUS Multiplicative-Expr S T");}
                ;

T:              /* empty - epsilon */                                  {printf("T --> epsilon");}
                | SUB Multiplicative-Expr S T                          {printf("T --> SUB Multiplicative-Expr S T");}
=======
S:              /* empty - epsilon */                                   {printf("S --> epsilon");}
                | PLUS Multiplicative-Expr S T
                ;

T:              /* empty - epsilon */                                   {printf("T --> epsilon");}
                | SUB Multiplicative-Expr S T
>>>>>>> 57f0ca2cec82fe80034d75bac8052d917ee2930c
                ;

Multiplicative-Expr:  Term U V W                                       {printf("Multiplicative-Expr --> Term U V W");}
                ;

<<<<<<< HEAD
U:              /* empty - epsilon */                                  {printf("U --> epsilon");}
                | MULT Term U V W                                      {printf("U --> MULT Term U V W");}
                ;

V:              /* empty - epsilon */                                  {printf("V --> epsilon");}
                | DIV Term U V W                                       {printf("V --> DIV Term U V W");}
                ;

W:              /* empty - epsilon */                                  {printf("W --> epsilon");}
                | MOD Term U V W                                       {printf("W --> MOD Term U V W");}
=======
U:              /* empty - epsilon */                                   {printf("U --> epsilon");}
                | MULT Term U V W
                ;

V:              /* empty - epsilon */                                   {printf("V --> epsilon");}
                | DIV Term U V W
                ;

W:              /* empty - epsilon */                                   {printf("W --> epsilon");}
                | MOD Term U V W
>>>>>>> 57f0ca2cec82fe80034d75bac8052d917ee2930c
                ;

Term:           X Var                                                  {printf("Term --> X Var");}
                | X NUMBER                                             {printf("Term --> X NUMBER");}
                | X L_PAREN Expression R_PAREN                         {printf("Term --> X L_PAREN Expression R_PAREN");}
                | IDENT L_PAREN Y R_PAREN                              {printf("Term --> IDENT L_PAREN Y R_PAREN");}
                ;

<<<<<<< HEAD
X:              /* empty - epsilon */                                  {printf("X --> epsilon");}
                | SUB                                                  {printf("X --> SUB");}
                ;

Y:              /* empty - epsilon */                                  {printf("Y --> epsilon");}
                | Expression Z                                         {printf("Y --> Expression Z");}
                ;

Z:              /* empty - epsilon */                                  {printf("Z --> epsilon");}
                | COMMA Expression Z                                   {printf("Z --> COMMA Expression Z");}
=======
X:              /* empty - epsilon */                                   {printf("X --> epsilon");}
                | SUB
                ;

Y:              /* empty - epsilon */                                   {printf("Y --> epsilon");}
                | Expression Z
                ;

Z:              /* empty - epsilon */                                   {printf("Z --> epsilon");}
                | COMMA Expression Z
>>>>>>> 57f0ca2cec82fe80034d75bac8052d917ee2930c
                ;

Var:            IDENT                                                  {printf("Var --> IDENT");}
                | IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET   {printf("Var --> IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET");}

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
