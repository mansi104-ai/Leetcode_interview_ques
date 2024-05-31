#include <iostream>
#include <vector>
using namespace std;

int f(int ind,vector<int> &nums, vector<int> &dp){
    if(ind == 0) return nums[ind];

    if(ind <0) return 0;

    if(dp[ind] != -1) return dp[ind];
    int pick = nums[ind] + f(ind-1, nums,dp);
    int not_pick = 0+ f(ind-1, nums, dp);

    return dp[ind] = max(pick, not_pick);

}

int maximumNonAdjacentSum(vector<int> & nums){
    int n = nums.size();
    int prev= nums[0];
    int prev2 = 0;
    for(int  i =1;i<n;i++){
        int take = nums[i];
        if(i>1) take+= prev2;

        int notTake = 0+ prev;

        int curi = max(take,notTake);

        prev2 = prev;
        prev = curi;
    }
    return prev;
}

int main(){
    vector<int> nums = {1,4,6,7,3,6,9,20};
    cout << maximumNonAdjacentSum(nums)<< endl;
    return 0;
}