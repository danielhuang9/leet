//
// Created by Daniel Huang on 2020-07-25.
//

#ifndef LEET_0509FIBONACCINUMBER_H
#define LEET_0509FIBONACCINUMBER_H
#include "../common/allHeaders.h"

int fib(int N) {
    if (N == 0 || N == 1) {
        return N;
    }

    int a = fib(N - 1);
    int b = fib(N - 2);
    int c = a + b;
    return c;

}

void test() {
    int res = fib(4);
    cout << res;
}
#endif //LEET_0509FIBONACCINUMBER_H
