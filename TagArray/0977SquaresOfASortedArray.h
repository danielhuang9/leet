//
// Created by Daniel Huang on 2020-07-26.
//

#ifndef LEET_0977SQUARESOFASORTEDARRAY_H
#define LEET_0977SQUARESOFASORTEDARRAY_H
#include "../common/allHeaders.h"

vector<int> sortedSquares(vector<int>& A) {
    vector<int> ret;

    for (auto& i:A) {
        ret.push_back(pow(i, 2));
    }

    sort(ret.begin(), ret.end());

    return ret;
}

vector<int> sortedSquaresByMergeSort(vector<int>& A) {
    int i = 0;
    vector<int> ret;

    for (i = 0; i < A.size(); i++) {
        if (A[i] < 0) {
            continue;
        }
        else {
            break;
        }
    }
    int j = i - 1;

    while(i < A.size() && j >= 0) {
        int a = pow(A[i],2), b = pow(A[j], 2);
        if (a > b) {
            ret.push_back(b);
            j--;
        }
        else if (a == b){
            ret.push_back(a);
            ret.push_back(b);
            i++;
            j--;
        }
        else {
            ret.push_back(a);
            i++;
        }
    }

    while (i < A.size()) {
        ret.push_back(pow(A[i],2));
        i++;
    }

    while (j >= 0) {
        ret.push_back(pow(A[j], 2));
        j--;
    }

    return ret;
}

void test() {
    vector<int> vec {-4,-1,0,3,10};
    sortedSquaresByMergeSort(vec);
}
#endif //LEET_0977SQUARESOFASORTEDARRAY_H
