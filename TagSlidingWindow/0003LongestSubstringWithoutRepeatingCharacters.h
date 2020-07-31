//
// Created by Daniel Huang on 2020-07-31.
//

#ifndef LEET_0003LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_H
#define LEET_0003LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_H
#include "../common/allHeaders.h"

int lengthOfLongestSubstring(string s) {
    int left = 0, right = 0, max = 0, curLen;
    map<char, int> window;

    while (right < s.size()) {
        window[s[right]]++;
        int count = window[s[right]];
        if (count > 1) {
            left = right;
            window.clear();
        }
        curLen = right - left + 1;
        if (curLen > max) {
            max = curLen;
        }
        right++;
    }
    return max;
}

void test() {
    lengthOfLongestSubstring("abcabcbb");
}
#endif //LEET_0003LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_H
