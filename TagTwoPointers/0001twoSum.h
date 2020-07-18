//
// Created by Daniel Huang on 2020-07-18.
//

#ifndef LEET_0001TWOSUM_H
#define LEET_0001TWOSUM_H
#include "../common/allHeaders.h"

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> numMap;
    vector<int> ret;

    for(auto& i : nums) {
        numMap[i] = 1;
    }

    for(auto& i : nums) {
        int remain = target - i;
        if (numMap.count(remain) > 0) {
            ret.push_back(i);
            ret.push_back(remain);
            break;
        }
    }
    return ret;
}

vector<int> twoSumWithPointers(vector<int>& nums, int target) {
    vector<int> ret;

    sort(nums.begin(), nums.end());
    int sum = 0;

    for(int i = 0, j = nums.size()-1; i < j; ) {
        sum = nums[i] + nums[j];
        if (sum > target) {
            j--;
        }
        else if (sum < target) {
            i++;
        }
        else {
            ret.push_back(nums[i]);
            ret.push_back(nums[j]);
            break;
        }
    }

    return ret;
}

void test() {
    vector<int> x {15, 7, 11, 2};
    int target = 9;
    twoSumWithPointers(x, target);
}

#endif //LEET_0001TWOSUM_H
