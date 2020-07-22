//
// Created by Daniel Huang on 2020-07-21.
//

#ifndef LEET_0058LENGTHOFLASTWORD_H
#define LEET_0058LENGTHOFLASTWORD_H
#include "../common/allHeaders.h"

vector<string> split(string s, const char& c) {
    vector<string> ret;
    string fill = "";

    for (auto& i : s) {
        if (i != c) {
            fill += i;
        }
        else if (i == c && fill != "") {
            ret.push_back(fill);
            fill = "";
        }
    }

    if (fill != "") {
        ret.push_back(fill);
    }

    return ret;

}


int lengthOfLastWord(string s) {
    int ret;
    vector<string> words = split(s, ' ');

    string lastWord = words[words.size()-1];
    vector<char> lastWordVector (lastWord.begin(), lastWord.end());

    ret = lastWordVector.size();

    return ret;
}

void test() {
    string s = "hello world";

    cout << lengthOfLastWord(s);
}
#endif //LEET_0058LENGTHOFLASTWORD_H
