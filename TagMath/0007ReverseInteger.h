//
// Created by Daniel Huang on 2020-08-14.
//

#ifndef LEET_0007REVERSEINTEGER_H
#define LEET_0007REVERSEINTEGER_H
#include "../common/allHeaders.h"
int reverse(int x) {
    string number = to_string(x);
    int digits = number.length();

    for (int i = 0, j = digits-1; i<j; i++, j--) {
        swap(number[i], number[j]);
    }
    int num = stoi(number);
    return num;
}

void test() {
    reverse(-123);
}
#endif //LEET_0007REVERSEINTEGER_H
