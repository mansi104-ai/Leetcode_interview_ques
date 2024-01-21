#include <vector>
#include <algorithm>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        int count = 1;
        int candidate = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == candidate) {
                count++;
            } else {
                count = 1;
                candidate = nums[i];
            }

            if (count > nums.size() / 2) {
                return candidate;
            }
        }

        // The majority element always exists, so no need to check for else case.
        return candidate;
    }
};