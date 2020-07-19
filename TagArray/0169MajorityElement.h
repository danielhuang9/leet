//
// Created by Daniel Huang on 2020-07-19.
//

#ifndef LEET_0169MAJORITYELEMENT_H
#define LEET_0169MAJORITYELEMENT_H
#include "../common/allHeaders.h"

int majorityElementByMap(vector<int>& nums) {
    map<int, int> numCount;

    for(auto& element : nums) {
        numCount[element]++;
    }

    int max = 0;
    for(auto& element : numCount) {
        if (element.second > max) {
            max = element.first;
        }
    }
    return max;
}

int MajorityElementByCount(vector<int>& nums) {
    int count = 0;
    int majIndex = 0;

    for(int i = 0; i < nums.size(); i++) {
        if (i == 0) {
            count = 1;

        } else {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                count--;
            }

        }

        if (count > 0) {
            majIndex = i;
        }
    }

    return nums[majIndex];
}

void test() {
    vector<int> x {3, 2, 3, 2, 5, 3, 3};
    cout << majorityElementByMap(x);
}
#endif //LEET_0169MAJORITYELEMENT_H
