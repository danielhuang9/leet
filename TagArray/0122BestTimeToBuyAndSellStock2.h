//
// Created by Daniel Huang on 2020-08-13.
//

#ifndef LEET_0122BESTTIMETOBUYANDSELLSTOCK2_H
#define LEET_0122BESTTIMETOBUYANDSELLSTOCK2_H
#include "../common/allHeaders.h"

int maxProfit(vector<int>& prices) {
    int i = 0, size = prices.size(), buyDay = 0, sellDay = 0, profit = 0;
    while (i < size) {
        while (i < size && prices[i+1] <= prices[i]) {
            i++;
        }
        buyDay = prices[i];

        while (i < size && prices[i+1] > prices[i]) {
            i++;
        }
        sellDay = prices[i];

        profit += sellDay - buyDay;
    }
    return profit;
}

void test() {
    vector<int> x {7, 1, 5, 3, 6, 4};
    maxProfit(x);
}

#endif //LEET_0122BESTTIMETOBUYANDSELLSTOCK2_H
