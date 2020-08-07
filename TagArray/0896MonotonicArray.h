//
// Created by Daniel Huang on 2020-08-07.
//

#ifndef LEET_0896MONOTONICARRAY_H
#define LEET_0896MONOTONICARRAY_H
#include "../common/allHeaders.h"

bool isMonotonic(vector<int>& A) {
    bool increasing;

    if (A[0] <= A[1]) {
        increasing = true;
    } else {
        increasing = false;
    }

    for (int i = 0; i < A.size()-1; i++) {
        if (increasing) {
            if (A[i] > A[i+1]) {
                return false;
            }
        } if (!increasing) {
            if (A[i] < A[i+1]) {
                return false;
            }
        }
    }
    return true;
}

void test() {
    vector<int> x {1,1,1};
    cout << isMonotonic(x);
}

#endif //LEET_0896MONOTONICARRAY_H
