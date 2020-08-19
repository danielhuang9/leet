//
// Created by Daniel Huang on 2020-08-18.
//

#ifndef LEET_1470SHUFFLETHEARRAY_H
#define LEET_1470SHUFFLETHEARRAY_H
#include "../common/allHeaders.h"

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ret (n*2);
    int evenCounter = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i%2 == 0) {
            ret[i] = nums[evenCounter];
            evenCounter++;
        } else {
            ret[i] = nums[n];
            n++;
        }
    }
    return ret;
}

void test() {
    vector<int> x {1,2,3,4,1,2,3,4};
    shuffle(x, 4);
}
#endif //LEET_1470SHUFFLETHEARRAY_H
