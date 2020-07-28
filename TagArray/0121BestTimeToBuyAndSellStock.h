//
// Created by Daniel Huang on 2020-07-28.
//

#ifndef LEET_0121BESTTIMETOBUYANDSELLSTOCK_H
#define LEET_0121BESTTIMETOBUYANDSELLSTOCK_H
#include "../common/allHeaders.h"

int maxProfit(vector<int>& prices) {
    int max = 0;

    for (int i = 0; i < prices.size(); i++) {
        for (int j = i+1; j < prices.size(); j++) {
            int profit = prices[j] - prices[i];
            if (profit > max) {
                max = profit;
            }
        }
    }
    return max;
}

void test() {
    vector<int> x {7, 6, 4, 3, 1};
    maxProfit(x);
}
#endif //LEET_0121BESTTIMETOBUYANDSELLSTOCK_H
