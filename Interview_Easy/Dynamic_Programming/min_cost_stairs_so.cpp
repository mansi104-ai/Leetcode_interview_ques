// You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

// You can either start from the step with index 0, or the step with index 1.

// Return the minimum cost to reach the top of the floor.


//  https://leetcode.com/problems/min-cost-climbing-stairs/solutions/476388/4-ways-step-by-step-from-recursion-top-down-dp-bottom-up-dp-fine-tuning/

/* Step1 : identify a recurrence relation between subproblems., here the recurrence relation :
 mincost[i] = cost[i] + min(mincost[i-1],mincost[i-2]); */

/*Step 2 : */

// Convert the recurrence relation to recursion

#include <iostream>
#include <vector>
using namespace std;

// class Solution{
//     public:
//      int minCostClimbingStairs(vector<int> &cost){
//         int n = cost.size();
//         return min(minCost(cost,n-1), minCost(cost,n-2));

//      }

//      private:
//        int minCost(vector<int> cost, int n){
//         if(n<0) return 0;
//         if(n==0 || n==1) return cost[n];
//         return cost[n]+ min(minCost(cost,n-1), minCost(cost,n-2));
//        }
// };

// Recursive Top Down - O(2^n) Time Limit Exceeded


/*Step 3 : optimization 1: Top Down DP - Add memoization to recursion - From exponential to linear. */

// class Solution{
//     vector<int> dp;
//     public:

//     int minCostClimbingStairs(vector<int> &cost){
//         int n = cost.size();
//         int dp(n);
//         return min(minCost(cost,n-1), minCost(cost, n-2));
//     }
//     int minCost(vector<int> & cost, int n){
//         if(n<0) return 0;
//         if(n== 0|| n==1) return cost[n];
//         if(dp[n]!= 0) return dp[n];
//         dp[n] = cost[n] + min(minCost(cost,n-1),minCost(cost,n-2));
//         return dp[n];
//      }

// };

/*Step 4: Convert recursion to iteration*/

// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size();
//         vector<int> dp(n);
//         for (int i = 0; i < n; i++) {
//             if (i < 2) {
//                 dp[i] = cost[i];
//             } else {
//                 dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
//             }
//         }
//         return min(dp[n - 1], dp[n - 2]);
//     }
// };

/*Space optimization*/

class Solution{
    public:
      int minCostClimbingStairs(vector<int> &cost){
        int n =cost.size();
        int prev2 = cost[0];
        int prev = cost[1];
        if(n<=2 ) return min(prev,prev2);
        for(int i =2; i<n;i++){
            int curri = cost[i] + min(prev,prev2);
            prev2 = prev;
            prev = curri;
        }
        return min(prev, prev2);
      }

};

int main() {
    Solution s;
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << s.minCostClimbingStairs(cost) << endl;
    return 0;
}