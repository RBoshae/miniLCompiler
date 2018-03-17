#include "globalFunctions.h"


int current_temp_variable_count = -1;
std::string generateTempVariable()
{
    current_temp_variable_count++;

    std::ostringstream temp_number;
    temp_number << current_temp_variable_count;
    std::string temp_value = "t" + temp_number.str();

    std::cout << ". " << temp_value << std::endl;

    return temp_value;

};
