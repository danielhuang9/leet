//
// Created by Daniel Huang on 2020-07-26.
//

#ifndef LEET_0008STRINGTOINTEGER_H
#define LEET_0008STRINGTOINTEGER_H
#include "../common/allHeaders.h"

int myAtoi(string str) {
    int value = 0;

    for(auto& c:str) {
        value = value*10 + (c - '0');
    }

    return value;
}

void test() {
    myAtoi("2147483648");
}
#endif //LEET_0008STRINGTOINTEGER_H
