#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size();i++){
            for (int j=0; j<i;j++){
                if (nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return 0;
    }
};