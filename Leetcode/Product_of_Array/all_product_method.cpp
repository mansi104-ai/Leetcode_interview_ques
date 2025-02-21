#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            // all product method 
            int n = nums.size();
            int product_nums = 1;
            for(int i = 0;i<n;i++){
                product_nums *= nums[i];
            }
    
            vector<int> result(n);
            for(int i =0 ;i<n;i++){
                if(nums[i] == 0){
                    result[i] = INT_MIN;
                }else{
                    result[i] = product_nums / nums[i];
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