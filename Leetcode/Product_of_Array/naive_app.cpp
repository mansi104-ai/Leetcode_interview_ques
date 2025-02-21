#include <vector>
#include <iostream>
using namespace std;

class Solution{
    public:
    vector<int> productExceptSelf(vector<int> &nums){
        int n = nums.size();
        vector<int> result(n,1);

        for(int i = 0;i<n;i++){
            int res = 1;
            for(int j= 0;j<n;j++){
                if( i == j){
                    continue;
                }
                res *= nums[j];

            }
            result[i] = res;
        
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