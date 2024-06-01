#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;
        for(int i =0 ; i<n ;i++){
            int take = nums[i];
            if(i>1) take+= prev2;

            int notTake = 0 +prev;
            int curi = max(prev, prev2);

            prev2 = prev;
            prev= curi;
        }
        return prev;
    }

    long long int houseRobber(vector<int>& valueInhouse){
        int n = valueInhouse.size();
        if(n == 1) return valueInhouse[0];

        vector<int> temp1, temp2;
        for(int i = 0; i < n; i++){
            if(i != 0) temp1.push_back(valueInhouse[i]);
            if(i != n-1) temp2.push_back(valueInhouse[i]);
        }

        return max((long long)rob(temp1), (long long)rob(temp2));
    }
};


int main(){


}