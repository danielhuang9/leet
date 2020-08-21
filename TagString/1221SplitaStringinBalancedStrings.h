//
// Created by Daniel Huang on 2020-08-21.
//

#ifndef LEET_1221SPLITASTRINGINBALANCEDSTRINGS_H
#define LEET_1221SPLITASTRINGINBALANCEDSTRINGS_H
#include "../common/allHeaders.h"

int balancedStringSplit(string s) {
    int ret = 0, gap = 1;
    char lead = s[0];
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == lead) {
            gap++;
        } else {
            gap--;
        }
        if (gap == 0) {
            ret++;
            lead = s[i+1];
            i++;
            gap = 1;
        }
    }
    return ret;
}

void test() {
    balancedStringSplit("RLRRRLLRLL");
}
#endif //LEET_1221SPLITASTRINGINBALANCEDSTRINGS_H
