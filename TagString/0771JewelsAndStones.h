//
// Created by Daniel Huang on 2020-08-12.
//

#ifndef LEET_0771JEWELSANDSTONES_H
#define LEET_0771JEWELSANDSTONES_H
#include "../common/allHeaders.h"

int numJewelsInStones(string J, string S) {
    int count = 0;
    set<char> setJ (J.begin(), J.end());
    for (auto& i:S) {
        if (setJ.count(i)) {
            count++;
        }
    }
    return count;
}

void test() {
    numJewelsInStones("abc", "abcda");
}
#endif //LEET_0771JEWELSANDSTONES_H
