#include <stdbool.h>
#include <stdio.h>

/* Not being used */
typedef enum
{
    ST_FUNC,
    ST_PROC,
    ST_MAIN,
    ST_PROTO,

    ST_ARRAY,
    ST_NONE,
    ST_INT,
    ST_REAL,
    ST_BOOL,
} SYMBOL_TYPE;

/* Not being used */
typedef enum
{
    SIT_NONE,
    SIT_INT,
    SIT_REAL,
    SIT_BOOL

} SYMBOL_INTERNAL_TYPE;

/* Not being used */
typedef enum
{
	C_CONSTANT,
	C_VARIABLE,
	C_NONE
} CONSTANT_TYPE;

#define PARENT_NONE NULL

/* Not being used */
typedef struct _SymbolTableEntry
{
    char                     *name;
    SYMBOL_TYPE               type;
    SYMBOL_INTERNAL_TYPE      internalType;
    unsigned long             offsetOrSize, line;
    long                      index1, index2;
    char                     *parent;
    unsigned long             parameter;

    struct _SymbolTableEntry *next;

} SymbolTableEntry;

/* Not being used */
typedef struct
{
    char                 	*name;
    int   				    type;
    float					floatValue;
    int						intValue;
} ExpressionInfo;
typedef ExpressionInfo* expression;

/* Not being used */
typedef struct _CodeLineEntry
{
    char *code;

    int gotoL;

    struct _CodeLineEntry *next;

}  CodeLineEntry;

/* Not being used */
typedef struct _BackpatchList
{
    CodeLineEntry *entry;

    struct _BackpatchList *next;

}  BackpatchList;

/* Not being used */
CodeLineEntry *genquad(char *code);
void backpatch(BackpatchList* list, int gotoL);
BackpatchList* mergelists(BackpatchList* a, BackpatchList* b);
BackpatchList* addToList(BackpatchList* list, CodeLineEntry* entry);
SymbolTableEntry* addSymbol(const char *name,
               SYMBOL_TYPE type,
               SYMBOL_INTERNAL_TYPE internalType,
               unsigned long offsetOrSize,
               unsigned long line,
               long index1,
               long index2,
               char *parent,
               unsigned long parameter);
bool printCode(FILE *outputFile);
bool printSymbolTable(FILE *outputFile);

/* Not being used */
SymbolTableEntry* addSymbolToParameterQueue(SymbolTableEntry* queue, char *name, SYMBOL_TYPE type);

void freeCodeLinesAndSymbolTable();

int checkAndGenerateParams(SymbolTableEntry* queue, char* name ,int parameterCount);

int getFunctionType(char *name);

int getSymbolType(char *name);

char* nextFloatVar();

char* nextIntVar();

char* nextBoolVar();

int nextquad();

void addFunction(char *name, unsigned int parameter_count, SYMBOL_INTERNAL_TYPE ret_type, int line);

SymbolTableEntry* lookup(char *name);

extern SymbolTableEntry *symbolTable;
