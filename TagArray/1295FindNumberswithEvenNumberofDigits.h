//
// Created by Daniel Huang on 2020-08-22.
//

#ifndef LEET_1295FINDNUMBERSWITHEVENNUMBEROFDIGITS_H
#define LEET_1295FINDNUMBERSWITHEVENNUMBEROFDIGITS_H
#include "../common/allHeaders.h"
int findNumbers(vector<int>& nums) {
    int ret = 0;
    for (auto i:nums) {
        if ((i >= 10 && i <= 99) || (i >= 1000 && i <= 9999) || (i == 100000)) {
            ret++;
        }
    }
    return ret;
}

void test() {
    vector<int> x {12,345,2,6,7896};
    findNumbers(x);
}
#endif //LEET_1295FINDNUMBERSWITHEVENNUMBEROFDIGITS_H
