#include "lab04.hpp"

int argmax(vector<float> input)
{
    if (input.empty())
        return (-1);
    else
    {
        float max = input[0];
        int number;
        for (int i = 1; i < input.size(); i++)
            if (input[i] > max)
            {
                max = input[i];
                number = i;
            }
        return (number);
    }
}