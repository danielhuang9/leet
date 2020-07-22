//
// Created by Daniel Huang on 2020-07-22.
//

#ifndef LEET_0387FIRSTUNIQUECHARACTERINASTRING_H
#define LEET_0387FIRSTUNIQUECHARACTERINASTRING_H
#include "../common/allHeaders.h"

int firstUniqChar(string s) {
    vector<char> word (s.begin(),s.end());
    unordered_map<char, int> count;

    for(auto& i:word) {
        count[i]++;
    }
    for (auto& pair : count) {
        cout << pair.first << " = " << pair.second << endl;
    }
    for(int i = 0; i < word.size(); i++) {
        char c = word[i];
        if(count[c] == 1) {
            return i;
        }
    }
    return -1;
}

void findFirstUniqueCh(string s) {
    vector<char> vec{s.begin(), s.end()};

    int size = vec.size();
    int firstUniqueIndex = INT_MAX;
    for (int i = 0; i < size; i++) {

        bool foundSameChar = false;

        for (int j = i + 1; j < size; j++) {
            if (vec[i] == vec[j]) {
                foundSameChar = true;
                break;
            }
        }

        if (!foundSameChar) {
            firstUniqueIndex = i;
            break;
        }

    }

    cout << "firstUniqueIndex " << firstUniqueIndex << endl;

}

void test() {
    string s = "loveleetcode";
    firstUniqChar(s);
    //findFirstUniqueCh(s);
}
#endif //LEET_0387FIRSTUNIQUECHARACTERINASTRING_H
