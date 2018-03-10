/* heading.h */

#define YY_NO_UNPUT

using namespace std;

#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <vector>
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

class Attributes{
  public:
    std::string name;     // This string represents an identifier
    int int_val;          // This value refers to a user-declared int value
    int size_val;         // This value refers to a user-declared array size
    std::string type;

    Attributes(){};

    void setName(string to_this){
      name = to_this;
    }
    void setIntVal(int to_this){
      int_val = to_this;
    }
    void setSizeVal(int to_this){
      size_val = to_this;
    }

  private:

};

// void addToList(string) {
//
// }


std::vector<string> nameList;

//std::string generateDeclarationCode(nameList)
