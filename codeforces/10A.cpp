#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

    vector<pair<int, int>> intervals(n);
    for (int i = 0; i < n; ++i) {
        cin >> intervals[i].first >> intervals[i].second;
    }

    int total = 0;

    for (int i = 0; i < n; ++i) {
        // Active period consumption
        total += (intervals[i].second - intervals[i].first) * p1;

        // Idle period before the next activity
        if (i < n - 1) {
            int idle = intervals[i + 1].first - intervals[i].second;
            if (idle <= t1) {
                total += idle * p1;
            } else if (idle <= t1 + t2) {
                total += t1 * p1 + (idle - t1) * p2;
            } else {
                total += t1 * p1 + t2 * p2 + (idle - t1 - t2) * p3;
            }
        }
    }

    cout << total << endl;
    return 0;
}
