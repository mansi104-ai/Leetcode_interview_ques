#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subsets = 1 << n;
        vector<vector<int>> ans;

        for (int i = 0; i < subsets; i++) {
            vector<int> sub;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    sub.push_back(nums[j]);
                }
            }
            ans.push_back(sub);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = s.subsets(nums);

    // Print the result
    for (const auto& subset : ans) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
