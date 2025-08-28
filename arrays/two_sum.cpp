#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution{
  public:
  vector<int> answer(vector<int>& nums, int target){
    vector<int> answer;
    unordered_map<int,int> mp;
    int n = nums.size();
    for(int  i =0;i<n;i++){
      int complement = target - nums[i];

      if(mp.find(complement) != mp.end()){
        answer.push_back(mp[complement]);
        answer.push_back(i);
        break;
      }
      mp[nums[i]] = i;
    }
    return answer;
  }
};
int main(){
  vector<int> nums = {1,2,3,5,7,10};
  int target = 9;
  Solution s;
  vector<int> ans = s.answer(nums,target);
  for(int num : ans){
    cout << num << " ";
  }
  return -1;

}