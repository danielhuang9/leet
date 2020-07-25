//
// Created by Daniel Huang on 2020-07-25.
//

#ifndef LEET_0238PRODUCTOFARRAYEXCEPTSELF_H
#define LEET_0238PRODUCTOFARRAYEXCEPTSELF_H
#include "../common/allHeaders.h"

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> left, right, ret;

    for(int i = 0; i < nums.size(); i++) {
        int prod = 1;
        for(int j = i + 1; j < nums.size(); j++) {
            prod *= nums[j];
        }
        right.push_back(prod);
    }

    for(int i = nums.size()-1; i >= 0; i--) {
        int prod = 1;
        for(int j = i - 1; j >= 0; j--) {
            prod *= nums[j];
        }
        left.push_back(prod);
    }

    reverse(left.begin(), left.end());

    for(int i = 0; i < nums.size(); i++) {
        ret.push_back(left[i]*right[i]);
    }

    return ret;
}

void test() {
    vector<int> in {1, 2, 3, 4};
    productExceptSelf(in);
}

#endif //LEET_0238PRODUCTOFARRAYEXCEPTSELF_H
