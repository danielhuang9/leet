//
// Created by Daniel Huang on 2020-07-22.
//

#ifndef LEET_0349INTERSECTIONOFTWOARRAYS_H
#define LEET_0349INTERSECTIONOFTWOARRAYS_H
#include "../common/allHeaders.h"

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ret;

    for(auto& i:nums1) {
        for(auto& j:nums2) {
            if (i == j && find(ret.begin(), ret.end(), i) == ret.end()) {
                ret.push_back(i);
            }
        }
    }
    return ret;
}

void test() {
    vector<int> x {4,9,5}, y {9,4,9,8,4};
    intersection(x, y);
}
#endif //LEET_0349INTERSECTIONOFTWOARRAYS_H
