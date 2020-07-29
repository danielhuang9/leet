//
// Created by Daniel Huang on 2020-07-29.
//

#ifndef LEET_0012INTEGERTOROMAN_H
#define LEET_0012INTEGERTOROMAN_H
#include "../common/allHeaders.h"

string intToRoman(int num) {
    string ret = " ";
    vector<pair<int,string>> values {{1,"I"}, {4, "IV"},
                                     {5, "V"}, {9, "IX"},
                                     {10, "X"}};
    int size = values.size();

    while (num > 0) {
        for(int i = size-1; i >= 0; i--) {
            pair<int,string> p = values[i];
            int f = p.first;
            string s = p.second;
            if(num-f >= 0) {
                ret += s;
                num = num - f;
            }
        }

        cout << "curr num = " << num << endl;
    }
    return ret;
}

void test() {
    intToRoman(4);
}

#endif //LEET_0012INTEGERTOROMAN_H
