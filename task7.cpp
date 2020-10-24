#include "lab04.hpp"

vector<string> split(const string& str, char sep)
{
    vector<string> arr;
    string str_copy = str.substr(0, str.length());
    while (str_copy.find(sep) != -1)
    {
        if (str_copy.substr(0, str_copy.find(sep)).length() != 0)
            arr.push_back(str_copy.substr(0, str_copy.find(sep)));
        str_copy.erase(0, str_copy.find(sep) + 1);
    }
    if (str_copy.length() != 0)
        arr.push_back(str_copy);
    return(arr);
