#include <iostream>
#include <vector>
#include<queue>
using namespace std;

// class LastStoneWeight{
//   vector<int> stones;
//   priority_queue<int> maxHeap;
//   public:
//   LastStoneWeight(vector<int> stones){
//     for(int stone:stones){
//       maxHeap.push(stone);
//     }
//   }
//   int LastW(){
//     int top_ele =0,secondtop = 0;
//     if(maxHeap.size() == 1) return maxHeap.top();

//     while(maxHeap.size()!=1){
//       top_ele = maxHeap.top();
//       maxHeap.pop();
//       secondtop = maxHeap.top();
//       maxHeap.pop();

//       if(top_ele != secondtop){
//       maxHeap.push(top_ele-secondtop);
//     }
//     }
//     return maxHeap.top();
//   }
// };

//Better way to write the same code

class Solution{
  public:
  int lastStoneWeight(vector<int> &stones){
    priority_queue<int> maxHeap(stones.begin(),stones.end());

    while(maxHeap.size() > 1){
      int stone1 = maxHeap.top();
      maxHeap.pop();
      int stone2 = maxHeap.top();
      maxHeap.pop();

      if(stone1 != stone2 ){
        maxHeap.push(stone1-stone2);
      }
    }

    return maxHeap.top();
  }
};

int main(){
  vector<int> stones = {1};
  Solution s;
  int lastStone =s.lastStoneWeight(stones) ;
  cout << lastStone<<endl;
  return 0;
}

