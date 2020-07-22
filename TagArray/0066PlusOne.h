//
// Created by Daniel Huang on 2020-07-22.
//

#ifndef LEET_0066PLUSONE_H
#define LEET_0066PLUSONE_H
#include "../common/allHeaders.h"

vector<int> plusOne(vector<int>& digits) {
    int last = digits[digits.size()-1] + 1;
    digits.pop_back();
    digits.push_back(last);
    return digits;
}

void test() {
    vector<int> in {4, 3, 2, 1};
    plusOne(in);
}
#endif //LEET_0066PLUSONE_H
