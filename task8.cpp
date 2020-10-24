#include "lab04.hpp"

string join(const vector<string>& str, const string& sep)
{
    string arr;
    for (int i = 0; i < str.size(); i++)
    {
        arr += (str[i]);
        if (i != str.size() - 1)
            arr += sep;
    }
    return (arr);
}