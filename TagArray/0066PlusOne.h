//
// Created by Daniel Huang on 2020-07-22.
//

#ifndef LEET_0066PLUSONE_H
#define LEET_0066PLUSONE_H
#include "../common/allHeaders.h"

vector<int> plusOne(vector<int>& digits) {
    int carry = 0, size = digits.size();

    int sum = digits[size-1] + 1;
    int reminder = sum%10;
    carry = sum/10;
    digits[size-1] = reminder;

    if (carry > 0) {
        for (int j = size - 2; j >= 0; j--) {
            sum = digits[j] + carry;

            reminder = sum % 10;
            carry = sum / 10;

            digits[j] = reminder;
        }
    }

    return digits;
}

void test() {
    vector<int> in {4, 3, 9, 9};
    plusOne(in);
}
#endif //LEET_0066PLUSONE_H
