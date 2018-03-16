int current_temp_variable_count = -1;

string generateTempVariable()
{
    current_temp_variable_count++;

    ostringstream temp_number;
    temp_number << current_temp_variable_count;
    string temp_value = "t" + temp_number.str();

    return temp_value;

};
