//
// Created by Daniel Huang on 2020-08-16.
//

#ifndef LEET_0215KTHLARGESTELEMENTINANARRAY_H
#define LEET_0215KTHLARGESTELEMENTINANARRAY_H
#include "../common/allHeaders.h"

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int> pq;
    int ret;

    for (auto& i:nums) {
        pq.push(i);
    }

    for (int i = 0; i < k; i++) {
        ret = pq.top();
        pq.pop();
    }
    return ret;
}

void test() {
    vector<int> x {3,2,1,5,6,4};
    findKthLargest(x, 2);
}
#endif //LEET_0215KTHLARGESTELEMENTINANARRAY_H
