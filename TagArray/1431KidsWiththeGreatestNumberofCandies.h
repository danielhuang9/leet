//
// Created by Daniel Huang on 2020-08-19.
//

#ifndef LEET_1431KIDSWITHTHEGREATESTNUMBEROFCANDIES_H
#define LEET_1431KIDSWITHTHEGREATESTNUMBEROFCANDIES_H
#include "../common/allHeaders.h"

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int good = *max_element(candies.begin(), candies.end())-extraCandies;
    vector<bool> ret (candies.size());

    for(int i = 0; i < candies.size(); i++) {
        if (candies[i] >= good) {
            ret[i] = true;
        } else {
            ret[i] = false;
        }
    }
    return ret;
}

void test() {
    vector<int> x {12,1,12};
    kidsWithCandies(x, 10);
}
#endif //LEET_1431KIDSWITHTHEGREATESTNUMBEROFCANDIES_H
