#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int f(int low, int high, vector<int>& nums, int target) {
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        return f(low, high, nums, target);
    }
};

int main() {
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    Solution s;
    cout << s.search(nums, target) << endl;
    return 0;
}
