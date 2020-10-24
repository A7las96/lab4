#include "lab04.hpp"

string replace(const string& str, const string& old, const string& new_string)
{
    string str_copy = str.substr(0, str.length());
    while (str_copy.find(old) != -1)
        str_copy.replace(str_copy.find(old), old.size(), new_string);
    return str_copy;
}