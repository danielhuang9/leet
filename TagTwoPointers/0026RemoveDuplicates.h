//
// Created by Daniel Huang on 2020-07-18.
//

#ifndef LEET_0026REMOVEDUPLICATES_H
#define LEET_0026REMOVEDUPLICATES_H
#include "../common/allHeaders.h"

int removeDuplicates(vector<int>& nums) {
    vector<int> ret;

    for (int i = 0, j = 0; i < nums.size(); i++) {
        if (nums[i] == nums[j] && i != 0) {
            continue;
        }
        else {
            j++;
            nums[j] = nums[i];
            ret.push_back(nums[j]);
        }
    }
    int size = ret.size();
    cout << size << endl;
    return size;
}

void test() {
    vector<int> nums {0,0,1,1,1,2,2,3,3,4};
    removeDuplicates(nums);
}

#endif //LEET_0026REMOVEDUPLICATES_H