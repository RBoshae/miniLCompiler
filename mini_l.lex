/*******************************************************************************
 * CS152: Design of Compilers
 * Gabriel F. Cortez and Rick W. Boshae
 *
 * Project Phase 1: LEXICAL ANALYZER
 *
 * Usage: (1) $ flex mini_l.lex
 *        (2) $ gcc lex.yy.c -lfl
 *        (3) $ ./a.out
 *            stdin> TODO: // Determine input
 *            stdin> Ctrl-D
 *
*******************************************************************************/

%{/*Include library for atof() call */
#include "y.tab.h"
#include<math.h>
/* need this for the call to atoi() below */
#include <unistd.h>

int currentLine = 1;
int currentColumn = 1;
%}

DIGIT	[0-9]
CHAR	[a-zA-Z]
UNDERSCORE "_"

IDENT {CHAR}({CHAR}|{DIGIT})*({UNDERSCORE}*({CHAR}|{DIGIT})+)*

ERROR_TYPE_2 (({UNDERSCORE}|{DIGIT})+{IDENT}*)
ERROR_TYPE_2_2 ({IDENT}({UNDERSCORE})+)

/*ERROR_TYPE_2_3 ({DIGIT})+({UNDERSCORE})+ */


%%
"function"      { currentColumn += yyleng; return FUNCTION; }

"beginparams"   { currentColumn += yyleng; return BEGIN_PARAMS; }

"endparams"     { currentColumn += yyleng; return END_PARAMS; }

"beginlocals"   { currentColumn += yyleng; return BEGIN_LOCALS; }

"endlocals"     { currentColumn += yyleng; return END_LOCALS; }

"beginbody"     { currentColumn += yyleng; return BEGIN_BODY; }

"endbody"       { currentColumn += yyleng; return END_BODY; }

"integer"       { currentColumn += yyleng; return INTEGER; }

"array"         { currentColumn += yyleng; return ARRAY; }

"of"            { currentColumn += yyleng; return OF; }

"if"            { currentColumn += yyleng; return IF; }

"then"          { currentColumn += yyleng; return THEN; }

"endif"         { currentColumn += yyleng; return ENDIF; }

"else"          { currentColumn += yyleng; return ELSE; }

"while"         { currentColumn += yyleng; return WHILE; }

"do"            { currentColumn += yyleng; return DO; }

"foreach"       { currentColumn += yyleng; return FOREACH; }

"in"            { currentColumn += yyleng; return IN; }

"beginloop"     { currentColumn += yyleng; return BEGINLOOP; }

"endloop"       { currentColumn += yyleng; return ENDLOOP; }

"continue"      { currentColumn += yyleng; return CONTINUE; }

"read"          { currentColumn += yyleng; return READ; }

"write"         { currentColumn += yyleng; return WRITE; }

"and"           { currentColumn += yyleng; return AND; }

"or"            { currentColumn += yyleng; return OR; }

"not"           { currentColumn += yyleng; return NOT; }

"true"          { currentColumn += yyleng; return TRUE; }

"false"         { currentColumn += yyleng; return FALSE; }

"return"        { currentColumn += yyleng; return RETURN; }

"+"             { currentColumn += yyleng; return PLUS; }

"-"             { currentColumn += yyleng; return SUB; }

"*"             { currentColumn += yyleng; return MULT; }

"/"             { currentColumn += yyleng; return DIV; }

"%"             { currentColumn += yyleng; return MOD; }

"=="            { currentColumn += yyleng; return EQ; }

"<>"            { currentColumn += yyleng; return NEQ; }

"<"             { currentColumn += yyleng; return LT; }

">"             { currentColumn += yyleng; return GT; }

"<="            { currentColumn += yyleng; return LTE; }

">="            { currentColumn += yyleng; return GTE; }

";"             { currentColumn += yyleng; return SEMICOLON; }

":"             { currentColumn += yyleng; return COLON; }

","             { currentColumn += yyleng; return COMMA; }

"("             { currentColumn += yyleng; return L_PAREN; }

")"             { currentColumn += yyleng; return R_PAREN; }

"["             { currentColumn += yyleng; return L_SQUARE_BRACKET; }

"]"             { currentColumn += yyleng; return R_SQUARE_BRACKET; }

":="            { return ASSIGN; }

[ \t\n]+          /* eat up whitespace */


{DIGIT}+        { yylval.int_val = atoi(yytext); currentColumn += yyleng; return NUMBER; }

{IDENT}         { currentColumn += yyleng; return IDENT; }

{ERROR_TYPE_2}  {  }

{ERROR_TYPE_2_2} { }



"##"[^}\n]*     /* eat up one-line comments */

.               { printf( "Error at line %d, column %d: Unrecognized character: %s\n", currentColumn, currentLine, yytext); exit(0);}

%%
