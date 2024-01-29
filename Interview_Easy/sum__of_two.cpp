#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (map.find(complement) != map.end()) {
                return {map[complement], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    std::vector<int> nums = {1,4,2,3,4,4,3,4};
    int target = 8;

    Solution sol;
    std::vector<int> result = sol.twoSum(nums, target);

    if (result.size() == 2) {
        std::cout <<  result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << std::endl;
    }

    return 0;
}