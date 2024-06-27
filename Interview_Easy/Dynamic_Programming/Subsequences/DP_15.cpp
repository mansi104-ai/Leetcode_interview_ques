#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    bool f(int n, int k, vector<int> &arr, vector<vector<int>> &dp) {
        if (k == 0) return true;
        if (n == 0) return arr[0] == k;
        if (dp[n][k] != -1) return dp[n][k];

        bool notake = f(n - 1, k, arr, dp);
        bool take = false;
        if (arr[n] <= k) {
            take = f(n - 1, k - arr[n], arr, dp);
        }
        return dp[n][k] = (notake || take);
    }

    bool PartitionSubset(vector<int> &nums) {
        int sumall = 0;
        for (int i = 0; i < nums.size(); i++) {
            sumall += nums[i];
        }
        if (sumall % 2 != 0) return false; // If sum is odd, we can't partition it into two equal subsets
        int target = sumall / 2;
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));
        return f(n - 1, target, nums, dp);
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 3,5,6, 7, 9};
    cout << s.PartitionSubset(nums) << endl; // Should return true
    return 0;
}
