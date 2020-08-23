//
// Created by Daniel Huang on 2020-08-22.
//

#ifndef LEET_1365HOWMANYNUMBERSARESMALLERTHANTHECURRENTNUMBER_H
#define LEET_1365HOWMANYNUMBERSARESMALLERTHANTHECURRENTNUMBER_H
#include "../common/allHeaders.h"

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> ret (nums.size());
    for (int i = 0; i < nums.size(); i++) {
        int count = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[i] > nums[j]) {
                count++;
            } else {
                continue;
            }
        }
        ret[i] = count;
    }
    return ret;
}

void test () {
    vector<int> x {7,7,7,7};
    smallerNumbersThanCurrent(x);
}
#endif //LEET_1365HOWMANYNUMBERSARESMALLERTHANTHECURRENTNUMBER_H
