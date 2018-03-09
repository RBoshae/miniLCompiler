#include "header.h"
#include "mini_l.tab.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;


std::vector<string> nameList;       // Used in Declaration rule to store additional identifiers

int yyerror(const char *msg)
{
  /* extern int yylineno;	// defined and maintained in lex.c */
  extern char *yytext;	/* defined and maintained in lex.c */
  extern int currentColumn;
  extern int currentLine;

  printf("Compiler Error: %s at symbol '%s' on line %d column %d \n", msg, yytext, currentLine, currentColumn);

  return 0;
}

int main( int argc, char **argv )
{
  /* yylex(); */
  yyparse();
}
