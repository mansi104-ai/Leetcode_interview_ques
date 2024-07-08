#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <climits>
using namespace std;

class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {

        // to reduce the lookup time to O(1)
        unordered_set<int> travel_days(days.begin(), days.end());
        int max_day = days.back();  // Get the last day in the travel days
        vector<int> dp(max_day + 1, INT_MAX);// instead of 365 use the max value occurred in the array for the day
        dp[0] = 0;
        
        for (int i = 1; i <= max_day; ++i) {
            if (travel_days.find(i) == travel_days.end()) {
                dp[i] = dp[i - 1];
            } else {

                // the function will return the min out of infinity and 1 day pass ticket
                dp[i] = min(dp[i], dp[i - 1] + costs[0]);

                //check for 7 day pass ticket
                if (i >= 7)dp[i] = min(dp[i], dp[max(0, i - 7)] + costs[1]);  
                //check for 30 day pass ticket
                if (i >= 30)dp[i] = min(dp[i], dp[max(0, i - 30)] + costs[2]);
            }
        }
        // check the dp array set to the max value of days
        return dp[max_day];
    }
};

int main(){
    Solution s;
    vector<int> days{1,4,6,7,8,20};
    vector<int> costs{2,7,15};
    cout<<s.mincostTickets(days, costs)<<endl;
    return 0;
}