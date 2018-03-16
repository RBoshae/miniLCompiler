#ifndef _HEADER_H_
#define _HEADER_H_

#include "globalFunctions.h"

class God;
class Declaration;
class Variable;
class Term;
class MultiplicativeExpr;
class ID;

class God {
public:
  int myInt;

  God(){};

};


class ID {
public:
  string name;

  ID()
  {
    name;
  }
};

class Declaration {
public:
  std::vector<ID*> list_of_ids;
  string type;          // Stores Declaration type like: INTEGER, BOOL, etc.
  bool isArray; // Determine if the declations is an array
  int arraySize;

  Declaration(){
    isArray = false; // assume the value of array is false.
    arraySize = -1;
  }

  void printIntermediateCode() {

    if (isArray) {
      for (int i = 0; i < list_of_ids.size(); i++) {
        cout << ". [] " << list_of_ids.at(i)->name << ", " << arraySize << endl;
      }
    }
    else if(!isArray) {
      for (int i = 0; i < list_of_ids.size(); i++) {
        cout << ". " << list_of_ids.at(i)->name << endl;
      }
    }
    else {
      cout << "RG Error: Check Declaration class";
    }
  }
};


class Variable {
public:
  ID id;                            // Used in a single variable case.
  string type;                      // Stores Declaration type like: INTEGER, BOOL, etc.

  // Array Info:
  bool isArray;                     // Determine if the declations is an array

  int arraySize;
  int arrayIndex;                   // index of array
  std::vector<ID> list_of_ids;      //

  Variable(){
    isArray = false;                // assume the value of array is false.
    arraySize = -1;
    arrayIndex = -1;
  }

  Variable(string idName){
    setIdName(idName);

  }

  void setId(ID i) {
    id = i;
  }

  void setIdName(string n) {
    id.name = n;
  }

  string getIdName() {
    return id.name;
  }

  void setArrayInfo(bool isA, int aSize, int aIndex){
    isArray = isA;
    arraySize = aSize;
    arrayIndex = aIndex;
  }

  // Used for debugging
  void printMemberInfo() {
    cout << "============================" << endl;
    cout << "Variable Object information" << endl;
    cout << "--------------------------" << endl;
    cout << "Object information" << endl;
    cout << "id.name:    " << id.name << endl;
    cout << "type:       " << type << endl;
    cout << "Array Info  " << endl;
    cout << "isArray:    " << isArray << endl;
    cout << "type:       " << type << endl;
    cout << "arraySize:  " << arraySize << endl;
    cout << "arrayIndex: " << arrayIndex << endl;
    cout << "list_of_ids Info " << endl;
    cout << "list_of_ids.size(): " << list_of_ids.size() << endl;
    cout << "End of Report\n";
    cout << "============================" << endl;
  }
}; // End of Variable Class


class Term{

  public:
    int mIntVal;
    Variable mVariable;
    bool isNumber;                    // Determines if Term is a variable or a number

    string mLeftOperatorType; // Exs: * n, / n, % n

    enum LeftOperatorType { NONE, MULT, DIV, MOD };
    // NONE = 0, MULT = 1, DIV = 2, MOD = 3

    Term(){
      isNumber = false;
    }
    Term( int operandType, int val, bool isNum) // if val is a number;
    {
      mIntVal = val;
      isNumber = isNum;

      switch (operandType)
      {
        case NONE: mLeftOperatorType  = "NONE"; break;
        case MULT: mLeftOperatorType  = "*"; break;
        case DIV: mLeftOperatorType   = "/"; break;
        case MOD: mLeftOperatorType   = "%"; break;
      };
    };

    Term(string operandType, Variable v){
      mLeftOperatorType = operandType;
      mVariable = v;
      isNumber = false;
    }

    void setIdName(string n){
      mVariable.id.name = n;
    }
    string getIdName() {
      return mVariable.id.name;
    }

    void setVariable(Variable v) {
      mVariable = v;
    }

    void convertIntToIdName( int n )
    {
      stringstream ss;
      ss << n;

      this->setIdName( ss.str() );
    }

    string getTermTypeString() {
      if (isNumber)
      {
        stringstream ss;
        ss << mIntVal;

        return ss.str();
      }
      else if (mVariable.isArray)
      {
        cout << "HEEEEEEEEEEEEEEEEEEERE!" << endl;
        string temp_var_array_name = generateTempVariable();
        // TODO this should be mapped in the symbol table so array matches with the temp name.

        return temp_var_array_name;
      }
      else
      {
        return mVariable.getIdName();
      }
    }

    void printMemberInfo() {
      cout << "============================" << endl;
      cout << "Term Object information" << endl;
      cout << "--------------------------" << endl;
      cout << "Object information " << endl;
      cout << "mIntVal:           " << mIntVal << endl;
      cout << "bool:              " << isNumber << endl;
      cout << "mLeftOperatorType  " << mLeftOperatorType << endl;
      cout << "mVariable information" << endl;
      mVariable.printMemberInfo();
      cout << "End of Report\n";
      cout << "============================" << endl;
    }
}; // End of Term Class


class MultiplicativeExpr {
public:
  ID id;                            // Used in a single variable case.
  string type;                      // Stores Declaration type like: INTEGER, BOOL, etc.

  Term mLeftSideTerm;
  Term mRightSideTerm;

  std::vector<Term> list_of_terms;  // Container for passing chains of multiplicative expressions.

