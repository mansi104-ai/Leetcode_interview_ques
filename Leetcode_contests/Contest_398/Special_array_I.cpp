//An array is considered special if every pair of its adjacent elements contains two numbers with different parity.
//You are given an array of integers nums. Return true if nums is a special array, otherwise, return false.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() < 2) {
            // If the array has less than 2 elements, we assume it is not special
            return true;
        }
        
        for (size_t i = 0; i < nums.size() - 1; ++i) {
            if ((nums[i] * nums[i + 1] )%2 != 0) {
                return false;
            }
            else if(nums[i]%2 == 0 && nums[i+1]%2 == 0){
                return false;
            }
        }
        return true;
    }
};

// Special casess:
// odd * odd = odd
// odd* even = even 
// even * even = even
// only the odd,even case can be used to return true , else false
