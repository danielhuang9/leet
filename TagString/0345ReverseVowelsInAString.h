//
// Created by Daniel Huang on 2020-08-11.
//

#ifndef LEET_0345REVERSEVOWELSINASTRING_H
#define LEET_0345REVERSEVOWELSINASTRING_H
#include "../common/allHeaders.h"

string reverseVowels(string s) {
    string vowels = "aeiou";

    int i = 0, j = s.size()-1;
    while (i < j) {
        i = s.find_first_of(vowels, i);
        j = s.find_last_of(vowels, j);
        if (i < j) {
            swap(s[i], s[j]);
        }
        i++;
        j--;
    }
    return s;
}

void test() {
    reverseVowels("leetcode");
}

#endif //LEET_0345REVERSEVOWELSINASTRING_H
