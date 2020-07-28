//
// Created by Daniel Huang on 2020-07-28.
//

#ifndef LEET_0056MERGEINTERVALS_H
#define LEET_0056MERGEINTERVALS_H
#include "../common/allHeaders.h"

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ret;

    for(int i = 0; i < intervals.size(); i++) {
        vector<int> current = intervals[i];

        if (i == 0) {
            ret.push_back(current);
        } else {
            vector<int>& last = ret[ret.size()-1];
            if (current[0] <= last[1]) {
                last[1] = current[1];
            } else {
                ret.push_back(current);
            }
        }
    }
    return ret;
}

void test() {
    vector<vector<int>> x {{1,3}, {2, 6}, {8, 10}, {15, 18}};
    merge(x);
}
#endif //LEET_0056MERGEINTERVALS_H
