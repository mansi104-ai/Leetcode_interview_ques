#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int sum_digits(int a) {
        int res = 0;
        while (a) {
            res += a % 10;  
            a /= 10;        
        }
        return res;
    }

    int smallestIndex(vector<int>& nums) {

        int min_idx = INT_MAX;
        for(int i =0;i<nums.size();i++){
            int res =0;
            res = sum_digits(nums[i]);
            if(res == i){
                min_idx = min(min_idx,i);
            }
        }
        if(min_idx == INT_MAX){
            return -1;
        }else{
            return min_idx;
        }
    }
};

int main(){
    Solution  s;
    int n = 3;
    // vector<int> nums(3);
    // for(int i =0;i<3;i++){
    //     cin >> nums[i];
    // }
    // int min_id = s.smallestIndex(nums);
    int min_no = s.sum_digits(101);

    cout <<  min_no;
    return 0;

}