//
// Created by Daniel Huang on 2020-08-16.
//

#ifndef LEET_0009PALINDROMENUMBER_H
#define LEET_0009PALINDROMENUMBER_H
#include "../common/allHeaders.h"

bool isPalindrome(int x) {
    int rev = 0;
    int original = x;

    if (x < 0) {
        return false;
    } else if (x == 0) {
        return true;
    } else {
        while (x > 0) {
            int reminder = x % 10;
            x /= 10;
            rev = rev*10 + reminder;
        }
        if (rev == original) {
            return true;
        } else {
            return false;
        }
    }
}

void test() {
    isPalindrome(121);
}
#endif //LEET_0009PALINDROMENUMBER_H
