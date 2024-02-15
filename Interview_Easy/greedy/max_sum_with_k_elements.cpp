class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int prev;
        int sum = nums[nums.size()-1];
        prev = sum;
        while(k>1){
            sum += prev+1;
            prev= prev+1;
            k--;
        }
        return sum;
        
    }
};