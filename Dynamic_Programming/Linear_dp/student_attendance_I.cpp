#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int absents = 0;
        int lateStreak = 0;

        for (char c : s) {
            if (c == 'A') {
                absents++;
                if (absents > 1) return false;
            }

            if (c == 'L') {
                lateStreak++;
                if (lateStreak > 2) return false;
            } else {
                lateStreak = 0;
            }
        }

        return true;
    }
};


int main() {
    Solution se;
    string s = "PPALLP";
    cout << se.checkRecord(s) << endl;
    return 0;
}