#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void nearlySorted(vector<int>&arr,int k){
  //Length of the array
  int n = arr.size();

  //Creating a min heap
  priority_queue<int,vector<int>,greater<int>> pq;

  //Pushing the first k elements in pq
  for(int i=0;i<k;i++){
    pq.push(arr[i]);
  }

  int i ;
  for(i = k;i<n;i++){
    pq.push(arr[i]);

    arr[i-k] = pq.top();
    pq.pop();
  }

  //Putting the remaining elements in the array
  while(!pq.empty()){
    arr[i-k] = pq.top();
    pq.pop();
    i++;
  }
}

int main() {
    vector<int> arr = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;
    nearlySorted(arr, k);
    for (int x : arr)
        cout << x << ' ';
    return 0;
}