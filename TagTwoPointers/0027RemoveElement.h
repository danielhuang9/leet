//
// Created by Daniel Huang on 2020-07-18.
//

#ifndef LEET_0027REMOVEELEMENT_H
#define LEET_0027REMOVEELEMENT_H
#include "../common/allHeaders.h"

int removeElement(vector<int>& nums, int val) {
    int j = -1;
    vector<int> ret;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == val) {
            continue;
        }
        else {
            j++;
            nums[j] = nums[i];
            ret.push_back(nums[j]);
        }
    }

    cout << j + 1 << endl;
    return j + 1;
}

void test() {
    vector<int> nums {0,1,2,2,3,0,4,2};
    int val = 2;
    removeElement(nums, val);
}
#endif //LEET_0027REMOVEELEMENT_H
