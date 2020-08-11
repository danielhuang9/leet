//
// Created by Daniel Huang on 2020-08-04.
//

#ifndef LEET_0151REVERSEWORDSINASTRING_H
#define LEET_0151REVERSEWORDSINASTRING_H

#include "../common/allHeaders.h"

string reverseWords(string s) {
    reverse(s.begin(), s.end());

    int beginning = 0, spaceIndex = 0;
    char space = ' ';
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == space) {
            spaceIndex = i;
            string word = s.substr(beginning, spaceIndex-beginning);
            reverse(word.begin(), word.end());

            for (int j = 0; j < word.size(); j++) {
                s[beginning + j] = word[j];
            }

            beginning = spaceIndex+1;
        }
    }


    return s;
}

void test() {
    reverseWords("the sky is blue");
}

#endif //LEET_0151REVERSEWORDSINASTRING_H
/*

 */