#include <iostream>
#include <queue>
using namespace std;

int main(){
  priority_queue<int> maxHeap; // Max-heap

  maxHeap.push(10);
  maxHeap.push(6);
  maxHeap.push(20);

  cout << "Max Elements (from top to bottom): "<<endl;

  while(!maxHeap.empty()){
    cout <<maxHeap.top() << " ";
    maxHeap.pop();
  }

  return 0;

}

//This can be used for the finding the kth smallest element 
//Time complexities for all operations for the operations will be O(log N)

//Important questions and explanation :https://medium.com/@RobuRishabh/heap-data-structure-and-priority-queue-in-c-d2fe7a569c86