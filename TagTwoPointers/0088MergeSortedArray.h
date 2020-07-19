//
// Created by Daniel Huang on 2020-07-19.
//

#ifndef LEET_0088MERGESORTEDARRAY_H
#define LEET_0088MERGESORTEDARRAY_H
#include "../common/allHeaders.h"

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1, j = n - 1;
    for(int k = nums1.size() - 1; k >= 0; k--) {
        if (nums2[j] > nums1[i]) {
            nums1[k] = nums2[j];
            j--;
        } else if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
            k--;
            nums1[k] = nums1[i];
            i--;
        }
    }

    for (auto& i : nums1) {
        cout << i << ", ";
    }
    cout << endl;
}

void test() {
    vector<int> x {1,2,3,0,0,0}, y {2,5,6};
    int m = 3, n = 3;
    merge(x, m, y, n);
}

#endif //LEET_0088MERGESORTEDARRAY_H
