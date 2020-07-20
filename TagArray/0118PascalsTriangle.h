//
// Created by Daniel Huang on 2020-07-20.
//

#ifndef LEET_0118PASCALSTRIANGLE_H
#define LEET_0118PASCALSTRIANGLE_H
#include "../common/allHeaders.h"

vector<int> calculateNextRow(vector<int> row) {
    vector<int> nextRow;
    int prev = 0;
    int size = row.size();
    for (int curr = 0; curr < size; curr++) {
        if (curr == 0) {
            nextRow.push_back(1);
        } else {
            int sum = row[prev] + row[curr];
            nextRow.push_back(sum);
        }
        prev = curr;
    }
    nextRow.push_back(1);
    return nextRow;
}


vector<vector<int>> pascal(int numRows) {
    vector<vector<int>> ret(numRows);
    ret[0].push_back(1);
    ret[1].push_back(1);
    ret[1].push_back(1);

    for (int i = 2; i < numRows; i++) {
        ret[i] = calculateNextRow(ret[i-1]);
    }
    return ret;
}

void test() {
    int x = 5;
    pascal(x);
    //generate(x);
}

#endif //LEET_0118PASCALSTRIANGLE_H