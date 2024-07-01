#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int f(int low, int high, vector<int>& nums, int target) {
        if (low > high) {
            return -1;
        }

        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            return f(mid + 1, high, nums, target);
        } else {
            return f(low, mid - 1, nums, target);
        }
    }

    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        return f(low, high, nums, target);
    }
};

int main() {
    vector<int> nums = {-1434343, -1, 0, 4, 5, 6, 8900, 1234567890};
    int target = 6;
    Solution s;
    cout << s.search(nums, target) << endl;
    return 0;
}
