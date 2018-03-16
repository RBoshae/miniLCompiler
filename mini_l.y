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

  ID                  *id;
  Declaration         *list_of_ids;
  Variable            *variable;
  Read                *list_of_read_variables;
  MultiplicativeExpr  *multiplicative_expr;
  Term                *term;

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
%type <term>    Term                /*Returns ints which represents what Mult Expr should print*/
%type <int_val>     T
%type <term>    U
%type <term>    V
%type <term>    W

/* Used in Input/Output Statements */
%type <list_of_read_variables>    Lima     /*Used in Read*/

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
                                                                          /* cout << "Declaration: synthesized_id = $1; // value of synthesized_id: " << synthesized_id->name << endl; // Debugging */
                                                                          /* cout << "Declaration: synthesized_id = $1; // value of $1: " << $1->name << endl; // Debugging */

                                                                          /* synthesized_list_of_ids->printIntermediateCode(); // HITLER */
                                                                          // cout << "NO SEGFAult yet" << endl; // Debugging
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
                                                                            /* cout << " I am not null" << endl; // Debugging */
                                                                            /* declarations = $3; */
                                                                            /* cout << "C: synthesized_id = $2; // value of $2: " << $2->name << endl; // Debugging */
                                                                            /* cout << "C: synthesized_id = $2; // value of synthesized_id: " << synthesized_id->name << endl; // Debugging */
                                                                            $3->list_of_ids.push_back(synthesized_id);
                                                                            $$ = $3;

                                                                          }
                                                                          else if ($3 == NULL)
                                                                          {
                                                                            Declaration *declarations = new Declaration();
                                                                            /* cout << " I AM null" << endl; // Debugging */
                                                                            /* cout << "C: synthesized_id = $2; // value of $2: " << $2->name << endl; // Debugging */
                                                                            /* cout << "C: synthesized_id = $2; // value of synthesized_id: " << synthesized_id->name << endl; // Debugging */

                                                                            declarations->list_of_ids.push_back(synthesized_id);
                                                                            $$ = declarations;

                                                                          }
                                                                          else
                                                                          {
                                                                            cout << "Error in production C: What are you doing here." << endl;
                                                                            $$ = NULL;
                                                                          }


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
                | WRITE Var                                             {
                                                                          // Think of write into register.
                                                                          /* cout << "Inside of Write Var\n"; // Debugging */
                                                                          Write w;
                                                                          w.mSingleVariable = *($2);

                                                                          w.printIntermediateCodeSingleVariable();
                                                                        }
                | WRITE Var Lima                                        {
                                                                          // Done. Need to revisit after finishing Expression.
                                                                          Variable synthesized_var = *($2);

                                                                          /* w.printIntermediateCodeFromListOfVariables(); */
                                                                          $3->list_of_variables.push_back(synthesized_var);

                                                                          Write w;

                                                                          /* cout << " | WRITE Var Lima  " << $3->list_of_variables.size() << endl; */

                                                                          // Small Boo Boo fix. Lima returns pointer to Read objects. Need to transfer over to write objects instead,
                                                                          for (int i = (($3->list_of_variables.size() - 1)); i >=0; i--) {
                                                                            Variable temp = (*($3)).list_of_variables.back();
                                                                            w.list_of_variables.push_back(temp);
                                                                            $3->list_of_variables.pop_back();
                                                                          }


                                                                          /* cout << "Debugging\n"; // Debugging */
                                                                          //$3->printMemberInfo();

                                                                          w.printIntermediateCodeFromListOfVariables();
                                                                        }
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

K:              READ Var                                      { // Done
                                                                /* cout << "K: | READ Var // value of $2.id.name: " << $2->id.name << endl; // Debugging */
                                                                Read r;         // Storing variable in read to handle print.
                                                                r.mSingleVariable = *($2);

                                                                /* cout << "K: | READ Var // No SEGFAult" << endl; // Debugging */
                                                                r.printIntermediateCodeSingleVariable();
                                                              }


                | READ Var Lima                                 { // Done
                                                                  // If 'read' is confusing think of it as read var into register.
                                                                  // This production rule will always produce a list of vars
                                                                  Variable synthesized_var = *($2);                                      // Storing variable in read to handle print.
                                                                  /* synthesized_var.mSingleVariable.setArrayInfo($2->isArray, $2->arraySize, $2->arrayIndex); */
                                                                  /* cout << "K: | READ Var Lima // value of $2.id.name: " << $2->id.name << endl; // Debugging */

                                                                  $3->list_of_variables.push_back(synthesized_var);


                                                                  /* cout << "Debugging\n"; // Debugging */
                                                                  //$3->printMemberInfo();

                                                                  ($3)->printIntermediateCodeFromListOfVariables();


                                                                }


                ;

