#ifndef _HEADER_H_
#define _HEADER_H_

class God;
class Declaration;
class ID;

class God {
public:
  int myInt;

  God(){};

};


class ID {
public:
  string name;

  ID(){};
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
  bool isArray;                     // Determine if the declations is an array

  int int_val;                      // Used in the "numbers" grammar production to capture int_val
  int arraySize;
  int arrayIndex;                   // index of array
  std::vector<ID> list_of_ids;      //

  Variable(){
    isArray = false;                // assume the value of array is false.
    arraySize = -1;
  }
};

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

    if (mSingleVariable.isArray) {
      for (int i = 0; i < mSingleVariable.list_of_ids.size(); i++) {
        cout << ". [] < " << mSingleVariable.list_of_ids.at(i).name << ", " << mSingleVariable.arrayIndex << endl;
      }
    }
    else if(!mSingleVariable.isArray) {
      for (int i = 0; i < mSingleVariable.list_of_ids.size(); i++) {
        cout << ". " << mSingleVariable.list_of_ids.at(i).name << endl;
      }
    }
  };

  void printIntermediateCodeSingleVariable() {
    if (mSingleVariable.isArray) {

      cout << ". [] < " << mSingleVariable.id.name << ", " << mSingleVariable.arrayIndex << endl;

    }
    else if(!mSingleVariable.isArray) {
      cout << ". < " << mSingleVariable.id.name << endl;
    }

  };

};


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

    if (mSingleVariable.isArray) {
      for (int i = 0; i < mSingleVariable.list_of_ids.size(); i++) {
        cout << ". [] > " << mSingleVariable.list_of_ids.at(i).name << ", " << mSingleVariable.arrayIndex << endl;
      }
    }
    else if(!mSingleVariable.isArray) {
      cout << "inside write print " << endl;
      for (int i = 0; i < mSingleVariable.list_of_ids.size(); i++) {
        cout << ". > " << mSingleVariable.list_of_ids.at(i).name << endl;
      }
    }
  };

  void printIntermediateCodeSingleVariable() {
    if (mSingleVariable.isArray) {

      cout << ". [] > " << mSingleVariable.id.name << ", " << mSingleVariable.arrayIndex << endl;

    }
    else if(!mSingleVariable.isArray) {
      cout << ". > " << mSingleVariable.id.name << endl;
    }

  };

}; // End of Write class



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
