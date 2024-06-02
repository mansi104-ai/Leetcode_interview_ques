#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int climbStairs(int n, vector<int> &dp){
    if(n==0 || n==1){
        return 1;
    }

    if(dp[n] == 0){  // Check if the value at index n is 0 (uninitialized)
        dp[n] = climbStairs(n-1,dp) + climbStairs(n-2,dp);
    }
    return dp[n];

}

int main(){
    int n;
    cin>> n;
    vector<int> dp(n+1, 0);  // Initialize the dp vector with 0s
    cout << climbStairs(n, dp) << endl;
    return 0;
}