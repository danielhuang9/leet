//
// Created by Daniel Huang on 2020-08-18.
//

#ifndef LEET_CYCLICSORT_H
#define LEET_CYCLICSORT_H
#include "../common/allHeaders.h"

vector<int> CyclicSort(vector<int>& nums) {
    int i = 0;
    while (i < nums.size()-1) {
        int j = nums[i] - 1;
        if (nums[i] != nums[j]) {
            swap(nums[i], nums[j]);
        } else {
            i++;
        }
    }
    return nums;
}

void test() {
    vector<int> x {3, 1, 4, 5, 2};
    CyclicSort(x);
}
#endif //LEET_CYCLICSORT_H
