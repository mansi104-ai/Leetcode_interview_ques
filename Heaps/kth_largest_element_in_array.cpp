#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class KthLargestElement{
  public:
  int KthLargest(vector<int>&nums,int k){
    priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());
    if(nums.size() < k){
      return -1;
    }
    while(pq.size()> k){
      pq.pop();
    }
    return pq.top();
  }
};

int main(){
  vector<int> nums = {3,2,4,5,1,2,9};
  int k = 5;
  KthLargestElement obj;
  cout << obj.KthLargest(nums,k) <<endl;
  return 0;
}