  MultiplicativeExpr(){}

  void setIdName(string n) {
    id.name = n;
  }

  string getIdName() {
    return id.name;
  }

  void printIntermediateCode() {

    for (int i = (list_of_terms.size()-1); i > 0; i--) {
      // get generated temp value
      // string temp_var_id_name = generateTempVariable(); // TODO: Fix globale temp generator
      string temp_var_id_name = generateTempVariable();

      // pop two off the list.
      Term leftOperand, rightOperand;
      rightOperand = list_of_terms.back();
      list_of_terms.pop_back();


      leftOperand = list_of_terms.back();
      list_of_terms.pop_back();

      cout << leftOperand.mLeftOperatorType <<  temp_var_id_name << ", " << leftOperand.getTermTypeString() << ", " << rightOperand.getTermTypeString() << endl;

      // need to make temp a variable
      Variable v(temp_var_id_name);
      //v.printMemberInfo();

      Term merged_temp_term(leftOperand.mLeftOperatorType, v);  // (operandType, variable)
      //merged_temp_term.printMemberInfo();
      list_of_terms.push_back(merged_temp_term);

    } // end of for-loop
    // list_of_terms.at(0).printMemberInfo();

    cout << list_of_terms.at(0).mLeftOperatorType << " " << generateTempVariable() << ", " << mLeftSideTerm.getTermTypeString() << ", " << list_of_terms[0].getTermTypeString() << endl;


  }
}; // End of MultiplicativeExpr Class


class Read {
public:
  Variable mSingleVariable;                 // The 'm' mSingleVariable is a convetion for member
  std::vector<Variable> list_of_variables;

  Read(){
    mSingleVariable.isArray = false;
  };

  Read(Variable v){
    mSingleVariable = v;
    mSingleVariable.isArray = false;
  };

  void printIntermediateCodeFromListOfVariables() {
    // cout << " In PILOV" << endl;
    for (int i = 0; i < list_of_variables.size(); i++) {
      if (list_of_variables.at(i).isArray)
      {
        cout << ". [] < " << list_of_variables.at(i).id.name << ", " << list_of_variables.at(i).arrayIndex << endl;
      }
      else if(!(list_of_variables.at(i).isArray))
      {
        cout << ". < " << list_of_variables.at(i).id.name << endl;
      }
    }
  };

  void printIntermediateCodeSingleVariable() {
    // cout << " In PILCSV" << endl; // Debugging
    if (mSingleVariable.isArray) {

      cout << ". [] < " << mSingleVariable.id.name << ", " << mSingleVariable.arrayIndex << endl;

    }
    else if(!mSingleVariable.isArray) {
      cout << ". < " << mSingleVariable.id.name << endl;
    }

  };

}; // End of Read


class Write {
public:
  Variable mSingleVariable;                 // The 'm' mSingleVariable is a convetion for member
  std::vector<Variable> list_of_variables;

  Write(){
    mSingleVariable.isArray = false;
  };

  Write(Variable* v){
    mSingleVariable = *(v);
    mSingleVariable.isArray = false;
  };

  void printIntermediateCodeFromListOfVariables() {
    // cout << " In PILOV" << endl;
    for (int i = 0; i < list_of_variables.size(); i++) {
      if (list_of_variables.at(i).isArray)
      {
        cout << ". [] > " << list_of_variables.at(i).id.name << ", " << list_of_variables.at(i).arrayIndex << endl;
      }
      else if(!(list_of_variables.at(i).isArray))
      {
        cout << ". > " << list_of_variables.at(i).id.name << endl;
      }
    }
  };

  void printIntermediateCodeSingleVariable() {
    // cout << " In PILCSV" << endl; // Debugging
    if (mSingleVariable.isArray) {

      cout << ". [] > " << mSingleVariable.id.name << ", " << mSingleVariable.arrayIndex << endl;

    }
    else if(!mSingleVariable.isArray) {
      cout << ". > " << mSingleVariable.id.name << endl;
    }

  };

}; // End of Write class

class Expression {
public:
  MultiplicativeExpr mMultiplicativeExpr;

  Expression(){};
  Expression(MultiplicativeExpr m){};
}; // End of Expression class


class Comp {
public:
  string mComparisonOperator; // Allows us to return operators as strings.
  enum ComparisonOperator { EQ, NEQ, LT, GT, LTE, GTE };
  //EQ = 0, NEQ = 1, LT = 2, GT = 3, LTE = 4, GTE = 5

  Comp(){};
  Comp(int c){
    switch (c) {
      case EQ : mComparisonOperator  = "EQ";   break;
      case NEQ: mComparisonOperator  = "NEQ";  break;
      case LT : mComparisonOperator  = "LT";   break;
      case GT : mComparisonOperator  = "GT";   break;
      case LTE: mComparisonOperator  = "LTE";  break;
      case GTE: mComparisonOperator  = "GTE";  break;

    };  // end of switch
  };    // end of constructor
};      // End of Comp class


struct Table_Entry {

    string name;              // This string represents an identifier
    int   int_value;          // This value refers to a user-declared int value
    int   size_value;         // This value refers to a user-declared array size
    string type_value;

};


// int current_temp_variable_count = -1;
//
// string generateTempVariable(){
//
//   current_temp_variable_count++;
//
//   ostringstream temp_number;
//   temp_number << current_temp_variable_count;
//   string temp_value = "t" + temp_number.str();
//
//   return temp_value;
// }

#endif
