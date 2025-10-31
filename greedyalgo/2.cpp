#include <bits/stdc++.h>
using namespace std;

struct Meeting {
    int start;
    int end;
    int pos;
};

bool comp(Meeting m1, Meeting m2) {
    if (m1.end < m2.end) return true;
    else if (m1.end > m2.end) return false;
    else if (m1.pos < m2.pos) return true;
    return false;
}

void maxMeetings(int start[], int end[], int n) {
    Meeting arr[n];
    for (int i = 0; i < n; i++) {
        arr[i].start = start[i];
        arr[i].end = end[i];
        arr[i].pos = i + 1;
    }

    sort(arr, arr + n, comp);

    vector<int> ans;
    int count = 1;
    ans.push_back(arr[0].pos);
    int freeTime = arr[0].end;

    for (int i = 1; i < n; i++) {
        if (arr[i].start > freeTime) {
            count++;
            ans.push_back(arr[i].pos);
            freeTime = arr[i].end;
        }
    }

    cout << "Maximum number of meetings: " << count << endl;
    cout << "Meetings order: ";
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
}

int main() {
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    int n = 6;

    maxMeetings(start, end, n);
    return 0;
}
