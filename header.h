#ifndef _HEADER_H_
#define _HEADER_H_

class God;
class Declaration;
class ID;

class God {
public:
  int myInt;
  int current_temp_variable_count; // Used to keep track of the value we should assign in getTempVariableName
  God(){
    current_temp_variable_count = -1;
  };

  string generateTempVariable(){

    current_temp_variable_count++;

    ostringstream temp_number;
    temp_number << current_temp_variable_count;
    string temp_value = "t" + temp_number.str();

    return temp_value;
  }

};


class ID {
public:
  string name;
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
  std::vector<ID*> list_of_ids;
  string type;                      // Stores Declaration type like: INTEGER, BOOL, etc.
  bool isArray;                     // Determine if the declations is an array
  int arraySize;

  Variable(){
    isArray = false;                // assume the value of array is false.
    arraySize = -1;
  }

  void printIntermediateCode() {

    /* Intentionally empty */
  }
};

struct Table_Entry {

    string name;              // This string represents an identifier
    int   int_value;          // This value refers to a user-declared int value
    int   size_value;         // This value refers to a user-declared array size
    string type_value;

};


#endif
