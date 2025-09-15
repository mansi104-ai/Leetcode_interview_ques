#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int k_th_largest(vector<int> &nums, int k){
  priority_queue<int,vector<int>,greater<int>>min_heap;

  for(int num:nums){
    min_heap.push(num);
    if(min_heap.size()>k){
      min_heap.pop();
    }
  }

  return min_heap.top();
}
