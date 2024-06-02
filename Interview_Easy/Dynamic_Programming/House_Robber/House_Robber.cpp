#include <iostream>
#include <vector>
using namespace std;

int f(int ind, vector<int> &nums){
    if(ind == 0) return nums[ind];
    if(ind<0) return 0;
    // if(dp[ind]!= -1) return dp[ind];

    int pick = nums[ind] + f(ind-2, nums);
    int not_pick = nums[ind] + f(ind-1, nums);

    return max(pick,not_pick);

}

int maximumNonAdjacentSum(vector<int> &nums){
    int n =nums.size();
    // vector<int> dp(n,-1);
    return f(n-1,nums);
}
int main(){

vector<int> nums= {2,1,3,9,7,5};
cout << maximumNonAdjacentSum(nums)<< endl;
return 0;
}