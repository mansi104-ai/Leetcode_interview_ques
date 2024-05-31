#include <iostream>
#include <vector>
using namespace std;

int f(int ind, vector<int> &nums, vector<int> &dp){
    if(ind == 0) return nums[ind];
    if(ind<0)  return 0;

    if(dp[ind]!= -1) return dp[ind];

    int pick = nums[ind] + f(ind-2, nums, dp);
    int not_pick = nums[ind] + f(ind-1,nums,dp);

    return dp[ind] = max(pick,not_pick);
}

int maximumAdjacentElements(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n,-1);
    return f(n-1,nums,dp);
}

int main(){

    vector<int> nums= {1,4,6,7,8,3};
    cout << maximumAdjacentElements(nums)<< endl;
    return 0;
}