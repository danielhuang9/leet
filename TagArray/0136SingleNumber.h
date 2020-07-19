//
// Created by Daniel Huang on 2020-07-17.
//

#ifndef LEET_0136SINGLENUMBER_H
#define LEET_0136SINGLENUMBER_H
#include "../common/allHeaders.h"


int singleNumber(vector<int> x) {
    unordered_map<int, int> num;
    for (auto& elem : x) {
        num[elem]++;
    }

    for (auto& elem : x) {
        if (num[elem] == 1) {
            cout << elem << endl;
            return elem;
        }
    }
}

void test02() {
    vector<int> x {1, 2, 2, 1, 5};
    singleNumber(x);
}

#endif //LEET_0136SINGLENUMBER_H
