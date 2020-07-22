//
// Created by Daniel Huang on 2020-07-21.
//

#ifndef LEET_0344REVERSESTRING_H
#define LEET_0344REVERSESTRING_H
#include "../common/allHeaders.h"

void reverseString(vector<string>& s) {
    string temp;

    for (int start = 0, end = s.size()-1; start < end; start++, end--) {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
    }
}

void test() {
    vector<string> x {"h","e","l","l","o"};

    reverseString(x);
}

#endif //LEET_0344REVERSESTRING_H
