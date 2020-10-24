//
// Created by phili on 24.10.2020.
//

#ifndef LAB4_LAB04_HPP
#define LAB4_LAB04_HPP

#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;

float mean(const vector<float>& input);
pair<float, float> minMax(const vector<float>& input);
int argmax(vector<float> input);
void sort(vector<float>& input);
bool remove_first_negative_element(vector<int>& vec, int& removed_element);
string replace(const string& str, const string& old, const string& new_string);
vector<string> split(const string& str, char sep);
string join(const vector<string>& str, const string& sep);



#endif //LAB4_LAB04_HPP
