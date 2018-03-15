/* Mini Language                             */
/* Written by Rick Boshae and Gabriel Cortez */
/* mini_l.y                                  */

%{
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

%}

%code requires{
  #include <string>
}

/** Some Noets on Union:
 * Bison fundamentally works by asking flex to get the next token, which it
 * returns as an object of type "yystype".  But tokens could be of any
 * arbitrary data type!  So we deal with that in Bison by defining a C union
 * holding each of the types of tokens that Flex could return, and have Bison
 * use that union instead of "int" for the definition of "yystype":
**/
%union{
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


}

%error-verbose                /* error-verbose lists additional information regarding the error. */
%start	Program_Prime

/* Added for phase 3 */
%type <id>            identifiers
%type <int_val>       D

/* Used in Variable Declaration Statements*/
%type <list_of_ids> C

/* Used in Arithmetic Operator Statments*/
%type <attr>        Expression
%type <int_val>     Multiplicative-Expr
%type <int_val>     S
%type <int_val>     numbers
%type <variable>    Term                /*Returns ints which represents what Mult Expr should print*/
%type <int_val>     T
%type <variable>    U

/* Multiple Uses */
%type <variable>          Var


/* define the constant-string tokens: */

/* define the "terminal symbol" token types I'm going to use (in CAPS by convention), and associate each with a field of the union: */
%token <s_val> IDENT
%token FUNCTION
%token BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS

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

Program_Prime:  Program                                                  /*{std::cout << ("Program_Prime --> Program\n");} ORIGINAL CODE*/
                                                                           /* {Program_Prime.program_list = $1.program_list;} */
                ;

Program:        /* empty - epsilon */                                    /*{printf("Program --> epsilon\n");}*/
                                                                           {/**/}
                | Function Program                                       /*{printf("Program --> Function Program\n");} ORIGINAL CODE*/
                                                                           {
                                                                             /* Program.function_list = $1.function_list; */
                                                                             /* Program.program_list = $2.program_list; */
                                                                           }
                ;

Function:       FUNCTION identifiers SEMICOLON BEGIN_PARAMS Alpha END_PARAMS BEGIN_LOCALS Alpha END_LOCALS BEGIN_BODY Beta END_BODY       {/*Function.name = identifiers.name;*/}
                ;



Alpha:              /* empty - epsilon */                                {printf("Alpha --> epsilon\n");}
                |  Declaration SEMICOLON Alpha                           {printf("Alpha --> Declaration SEMICOLON Alpha\n");}
                ;



Beta:             Statement SEMICOLON                                    {printf("Beta --> Statement SEMICOLON\n");}
                | Statement SEMICOLON Beta                               {printf("Beta --> Statement SEMICOLON Beta\n");}
                ;

Declaration:  identifiers  C  COLON  D  INTEGER                         { // C produces comma separated identifiers
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
                                                                          if ($2 != NULL)
                                                                          {
                                                                            synthesized_list_of_ids = $2;
                                                                          } // consider if $2 is NULL

                                                                          if ($4 > 0)
                                                                          {
                                                                            synthesized_list_of_ids->isArray = true;
                                                                            synthesized_list_of_ids->arraySize = $4;
                                                                          }
                                                                          // Things that I will do later:
                                                                          // TODO: If declaration is already declared in table throw error.

                                                                          // Grab the synthesized value from identifiers
                                                                          ID *synthesized_id = new ID();
                                                                          synthesized_id = $1;
                                                                          cout << "Declaration: synthesized_id = $1; // value of synthesized_id: " << synthesized_id->name << endl;
                                                                          cout << "Declaration: synthesized_id = $1; // value of $1: " << $1->name << endl;

                                                                          /* synthesized_list_of_ids->printIntermediateCode(); // HITLER */
                                                                          cout << "NO SEGFAult yet" << endl;
                                                                          // Push backthe value of synthesized_id in the Declaration.list_of_ids
                                                                          synthesized_list_of_ids->list_of_ids.push_back(synthesized_id);



                                                                          // Print Declarations
                                                                          synthesized_list_of_ids->printIntermediateCode(); // HITLER
                                                                        }


