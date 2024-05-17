#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
  int BulbCost(vector<int> &bulbs){
    int cost = 0;
    bool b =0;
    for(int i=0;i<bulbs.size();i++){
      if(cost%2 == 0){
        b = b;
      }
      else{
      b = not b;
    }

      if(b%2 == 1){
         continue;
      }
      else{
      cost +=1;
    }
    }
    return cost;
  }
};
