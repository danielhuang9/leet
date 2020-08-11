//
// Created by Daniel Huang on 2020-08-05.
//

#ifndef LEET_0049GROUPANAGRAMS_H
#define LEET_0049GROUPANAGRAMS_H
#include "../common/allHeaders.h"

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<string>> sorted;
    vector<vector<string>> ret;

    for(int i = 0; i < strs.size(); i++) {
        string original = strs[i];
        sort(strs[i].begin(), strs[i].end());
        sorted[strs[i]].push_back(original);
    }
    for (auto& pair : sorted) {
         ret.push_back(pair.second);
    }
    return ret;
}

void test() {
    vector<string> x {"eat", "tea", "tan", "ate", "nat", "bat"};
    groupAnagrams(x);
}
#endif //LEET_0049GROUPANAGRAMS_H
