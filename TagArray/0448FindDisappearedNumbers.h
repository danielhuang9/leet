//
// Created by Daniel Huang on 2020-07-18.
//

#ifndef LEET_0448FINDDISAPPEAREDNUMBERS_H
#define LEET_0448FINDDISAPPEAREDNUMBERS_H
#include "../common/allHeaders.h"

vector<int> findDisappearedNumbers(vector<int>& x) {
    map<int, bool> numbersMap;
    int max = 0;
    vector<int> ret;

    for (auto& i : x) {
        if (i > max) {
            max = i;
        }
        numbersMap[i] = true;
    }

    for (int i = 1; i <= max; i++) {
        if (numbersMap.count(i) == 0){
            ret.push_back(i);
        }
    }
    cout << ret[0] << endl;

    return ret;

}

void test04() {
    vector<int> x {4,3,2,7,8,2,3,1};
    findDisappearedNumbers(x);
}
#endif //LEET_0448FINDDISAPPEAREDNUMBERS_H
