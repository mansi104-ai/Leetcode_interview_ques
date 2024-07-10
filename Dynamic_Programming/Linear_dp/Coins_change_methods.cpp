#include <iostream>
#include<algorithm>
#include <vector>
#include <algorithm>
// #include <memsets>
#define ll long long
using namespace std;

class Solution{
public:
      int coinChange(vector<int> &coins, int amount){
       int T = coins.size();
       int dp[amount+1];
       memset(dp,0,sizeof(dp));
       
       dp[0] = 1;
       for(int coin: coins){
         for(int j = coin ;j<= amount; j++){
             dp[j] += dp[j-coin];
          }
       }
       return dp[amount];

}
};

int main(){
    Solution s;
    vector<int> coins = {1,2,6,17};
    int amount  = 97;
    cout<<s.coinChange(coins, amount)<<endl;

}
// 3
// 1 2 3
// 5
// 8
//
// 5

