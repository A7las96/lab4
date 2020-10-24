#include "lab04.hpp"

pair<float, float> minMax(const vector<float>& input)
{
    if (input.empty())
    {
        return make_pair(numeric_limits <float> ::min(), numeric_limits<float>::max());
    }
    else
    {
        float min = input[0];
        float max = input[0];
        for (int i = 1; i < input.size(); i++)
        {
            if (input[i] < min) min = input[i];
            if (input[i] > max) max = input[i];
        }
        return make_pair(min, max);
    }
}
