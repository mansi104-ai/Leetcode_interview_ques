#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool partitionSum(int n,int k,vector<int> &arr){
        vector<bool> prev(k+1,0) ,cur(k+1,0);
        prev[0] = cur[0] = true;
        prev[arr[0]] = true;
        for(int ind = 1; ind < n;ind++){
            for(int target = 1;target <= k;target++){
                bool notTake = prev[target];
                bool take = false;
                if(arr[ind] <= target) take = prev[target-arr[ind]];
                cur[target] = take| notTake;
            }
            prev = cur;
        }
        return prev[k];
    }
    
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        if(n<= 1) return false;
        if(n ==2 && nums[0]!= nums[1]) return false;
        int sum = 0;
        for(int i =0;i<n ;i++){
            sum += nums[i];
        }
        if(sum %2 ) return false;
        int target = sum /2;

        return partitionSum(n,target,nums);
        
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 3,5,6, 7, 9};
    cout << s.canPartition(nums) << endl; // Should return true
    return 0;
}
