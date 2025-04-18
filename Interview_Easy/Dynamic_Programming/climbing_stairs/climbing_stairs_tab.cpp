#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n, vector<int> &dp){
    if(n == 0 || n == 1){
        return 1;
    }

    dp[0] = dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int n; 
    cin >> n;

    vector<int> dp(n + 1);
    cout << climbStairs(n, dp) << endl;
    return 0;
}