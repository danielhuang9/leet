//
// Created by Daniel Huang on 2020-08-16.
//

#ifndef LEET_0165COMPAREVERSIONNUMBERS_H
#define LEET_0165COMPAREVERSIONNUMBERS_H
#include "../common/allHeaders.h"

int compareVersion(string version1, string version2) {
    vector<string> v1 = splitString(version1, '.');
    vector<string> v2 = splitString(version2, '.');

    for (int i = 0; i < min(v1.size(), v2.size()); i++) {
        if (stoi(v1[i]) == stoi(v2[i])) {
            continue;
        } else {
            if (stoi(v1[i]) > stoi(v2[i])) {
                return 1;
            } else {
                return -1;
            }
        }
    }
    int ret = v1.size() > v2.size() ? 1 : -1;
    return ret;
}

void test() {
    compareVersion("1.1", "1.1");
}
#endif //LEET_0165COMPAREVERSIONNUMBERS_H
