#ifndef _HEADER_H_
#define _HEADER_H_

class God;

class God {
public:
  int myInt;
  int current_temp_variable_count = -1; // Used to keep track of the value we should assign in getTempVariableName
  God(){};

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
  string type;        // Stores Declaration type like: INTEGER, BOOL, etc.
  bool isArray = false; // Determine if the declations is an array

  Declaration(){
    isArray = false; // assume the value of array is false.
  }
};

struct Table_Entry {

    string name;              // This string represents an identifier
    int   int_value;          // This value refers to a user-declared int value
    int   size_value;         // This value refers to a user-declared array size
    string type_value;

};


//std::string generateDeclarationCode(nameList)
void addToStack(){

};

#endif
