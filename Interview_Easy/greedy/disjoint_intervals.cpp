#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int solve(vector<vector<int>>& A) {
        sort(A.begin(), A.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        int count = 1;
        int prev_s = A[0][0], prev_e = A[0][1];

        for (const auto& interval : A) {
            int s = interval[0];
            int e = interval[1];

            if (s <= prev_e) {
                continue;
            } else {
                prev_s = s;
                prev_e = e;
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> intervals = {{1, 3}, {2, 4}, {3, 6}, {5, 7}, {6, 8}};

    cout << "Number of non-overlapping intervals: " << solution.solve(intervals) << endl;

    return 0;
}
