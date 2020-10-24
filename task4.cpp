#include "lab04.hpp"

void sort(vector<float>& input)
{
    int k;
    for (int i = 0; i < input.size() - 1; i++)
        for (int j = 0; j < input.size() - i - 1; j++)
        {
            if (input[j] < input[j + 1])
            {
                k = input[j + 1];
                (input[j + 1] = input[j]);
                input[j] = k;
            }
        }
}