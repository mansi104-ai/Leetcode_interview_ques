#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
            vector<int> p(n, 1);
            vector<int> s(n, 1);
    
            // Compute prefix product
            p[0] = nums[0];
            for (int i = 1; i < n; i++) {
                p[i] = p[i - 1] * nums[i];
            }
    
            // Compute suffix product
            s[n - 1] = nums[n - 1];
            for (int i = n - 2; i >= 0; i--) {
                s[i] = s[i + 1] * nums[i];
            }
    
            // Compute result using prefix and suffix arrays
            vector<int> result(n, 1);
            for (int i = 0; i < n; i++) {
                if (i == 0) {
                    result[i] = s[i + 1];
                } else if (i == n - 1) {
                    result[i] = p[i - 1];
                } else {
                    result[i] = p[i - 1] * s[i + 1];
                }
            }
    
            return result;
        }
    };

    int main(){
        Solution s;
        vector<int> nums = {1,2,3,4,5};
        vector<int> result = s.productExceptSelf(nums);
    
        for(int num  : result){
            cout << num << ",";
        }
        cout << endl;
        return 0;
    }