C:              /* empty - epsilon */                                   {$$ = NULL;}
                | COMMA identifiers C                                   {
                                                                          // The C rule at the moment only applies to Declaration production. So it is safe to assume
                                                                          // the values used in C are used in Declaration

                                                                          // Assume C or $3 is an object of Type Declaration and we want to move the id's stored in $3's list to the $$ we are sending up.

                                                                          // Grab the synthesized value from identifiers
                                                                          ID *synthesized_id = new ID();
                                                                          synthesized_id = $2;


                                                                          if ($3 != NULL)
                                                                          {
                                                                            cout << " I am not null" << endl;
                                                                            /* declarations = $3; */
                                                                            cout << "C: synthesized_id = $2; // value of $2: " << $2->name << endl;
                                                                            cout << "C: synthesized_id = $2; // value of synthesized_id: " << synthesized_id->name << endl;
                                                                            $3->list_of_ids.push_back(synthesized_id);
                                                                            $$ = $3;

                                                                          }
                                                                          else if ($3 == NULL)
                                                                          {
                                                                            Declaration *declarations = new Declaration();
                                                                            cout << " I AM null" << endl;
                                                                            cout << "C: synthesized_id = $2; // value of $2: " << $2->name << endl;
                                                                            cout << "C: synthesized_id = $2; // value of synthesized_id: " << synthesized_id->name << endl;

                                                                            declarations->list_of_ids.push_back(synthesized_id);
                                                                            $$ = declarations;

                                                                          }
                                                                          else
                                                                          {
                                                                            cout << "Error in production C: What are you doing here." << endl;
                                                                            $$ = NULL;
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
                ;

D:              /* empty - epsilon */                                     { $$ = -1; }
                | ARRAY L_SQUARE_BRACKET numbers R_SQUARE_BRACKET OF      {
                                                                            $$ = $3;
                                                                          }
                ;

Statement:      E                                                        {printf("Statement --> E\n");}
                | F                                                      {printf("Statement --> F\n");}
                | H                                                      {printf("Statement --> H\n");}
                | I                                                      {printf("Statement --> I\n");}
                | J                                                      {printf("Statement --> J\n");}
                | K                                                      {printf("Statement --> K\n"); /*Associated with READ*/}
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

H:              WHILE Bool-Expr BEGINLOOP Statement SEMICOLON ENDLOOP                          {printf("WHILE Bool-Expr BEGINLOOP Statement SEMICOLON ENDLOOP");}
                | WHILE Bool-Expr BEGINLOOP Statement SEMICOLON Beta ENDLOOP                   {printf("H --> WHILE Bool-Expr BEGINLOOP Statement SEMICOLON Beta ENDLOOP\n");}
                ;

I:              DO BEGINLOOP Statement SEMICOLON ENDLOOP WHILE Bool-Expr                       {printf("I --> DO BEGINLOOP Statement SEMICOLON ENDLOOP WHILE Bool-Expr\n");}
                | DO BEGINLOOP Statement SEMICOLON Beta ENDLOOP WHILE Bool-Expr                {printf("I --> DO BEGINLOOP Statement SEMICOLON Beta ENDLOOP WHILE Bool-Expr\n");}
                ;

J:              FOREACH identifiers IN identifiers BEGINLOOP Statement SEMICOLON Beta ENDLOOP  {printf("J --> FOREACH identifiers IN identifiers BEGINLOOP Statement SEMICOLON Beta ENDLOOP\n");}
                | FOREACH identifiers IN identifiers BEGINLOOP Statement SEMICOLON ENDLOOP     {printf("J --> FOREACH identifiers IN identifiers BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
                ;

K:              READ Var Lima                                                {
                                                                                /* for(int i = 0; i < Entry_List.size(); i++) {
                                                                                  std::cout << ".< " << Entry_List[i].name << endl;
                                                                                }
                                                                                Entry_List.clear(); */
                                                                              }

                | READ Var                                                   {
                                                                                /* std::cout << ".< " << Entry_List[0].name << std::endl;
                                                                                Entry_List.clear();  // clear list must be called. */
                                                                              }
                ;

Lima:           COMMA Var                                                    {printf("Lima --> COMMA Var\n"); /*Nothing needs to happen here, the level above handles comma-separated lists.*/}
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

Expression:     Multiplicative-Expr S T                                       {
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
                ;

S:              /* empty - epsilon */                                         {/*$$ = 0;*/}
                | PLUS Multiplicative-Expr S T                                {
                                                                                /* if ($2 == 1) {
                                                                                  $$ = 1;
                                                                                } else if ($2 == 3) {
                                                                                  $$ = 3;
                                                                                } */

                                                                              }
                ;

T:              /* empty - epsilon */                                        {/*$$ = 0;*/}
                | SUB Multiplicative-Expr S T                                {/*$$ = 2;*/}
                ;

Multiplicative-Expr:  Term U V W                                            {/*$$ = $1;*/
                                                                              cout << "*t0 " << $1->id.name << ", " << $2->id.name << endl;
                                                                            }
                ;

U:              /* empty - epsilon */                                         {printf("U --> epsilon\n");}
                | MULT Term U V W                                             {/*printf("U --> MULT Term U V W\n");*/
                                                                                $$ = $2;
                                                                              }
                ;

V:              /* empty - epsilon */                                        {printf("V --> epsilon\n");}
                | DIV Term U V W                                             {printf("V --> DIV Term U V W\n");}
                ;

W:              /* empty - epsilon */                                        {printf("W --> epsilon\n");}
                | MOD Term U V W                                             {printf("W --> MOD Term U V W\n");}
                ;

Term:           Var                                                           {
                                                                                $$ = $1;
                                                                              }
                | SUB Var                                                     {
                                                                                /*$$ = 4;*/  /* 4 -- represents Unary minus variable*/
                                                                              }
                | numbers                                                     {
                                                                                //$$ = 1;  /* 1 -- represents numbers */
                                                                              }
                | SUB numbers                                                 {
                                                                                //$$ = 2;  /* 2 -- represents unary minus numbers */
                                                                              }
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

Var:            identifiers                                                   {
                                                                                ID *synthesized_id = new ID();
                                                                                synthesized_id = $1;
                                                                                $$->id = *(synthesized_id);
                                                                              }

                | identifiers L_SQUARE_BRACKET Expression R_SQUARE_BRACKET    { // All idents are immediately stored in a list called
                                                                              }
                ;

identifiers:    IDENT                                                        {
                                                                              //
                                                                              ID *temp_id = new ID();
                                                                              temp_id->name = $1;
                                                                              $$ = temp_id; // passes up pointer to ID object to parent node.
                                                                             }
                ;

numbers:        NUMBER                                                       {
                                                                              /* $$ = $1; */
                                                                              /* string counter = generateTempVariable(); */
                                                                              /* cout <<  "NUMBER: value of $$: " << $$ << endl;
                                                                              Table_Entry temp;
                                                                              temp.int_value = $1; */
                                                                              /* Entry_List.push_back(temp); */
/*
                                                                              Number_List.push_back((int)$1); */
                                                                             }
                ;

DebugLeft: {cout << "passed at DebugLeft" << endl;};
DebugRight: {cout << "passed at DebugRight" << endl;};
%%

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
