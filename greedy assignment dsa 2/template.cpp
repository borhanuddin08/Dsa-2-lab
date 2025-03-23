#include <bits/stdc++.h>
using namespace std;

struct club {
    int start;
    int End;
    int pos;
    int duration;
};
typedef struct club club;

// Sort clubs by duration (descending), breaking ties with End time (ascending)
bool comparator(club c1, club c2) {
    if (c1.duration > c2.duration) return true;
    else if (c1.duration < c2.duration) return false;
    return c1.End < c2.End;
}

void maxclubs(int s[], int e[], int n) {
    club meet[n];
    for (int i = 0; i < n; i++) {
        meet[i].start = s[i];
        meet[i].End = e[i];
        meet[i].pos = i + 1;
        meet[i].duration = e[i] - s[i]; // Calculate duration
    }

    // Sort intervals by duration in descending order, tie-breaking by End time
    sort(meet, meet + n, comparator);

    vector<int> answer;
    int last_end_time = -1; // Track the end time of the last selected interval
    int total_duration = 0;

    for (int i = 0; i < n; i++) {
        // Check if the current interval does not overlap with the last selected one
        if (meet[i].start >= last_end_time) {
            total_duration += meet[i].duration;
            last_end_time = meet[i].End;
            answer.push_back(meet[i].pos);
        }
    }

    cout << "Clubs selected (positions): ";
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
    cout << "Maximum total duration: " << total_duration << endl;
}

int main() {
    int n;
    cout << "Enter the number of clubs: ";
    cin >> n;

    int start[n], End[n];
    cout << "Enter the start and End times of the clubs:\n";
    for (int i = 0; i < n; i++) {
        cin >> start[i] >> End[i];
    }

    maxclubs(start, End, n);

    return 0;
}
