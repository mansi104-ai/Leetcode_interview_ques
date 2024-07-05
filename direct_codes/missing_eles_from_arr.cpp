#include <iostream>
#include <vector>
using namespace std;
vector<int> n_miss(vector<int> &nums, int h) {
        vector<int> ans;
        int current = 1;
        int index = 0;

        while (current <= h && index < nums.size()) {
            if (nums[index] != current) {
                ans.push_back(current);
                current++;
            } else {
                current++;
                index++;
            }
        }

        // If we haven't found enough missing numbers, add the remaining ones
        while (current <= h) {
            ans.push_back(current);
            current++;
        }

        return ans;
    }
