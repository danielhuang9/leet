//
// Created by Daniel Huang on 2020-07-20.
//

#ifndef LEET_0118PASCALSTRIANGLE_H
#define LEET_0118PASCALSTRIANGLE_H
#include "../common/allHeaders.h"

vector<vector<int>> generate(int numRows) {
    vector<int> curRow, prevRow;
    vector<vector<int>> ret;
    int elements = 0;

    for(int i = 0; i < numRows; i++) {
        elements = i + 1;

        if (i > 1) {
            prevRow[i] = curRow[i-1];
        }

        for(int j = 0; j < elements; j++) {
            int prevL = 0, prevR = 0;

            if (j == 0 || j == elements - 1) {
                curRow.push_back(1);
            } else {
                prevL = prevRow[j-1];
                prevR = prevRow[j];
                curRow.push_back(prevL+prevR);
            }
        }
        cout << curRow[i];
        ret.push_back(curRow);
    }
    return ret;
}

void test() {
    int x = 2;
    generate(x);
}

#endif //LEET_0118PASCALSTRIANGLE_H
