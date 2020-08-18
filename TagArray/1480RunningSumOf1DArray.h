//
// Created by Daniel Huang on 2020-08-18.
//

#ifndef LEET_1480RUNNINGSUMOF1DARRAY_H
#define LEET_1480RUNNINGSUMOF1DARRAY_H
#include "../common/allHeaders.h"

vector<int> runningSum(vector<int>& nums) {
    int i = 1;
    while (i < nums.size()) {
        nums[i] += nums[i-1];
        i++;
    }
    return nums;
}

void test() {
    vector<int> x {1, 2, 3, 4};
    runningSum(x);
}
#endif //LEET_1480RUNNINGSUMOF1DARRAY_H
