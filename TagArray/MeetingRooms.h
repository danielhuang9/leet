//
// Created by Daniel Huang on 2020-08-06.
//

#ifndef LEET_MEETINGROOMS_H
#define LEET_MEETINGROOMS_H
#include "../common/allHeaders.h"

bool canAttendMeetings(vector<vector<int>>& intervals) {
    int prev = 0;
    sort(intervals.begin(), intervals.end());
    for (int i = 1; i < intervals.size(); i++) {
        int currStart = intervals[i][0];
        int prevEnd = intervals[prev][1];
        if (currStart <= prevEnd) {
            cout << "false" << endl;
            return false;
        }
        else {
            prev++;
        }
    }
    cout << "true" << endl;
    return true;
}

void test() {
    vector<vector<int>> x {{0, 4}, {5, 10}, {15, 20}};
    canAttendMeetings(x);
}
#endif //LEET_MEETINGROOMS_H
