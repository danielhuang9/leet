//
// Created by Daniel Huang on 2020-07-30.
//

#ifndef LEET_0076MINIMUMWINDOWSUBSTRING_H
#define LEET_0076MINIMUMWINDOWSUBSTRING_H
#include "../common/allHeaders.h"

bool compare(map<char, int>& need, map<char, int>& window) {
    bool same = true;

    if (window.size() != need.size()) {
        return false;
    }

    for (auto& p : need) {
        char c = p.first;

        if (window.count(c) == 0 ) {
            same = false;
            break;
        }
        if (window[c] < need[c]) {
            same = false;
            break;
        }
    }
    return same;
}

string minWindow(string s, string t) {
    int left = 0, right = 0;
    int size = s.size();
    map<char, int> target{};
    map<char, int> window{};
    vector<vector<int>> ret;

    for (auto& c:t) {
        target[c]++;
    }
    int min = INT_MAX;
    int minL, minR;

    while (right < size) {
        // step 1: move right
        char current = s[right];
        if (target.count(current) > 0) {
            window[current]++;
        }
        right++;


        // step 2, check and move left until condition not meet
        // compare every char between need and target
        while(compare(target, window) == true && left < right ) {
            int diff = right - left;
            if (diff < min) {
                min = diff;

                minL = left;
                minR = right;
                //ret.push_back({left, right});
            }

            char leftChar = s[left];
            if (target.count(leftChar)) {
                window[leftChar]--;
            }
            if (window.count(leftChar) && window[leftChar] == 0) {
                window.erase(leftChar);
            }

            left++;
        }

    string answer = s.substr(minL, minR);
    return answer;



}

void test() {
    minWindow("ADOBECODEBANC", "ABC");
}
#endif //LEET_0076MINIMUMWINDOWSUBSTRING_H
