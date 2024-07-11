#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
   public:
   int sellStock(vector<int> &nums){
   int maxprofit =0;
   int mini = nums[0];
   for(int i =0;i<nums.size();i++){
       int profit  = nums[i]-mini;
       maxprofit = max(profit , maxprofit);
       mini = min(nums[i],mini);

}

return maxprofit;


}

};

int main(){
  Solution s;
  vector<int> nums = {2,4,6,1,10};
  cout << s.sellStock(nums);
  return 0;

}