//
// Created by Daniel Huang on 2020-07-29.
//

#ifndef LEET_0013ROMANTOINTEGER_H
#define LEET_0013ROMANTOINTEGER_H
#include "../common/allHeaders.h"

int romanToInt(string s) {
    vector<char> value (s.begin(),s.end());
    int res = 0;

    map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;

    for(int i = value.size(); i >= 0; i--) {
        if (i == 0) {
            res += roman[value[i]];
        } else {
            if (roman[value[i]] < roman[value[i+1]]) {
                res -= roman[value[i]];
            } else {
                res += roman[value[i]];
            }
        }
    }
    return res;
}

void test() {
    romanToInt("XVIII");
}
#endif //LEET_0013ROMANTOINTEGER_H
