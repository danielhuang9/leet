//
// Created by Daniel Huang on 2020-08-11.
//

#ifndef LEET_0204COUNTPRIMES_H
#define LEET_0204COUNTPRIMES_H
#include "../common/allHeaders.h"

int countPrimes(int n) {
    int root = sqrt(n), count = 0;

    if (n <= 2) {
        return 0;
    } else {
        for (int i = 3; i < n; i++) {
            for (int j = 2; j < root; j++) {
                if (i%j != 0) {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
}

void test() {
    countPrimes(10);
}
#endif //LEET_0204COUNTPRIMES_H
