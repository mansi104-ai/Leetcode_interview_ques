#include <iostream>
#include<algorithm>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
   int f(int index, int prev_index, vector<int> &arr,vector<vector<int>> &dp){
   
   int n =  arr.size();
   // we start from the index =-1, then go to the end , if the pointer is at the last index, we cannot go beyond
   if(index == n) return 0;

   // store the overlapping subproblems in a vector array
   if(dp[index][prev_index+1]!= -1) return dp[index][prev_index+1];
   int len = 0;

   //case of not-pick, move to the next index with length not increased
   len = 0+f(index+1,prev_index,arr,dp);

   // this is the case of pick , if the element previous one was not picked or if the current one is greater than the previous element
   if(prev_index == -1 || arr[index] > arr[prev_index]){
     len = max(len, 1+f(index+1,index,arr,dp));
    }

    //return the answer of the code , and store the value in the dp array

   return dp[index][prev_index+1] = len;

}
   int lengthOfLIS(vector<int> &nums){

   int n = nums.size();
   // start the index from 0 and prev_index from 1, can also take the first element and can start from 1st index, in that case , consider the edge cases
   int index = 0;
   int prev_index = -1;
   vector<vector<int>> dp(n,vector<int>(n+1,-1));
   return f(index, prev_index,nums,dp);


}

};


int main(){
    vector<int> nums{10,9,2,5,3,7,101,18};
    Solution s;
    cout<<s.lengthOfLIS(nums)<<endl;
}
