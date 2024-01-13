#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        double maxAvg = 0;
        double currentSum = 0;

        // Calculate the initial sum for the first k elements
        for (int i = 0; i < k; ++i) {
            currentSum += nums[i];
        }

        // Initialize maxAvg with the average of the first k elements
        maxAvg = currentSum / k;

        // Iterate over the array to find the maximum average
        for (int i = k; i < nums.size(); ++i) {
            // Update the current sum by adding the next element and subtracting the first element of the current window
            currentSum = currentSum + nums[i] - nums[i - k];

            // Update maxAvg if the current average is greater
            maxAvg = std::max(maxAvg, currentSum / k);
        }

        return maxAvg;
    }
};
