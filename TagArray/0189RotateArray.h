//
// Created by Daniel Huang on 2020-07-25.
//

#ifndef LEET_0189ROTATEARRAY_H
#define LEET_0189ROTATEARRAY_H
#include "../common/allHeaders.h"

void swap(vector<int>& vec, int i, int j) {
    int temp;
    temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}


vector<int> rotate(vector<int>& nums, int k) {
    int split = nums.size() - 1 - k;

    for(int i = 0, j = split; i < j; i++, j--) {
        swap(nums, i, j);
    }

    for(int i = split+1, j = nums.size()-1; i < j; i++, j--) {
        swap(nums, i, j);
    }

    for(int i = 0, j = nums.size()-1; i < j; i++, j--) {
        swap(nums, i, j);
    }

    return nums;
}

void test() {
    vector<int> in {1,2,3,4,5,6,7};

    rotate(in, 3);
}
#endif //LEET_0189ROTATEARRAY_H
