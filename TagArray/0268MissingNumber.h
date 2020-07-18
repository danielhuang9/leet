//
// Created by Daniel Huang on 2020-07-17.
//

#ifndef LEET_0268MISSINGNUMBER_H
#define LEET_0268MISSINGNUMBER_H
#include "../common/allHeaders.h"

int missingNum(vector<int> x) {
    sort(x.begin(), x.end());
    int missingSum = 0;
    int first = x[0];
    int last = x[x.size() - 1];

    int numSum = x.size() + 1;
    double numerator = (numSum)/(double)2;
    double fullSum = numerator * (first + last);

    for(auto& item : x) {
        missingSum += item;
    }

    double missing = fullSum - missingSum;
    return missing;

}

void test01() {
    vector<int> x {1, 3, 4, 5};
    missingNum(x);
}
#endif //LEET_0268MISSINGNUMBER_H
