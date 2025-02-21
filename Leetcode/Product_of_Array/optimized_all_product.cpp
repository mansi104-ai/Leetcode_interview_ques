#include <vector>
#include <iostream>
using namespace std;
class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
            vector<int> result(n);
    
            //Calculate prefix products
            int prefixProduct = 1;
            for(int i = 0; i<n ;i ++){
                result[i] = prefixProduct;
                prefixProduct *= nums[i];
            }
    
            // Calculate the suffix product 
            int suffixProduct = 1;
            for(int i = n-1; i>= 0;i--){
                result[i] *= suffixProduct;
                suffixProduct *= nums[i];
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