//
// Created by Daniel Huang on 2020-08-19.
//

#ifndef LEET_1512NUMBEROFGOODPAIRS_H
#define LEET_1512NUMBEROFGOODPAIRS_H
#include "../common/allHeaders.h"

int numIdenticalPairs(vector<int>& nums) {
    int ret = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                ret++;
            } else {
                continue;
            }
        }
    }
    return ret;
}

void test() {
    vector<int> x {1,2,3};
    numIdenticalPairs(x);
}
#endif //LEET_1512NUMBEROFGOODPAIRS_H
