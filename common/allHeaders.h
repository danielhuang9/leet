//
// Created by Daniel Huang on 2020-07-16.
//

#ifndef LEET_ALLHEADERS_H
#define LEET_ALLHEADERS_H

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <stack>
#include <sstream>

using namespace std;

/*
    string  a{"abc xyz 123"};
    char delimitor{' '};
 */
vector<string> splitString(string& a, char delimitor) {
    vector<string> tokensVec;
    string token;
    istringstream tokenStream(a);

    while (std::getline(tokenStream, token, delimitor)) {
        tokensVec.push_back(token);
    }
    return tokensVec;
}

#endif //LEET_ALLHEADERS_H
