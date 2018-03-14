/* heading.h */

#define YY_NO_UNPUT

using namespace std;

#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <vector>
#include <sstream>
typedef enum
{
    ST_PROGRAM_PRIME,
    ST_PROGRAM,
    ST_FUNCTION,
    ST_IDENTIFER,
    ST_STATEMENT,
    ST_DECLARATION,

    ST_INTEGER,
    ST_ARRAY,
    ST_NUMBER,
    ST_VARIABLE,
    ST_EXPRESSION,
    ST_BOOL_EXP,
    ST_RELATION_AND_EXPR,
    ST_RELATION_EXPR,
    ST_COMP,
    ST_MULTIPLICATIVE_EXPR,
    ST_TERM,

} SYMBOL_TYPE;

typedef enum
{
    SIT_NONE,
    SIT_INT,
    SIT_BOOL

} SYMBOL_INTERNAL_TYPE;


typedef struct _SymbolTableEntry
{
    string                    name;
    SYMBOL_TYPE               type;
    SYMBOL_INTERNAL_TYPE      internalType;
    // unsigned long             offsetOrSize, line;
    // long                      index1, index2;
    // char                     *parent;
    // unsigned long             parameter;

    // struct _SymbolTableEntry *next;

} SymbolTableEntry;

// void addToList(string) {
//
// }


std::vector<string> nameList;


struct Table_Entry {

    string name;              // This string represents an identifier
    int   int_value;          // This value refers to a user-declared int value
    int   size_value;         // This value refers to a user-declared array size
    string type_value;

};

int current_temp_variable_count = -1; // Used to keep track of the value we should assign in getTempVariableName
string generateTempVariable(){
  current_temp_variable_count++;

  ostringstream temp_number;
  temp_number << current_temp_variable_count;
  string temp_value = "t" + temp_number.str();

  return temp_value;
}

std::vector<Table_Entry> Entry_List;
std::vector<string> ID_List;
std::vector<string> Variable_List;
std::vector<int> Number_List;

//std::string generateDeclarationCode(nameList)
