//
// Created by Daniel Huang on 2020-07-20.
//

#ifndef LEET_0125VALIDPALINDROME_H
#define LEET_0125VALIDPALINDROME_H
#include "../common/allHeaders.h"

bool isPalindrome(string s) {
    vector<char> word(s.begin(), s.end());

    for(int i = 0, j = word.size()-1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return false;
        }
    }
    return true;
}

void test() {
    string pal = "aka";
    cout << isPalindrome(pal);
}
#endif //LEET_0125VALIDPALINDROME_H
