//
// Created by Daniel Huang on 2020-07-30.
//

#ifndef LEET_0075SORTCOLOURS_H
#define LEET_0075SORTCOLOURS_H
#include "../common/allHeaders.h"

void sortColours(vector<int>& nums) {
    int left = 0;
    int right = nums.size()-1;
    int curr = 0;

    while (curr < right) {
        if (nums[curr] == 0) {
            swap(nums[curr], nums[left]);
            left++;
        } else if (nums[curr] == 2) {
            swap(nums[curr], nums[right]);
            right--;
        }
        curr++;
    }

    return;
}

void test() {
    vector<int> x {2,0,2,1,1,0};
    sortColours(x);
}

#endif //LEET_0075SORTCOLOURS_H
