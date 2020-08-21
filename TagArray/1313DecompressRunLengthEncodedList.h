//
// Created by Daniel Huang on 2020-08-20.
//

#ifndef LEET_1313DECOMPRESSRUNLENGTHENCODEDLIST_H
#define LEET_1313DECOMPRESSRUNLENGTHENCODEDLIST_H
#include "../common/allHeaders.h"

vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> ret {};
    for (int i = 0; i < nums.size(); i += 2) {
        int freq = nums[i], val = nums[i+1];
        for (int j = 0; j < freq; j++) {
            ret.push_back(val);
        }
    }
    return ret;
}

void test() {
    vector<int> x {1,1,2,3};
    decompressRLElist(x);
}
#endif //LEET_1313DECOMPRESSRUNLENGTHENCODEDLIST_H
