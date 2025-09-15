#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class KthLargest{
  int value;
  priority_queue<int,vector<int>,greater<int>>minHeap; //Min-heap

  public:
  KthLargest(int k,vector<int> &nums){
    value = k;
    for(int i =0;i<nums.size();i++){
      minHeap.push(nums[i]);
      if(minHeap.size()>k)minHeap.pop();
    }

    cout << "Constructor called"<<endl;
  }
  
  int add(int val){
    minHeap.push(val); //Add the new value to the top of the heap
    if(minHeap.size() > value){ //Keep the size to the size of k
      minHeap.pop();
    }
    return minHeap.top();
  }

  ~KthLargest(){
    cout << "Destructor called"<<endl;
  }
};

int main(){
  vector<int> nums = {4,5,8,2};
  KthLargest obj(3,nums);
  
  cout << obj.add(3) <<endl;
  cout << obj.add(5) <<endl;
  cout << obj.add(10)<<endl;
  cout << obj.add(8) <<endl;
  return 0;

}

//Time complexity : 
//Constructor -> O(Nlogk) -> loops through all elements , insertion into heap takes O(logk), if heap grows beyond k -> O(logk)
//Add function -> O(k)

//Space complexity :
//Constructor -> O(k) ->Heap stores at most k elements
//Add->Heap stores at most k elments ->O(k)