Lima:           COMMA Var                                   {
                                                              // Lima is used specifically in read. It's safe to use a Read container.
                                                              // Lima needs to push it's var up to parent. Container used is of type Read..

                                                              /* cout << "Lima: COMMA Var // value of $2->id.name: " << ($2)->getIdName() << endl; // Debugging */
                                                              Variable synthesized_var;
                                                              synthesized_var = *($2);

                                                              Read *r = new Read();
                                                              r->list_of_variables.push_back(synthesized_var);

                                                              /* synthesized_read_var->list_of_variables.push_back(*($2)); */
                                                              /* synthesized_read_var.setIdName($2->id.name);
                                                              synthesized_read_var.setArrayInfo($2->isArray, $2->arraySize, $2->arrayIndex); // (isArray, arraySize, arrayIndex) */


                                                              /* synthesized_read_var->printMemberInfo(); */
                                                              /* $2->printMemberInfo(); // Debugging */

                                                              /* synthesized_read_var->push_back(*($2)); */
                                                              /* $$ = synthesized_read_var; */
                                                              /* $$->list_of_variables.push_back(synthesized_read_var); */
                                                              /* $$->list_of_variables.push_back(synthesized_var); */
                                                              $$ = r;
                                                              /* cout << "Lima: | COMMA Var // No SEGFAult\n"; // Debugging */
                                                            }
                | COMMA Var Lima                                            {
                                                                              // Recieve data from Lima
                                                                              /* cout << "Lima: | COMMA Var Lima // No SEGFAult\n"; // Debugging */
                                                                              Variable synthesized_read_var;           // Remember Read is our transport container
                                                                              synthesized_read_var.setIdName($2->id.name);               // Not sure if i can do this but i hope so
                                                                              synthesized_read_var.setArrayInfo($2->isArray, $2->arraySize, $2->arrayIndex); // (isArray, arraySize, arrayIndex)


                                                                              /* synthesized_read_var.printMemberInfo(); // Debugging */


                                                                              $3->list_of_variables.push_back(synthesized_read_var);

                                                                              $$ = $3;


                                                                              // Attach it to list of variable in variable Containe
                                                                              // Add Var to list of variables.
                                                                              // Send data up to parent.
                                                                            }
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
                                                                                cout << "We're in expression." << endl;

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
                                                                              if ($1 != NULL) { cout << "$1 is NOT NULL" << endl; }
                                                                              if ($1 == NULL) { cout << "$1 is NULL" << endl; }
                                                                              if ($2 == NULL) { cout << "$2 is NULL" << endl; }
                                                                              if ($3 == NULL) { cout << "$3 is NULL" << endl; }
                                                                              if ($4 == NULL) { cout << "$4 is NULL" << endl; }

                                                                              if ($2 != NULL)
                                                                              {
                                                                                cout << "* t-dummy " << $1->mIntVal << ", " << $2->mIntVal << endl;
                                                                              }
                                                                              else if ($3 != NULL)
                                                                              {
                                                                                cout << "/ t-dummy " << $1->mIntVal << ", " << $3->mIntVal << endl;
                                                                              }
                                                                              else if ($4 != NULL)
                                                                              {
                                                                                cout << "% t-dummy " << $1->mIntVal << ", " << $4->mIntVal << endl;
                                                                              }
                                                                            }


                ;

U:              /* empty - epsilon */                                       { /*printf("U --> epsilon\n");*/
                                                                              cout << "Test: in U-epsilon..." << endl;
                                                                              $$ = NULL;
                                                                            }
                | MULT Term U V W                                             {/*printf("U --> MULT Term U V W\n");*/
                                                                                // Case: Term NOT NULL, U V W all return NULL
                                                                                if ( $2 != NULL && $3 == NULL && $4 == NULL && $5 == NULL )
                                                                                {
                                                                                  $$ = $2;
                                                                                }
                                                                                else if ( $2 != NULL && $3 != NULL )
                                                                                {
                                                                                  cout << "* t-dummy-in-U, " << $2->mIntVal << ", " << $3->mIntVal << endl;

                                                                                  Term *t = new Term();
                                                                                  t->setIdName("t-dummy-in-U");
                                                                                  $$ = t;
                                                                                  //$$->id.name = "t-dummy-in-U";
                                                                                  //$$->mIntVal = ($2->mIntVal) * ($3->mIntVal);
                                                                                }
                                                                                // else if (V){}
                                                                                // else if (W){}
                                                                              }
                ;

