#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countTriplets(vector<int>& nums) {
        int mem[1<<16] = {};

        int n(nums.size());

        for(int i =0;i< n;i++){
            for(int j =0;j<n ;j++){
                mem[ nums[i]&nums[j]]++;
            }
        }

        int ans(0);

        for(int k =0;k< n ;k++){
            for(int  ij = 0; ij <(1<<16); ij++){

                if((nums[k] &ij) == 0){
                    ans += mem[ij];
                }
            }
        }
        return ans;
        
    }
};

int main(){
    Solution s;
    vector<int> nums={2,1,3};
    cout<<s.countTriplets(nums)<<"\n";
    return 0;
}
