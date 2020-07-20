//
// Created by Daniel Huang on 2020-07-20.
//

#ifndef LEET_0028IMPLEMENTSTRSTR_H
#define LEET_0028IMPLEMENTSTRSTR_H
#include "../common/allHeaders.h"

int strStr(string haystack, string needle) {
    vector<char> h(haystack.begin(), haystack.end());
    vector<char> n(needle.begin(), needle.end());
    int j = 0;

    for (int i = 0; i < h.size() + 1; i++) {
        if (h[i] == n[j]) {
            j++;
            if (j != n.size()) {
                continue;
            }
            else {
                return i - n.size() + 1;
            }
        }
        else if (i != h.size()){
            continue;
        }
        else {
            return -1;
        }
    }
}

void test() {
    string h = "hello", n = "ll";
    cout << strStr(h, n);
}
#endif //LEET_0028IMPLEMENTSTRSTR_H
