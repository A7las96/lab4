#include "lab04.hpp"

//Task 1
float mean(const vector<float>& input)
{
    float sum = 0;
    for (int i = 0; i < input.size(); i++)
        sum += input[i];
    return(sum / input.size());
}
