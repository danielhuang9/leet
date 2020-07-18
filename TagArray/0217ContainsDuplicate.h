//
// Created by Daniel Huang on 2020-07-16.
//

#ifndef LEET_0217CONTAINSDUPLICATE_H
#define LEET_0217CONTAINSDUPLICATE_H
#include "../common/allHeaders.h"

bool containsDup(vector<int>& x) {
    for(int i = 0; i < x.size(); i++) {
        for(int j = i + 1; j < x.size(); j++) {
            if (x[i] == x[j]) {
                return true;
            }
        }
    }
    return false;
}

bool containsDupByMap(vector<int>& x)  {
    unordered_map<int, int> kvp;
    for (auto& item : x){
        if (kvp.count(item) > 0) {
            return true;
        } else {
            kvp[item]++;
        }
    }
    return false;
}

void test() {
    vector<int> x{1, 2, 2};
    bool hasDup = containsDupByMap(x);
    cout << hasDup << endl;
}
#endif //LEET_0217CONTAINSDUPLICATE_H
