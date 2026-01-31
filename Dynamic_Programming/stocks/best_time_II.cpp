#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <cstring>
using namespace std;

//-> 2^n time complexity
// class Solution {
// public:
//     int BuySell(vector<int>& prices, int i, int bought, int buy) {
//         // base case
//         if (i == prices.size()) return 0;

//         if (bought == 0) {
//             // Option 1: Buy
//             int buyNow = -prices[i] + BuySell(prices, i + 1, 1, prices[i]);

//             // Option 2: Don't buy
//             int noBuy = BuySell(prices, i + 1, 0, buy);

//             return max(buyNow, noBuy);
//         } 
//         else {
//             // Option 1: Sell
//             int sellNow = prices[i] + BuySell(prices, i + 1, 0, -1);

//             // Option 2: Don't sell
//             int noSell = BuySell(prices, i + 1, 1, buy);

//             return max(sellNow, noSell);
//         }
//     }

//     int maxProfit(vector<int>& prices) {
//         return BuySell(prices, 0, 0, -1);
//     }
// };

//dp solution ->
class Solution {
public:
    int dp[30000][2];
    int BuySell(vector<int>& prices, int i, int bought, int buy) {
        // base case
        if (i == prices.size()) return 0;
        if(dp[i][bought]!= -1)return dp[i][bought];
        int profit;
        if (bought == 0) {
            // Option 1: Buy
            int buyNow = -prices[i] + BuySell(prices, i + 1, 1, prices[i]);

            // Option 2: Don't buy
            int noBuy = BuySell(prices, i + 1, 0, buy);

            profit =  max(buyNow, noBuy);
        } 
        else {
            // Option 1: Sell
            int sellNow = prices[i] + BuySell(prices, i + 1, 0, -1);

            // Option 2: Don't sell
            int noSell = BuySell(prices, i + 1, 1, buy);

            profit= max(sellNow,noSell);
        }
        // dp[i][bought] = profit;
        return dp[i][bought] = profit;
    }

    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return BuySell(prices, 0, 0, -1);
    }
};

//Recursion method has tle

int main(){
  vector<int> prices = {7,1,5,3,6,4};
  Solution s;
  cout <<s.maxProfit(prices);
  return 0;

}