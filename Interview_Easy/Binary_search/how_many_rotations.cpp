#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int left = 0, right = nums.size() - 1;
        int index =-1;

        while(left < right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] < nums[right]) {
                index = mid;
                right = mid;
                
            } else {
                index = left;
                left = mid + 1;
            }
        }

        return index;
    }
};

int main(){

    vector<int> nums = {4,5,6,7,0,1,2};
    Solution s;
    cout << s.findMin(nums) << endl;
    return 0;
}

// Time complexity : O(log N) -- >  Due to binary search applied
// Space complexity : O(1) -- > due to no extra data structure used