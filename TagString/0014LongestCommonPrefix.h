//
// Created by Daniel Huang on 2020-07-21.
//

#ifndef LEET_0014LONGESTCOMMONPREFIX_H
#define LEET_0014LONGESTCOMMONPREFIX_H
#include "../common/allHeaders.h"

string longestCommonPrefix(vector<string>& strs) {
    vector<char> prefix (strs[0].begin(), strs[0].end());
    string ret = "";

    sort(begin(strs), begin(strs));
    string first = strs[0], last = strs[strs.size()-1];

    for (int i = 0; i < first.size(); i++) {
        if (first[i] == last[i]) {
            ret += first[i];
        }
        else  {
            break;
        }
    }
    cout << ret;
    return ret;
}

void test() {
    vector <string> x {"flower","flow","flows"};
    longestCommonPrefix(x);
}
#endif //LEET_0014LONGESTCOMMONPREFIX_H