V:              /* empty - epsilon */                                       { /*printf("V --> epsilon\n");*/
                                                                              cout << "Test: in V-epsilon..." << endl;
                                                                              $$ = NULL;
                                                                            }
                | DIV Term U V W                                            {/*printf("V --> DIV Term U V W\n");*/

                                                                              // Case: Term NOT NULL, U V W all return NULL
                                                                              if ($2 != NULL && $3 == NULL && $4 == NULL && $5 == NULL)
                                                                                $$ = $2;

                                                                              // else if (U){}
                                                                              // else if (V){}
                                                                              // else if (W){}
                                                                            }
                ;

W:              /* empty - epsilon */                                       { /*printf("W --> epsilon\n");*/
                                                                              cout << "Test: in W-epsilon..." << endl;
                                                                              $$ = NULL;
                                                                            }

                | MOD Term U V W                                            {/*printf("W --> MOD Term U V W\n");*/

                                                                              // Case: Term NOT NULL, U V W all return NULL
                                                                              if ($2 != NULL && $3 == NULL && $4 == NULL && $5 == NULL)
                                                                                $$ = $2;

                                                                              // else if (U){}
                                                                              // else if (V){}
                                                                              // else if (W){}
                                                                            }
                ;

Term:           Var                                                           {
                                                                                cout << "Test: in Term: Var..." << endl;
                                                                                cout << "$$->id.name is " << $$->getIdName() << endl;
                                                                                Term *synthesized_var = new Term();
                                                                                synthesized_var->setVariable(*($1));
                                                                                $$ = synthesized_var;
                                                                              }
                | SUB Var                                                     {
                                                                                /*$$ = 4;*/  /* 4 -- represents Unary minus variable*/
                                                                              }
                | numbers                                                     {
                                                                                cout << "Inside Term->numbers" << endl;
                                                                                Term *synthesized_term = new Term();

                                                                                //char *intStr = itoa( *($1) );
                                                                                //synthesized_variable->id.name = itoa( *($1) );

                                                                                synthesized_term->mIntVal = $1;
                                                                                cout << "Inside Term->numbers: mIntVal is " << synthesized_term->mIntVal << endl;

                                                                                $$ = synthesized_term;
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
                                                                                                /* ID *synthesized_id = new ID(); */
                                                                                                ID synthesized_id = *($1);
                                                                                                /* cout << "Declaration: synthesized_id = $1; // value of $1: " << $1->name << endl; // Debugging */
                                                                                                /* synthesized_id = $1; */
                                                                                                Variable *v = new Variable();
                                                                                                v->setId(synthesized_id);
                                                                                                v->setArrayInfo(false, -1, -1);

                                                                                                /* $$->isArray = false;
                                                                                                $$->id = synthesized_id; */
                                                                                                $$ = v;
                                                                                              }

                                | identifiers L_SQUARE_BRACKET Expression R_SQUARE_BRACKET    {
                                                                                                // All idents are immediately stored in a list called

                                                                                                // TODO Expression must be handled before we can use array access.
                                                                                                cout << "Don't stress array index yet. You still need to complete Expression\n";


                                                                                                /* ID *synthesized_id = new ID(); */
                                                                                                ID synthesized_id = *($1);
                                                                                                /* cout << "Declaration: synthesized_id = $1; // value of $1: " << $1->name << endl; // Debugging */
                                                                                                /* synthesized_id = $1; */

                                                                                                Variable *v = new Variable();
                                                                                                v->setId(synthesized_id);
                                                                                                v->setArrayInfo(true, 100, 100);   // Hard coded data -- needs to be fixed

                                                                                                /* v->printMemberInfo();  // Debugging */

                                                                                                /* $$->isArray = false;
                                                                                                $$->id = synthesized_id; */
                                                                                                $$ = v;

                                                                                                /* Variable synthesized_var;
                                                                                                synthesized_var.setId(synthesized_id);
                                                                                                synthesized_var.setArrayInfo(true, 100, 100);
                                                                                                $$->id = synthesized_id;
                                                                                                $$->isArray = true;
                                                                                                $$->arraySize = 1000; // hard coded for testing
                                                                                                $$->arrayIndex = 9999; // hard coded for testing */
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
                                                                              cout << "Inside numbers: $1 is " << $1 << endl;
                                                                              $$ = $1;
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
  /* God apollo; */
  /* yylex(); */
  yyparse();
}
