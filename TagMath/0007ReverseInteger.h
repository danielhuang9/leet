//
// Created by Daniel Huang on 2020-08-14.
//

#ifndef LEET_0007REVERSEINTEGER_H
#define LEET_0007REVERSEINTEGER_H
#include "../common/allHeaders.h"
int reverse(int x) {
    int sign = 1;

    if (x < 0) {
        sign = -1;
        x = abs(x);
    }

    int ret = 0;
    while (x > 0) {
        int reminder = x % 10;
        x /= 10;
        ret = (ret*10) + reminder;
    }

    ret *= sign;

    return ret;
}

void test() {
    reverse(-123);
}
#endif //LEET_0007REVERSEINTEGER_H
