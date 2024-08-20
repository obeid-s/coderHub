#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <math.h>
using namespace std;

/**
https://coderhub.sa/challenges/b83ff2cc-47e9-4965-b764-6fce3ba65be6/view?language=C%252B%252B
examples:
std::vector<float> arr;
  arr.push_back(121); // i get -> 11
  arr.push_back(144); // i get -> 12
  arr.push_back(169); // i get -> 13
  arr.push_back(4.2); // i get -> 2.05
  arr.push_back(6.9); // i get -> 2.63
**/

vector<float> array_root(vector<float> arr) { 
  std::vector<float> result;

  for (int i = 0; i < arr.size(); i++) {
    float f = std::sqrtf(arr.at(i));
    char buff[512];
    int n = sprintf(buff, "%.2f", f);
    std::string num(buff);
    float finalNum = stof(num);
    result.push_back(finalNum);
  }
  return result;
}
