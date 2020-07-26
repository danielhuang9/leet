//
// Created by Daniel Huang on 2020-07-26.
//

#ifndef LEET_0020VALIDPARENTHESES_H
#define LEET_0020VALIDPARENTHESES_H

#include "../common/allHeaders.h"

bool isValid(string s) {
    stack<char> st;

    for (auto &c:s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            char top = st.top();

            if ((c == ')' && top == '(')
                || (c == '}' && top == '{')
                || (c == ']' && top == '[')) {
                st.pop();
            } else {
                return false;
            }
        }

    }
    return true;
}

void test() {
    cout << isValid("()[}{}");
}

#endif //LEET_0020VALIDPARENTHESES_H
