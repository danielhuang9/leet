//
// Created by Daniel Huang on 2020-07-28.
//

#ifndef LEET_0011CONTAINERWITHMOSTWATER_H
#define LEET_0011CONTAINERWITHMOSTWATER_H
#include "../common/allHeaders.h"

int maxArea(vector<int>& height, int size) {
    int ret = 0, i = 0;
    int j = size - 1;
    int max = 0;
    while (i < j) {
        int width = j - i;
        int wHeight = min(height[i], height[j]);
        int area = width * wHeight;

        if (area > max) {
            max = area;
        }

        if (height[i] <= height[j]) {
            i++;
        } else {
            j--;
        }
    }

    return max;

}

void test() {
    vector<int> x {1,8,6,2,5,4,8,3,7};
    int size = x.size();
    maxArea(x, size);
}

#endif //LEET_0011CONTAINERWITHMOSTWATER_H
