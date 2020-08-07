//
// Created by Daniel Huang on 2020-08-07.
//

#ifndef LEET_0384SHUFFLEANARRAY_H
#define LEET_0384SHUFFLEANARRAY_H
#include "../common/allHeaders.h"

/** Returns a random shuffling of the array. */
vector<int> shuffle(vector<int>& nums) {
    int size = nums.size();
    srand(time(nullptr));

    for (int i = size-1; i >= 0; i--) {
        int random = rand() % i;
        swap(nums[i], nums[random]);
    }
    return nums;
}

void test() {
    vector<int> x {1, 2, 3, 4, 5};
    shuffle(x);
}
#endif //LEET_0384SHUFFLEANARRAY_H
