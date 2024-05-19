#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool> res;
        bool curr_status;
        while(const auto& query: queries) {
          int start = query[0];
          int end = query[1];
          
          for(int i = start; i < end+1; i++) {
            if(nums[i]*nums[i+1] %2 != 0){
                curr_status = false;
                break;
        } 
            else if(nums[i]%2 == 0 && nums[i+1]%2 == 0){
                curr_status = false;
                break;
            }
            else{
                curr_status = true;
        }
          }
         res.push_back(curr_status);

        }
        return res;
}
};


// above is my solution
// it showed time limit exceed
//
//
// the correct solution is below
//
class Solution {
public:
  vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
    vector<int> result(nums.size(), 0);
    for(int i = 1; i < nums.size(); i++) {
      if((nums[i] + nums[i-1]) % 2 == 0) result[i] = 1;
    }
    
    for(int i = 1; i < result.size(); i++) result[i] += result[i-1];
    
    vector<bool> ret;
    
    for(int i = 0; i < queries.size(); i++) {
      int from = queries[i][0];
      int to = queries[i][1];
      
      if(result[from] != result[to]) ret.push_back(false);
      else ret.push_back(true);
    }
    return ret;
  }
};
