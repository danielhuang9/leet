//
// Created by Daniel Huang on 2020-08-10.
//

#ifndef LEET_0532KDIFFPAIRSINANARRAY_H
#define LEET_0532KDIFFPAIRSINANARRAY_H
#include "../common/allHeaders.h"

int findPairs(vector<int>& nums, int k) {
    set<vector<int>> numbers;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            int diff = abs(nums[i]- nums[j]);
            if (diff == k) {
                if (nums[i] > nums[j]) {
                    numbers.insert(vector<int>{nums[i], nums[j]});
                } else {
                    numbers.insert(vector<int>{nums[j], nums[i]});
                }
            }
        }
    }
    int size = numbers.size();
    return size;
}

void test() {
    vector<int> x {3, 1, 4, 1, 5};
    findPairs(x, 2);
}


#endif //LEET_0532KDIFFPAIRSINANARRAY_H
