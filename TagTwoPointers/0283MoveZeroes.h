//
// Created by Daniel Huang on 2020-07-19.
//

#ifndef LEET_0283MOVEZEROES_H
#define LEET_0283MOVEZEROES_H
#include "../common/allHeaders.h"

void moveZeroes(vector<int>& nums) {
    int j = -1;
    for(int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            continue;
        } else {
            j++;
            nums[j] = nums[i];
        }
    }

    j++;
    for (; j < nums.size(); j++) {
        nums[j] = 0;
    }

    for (auto& item : nums) {
        cout << item << ", ";
    }

    cout << endl;
    return;
}

void test() {
    vector<int> nums {0,1,0,3,12};
    moveZeroes(nums);
}
#endif //LEET_0283MOVEZEROES_H
