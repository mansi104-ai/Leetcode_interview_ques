#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
  public:
  void divideInitial(vector<int>& initial_sum,
                   vector<vector<int>>& newArr,
                   vector<int>& weights,
                   int days){

      int a = weights.size();
      int size_of_arr = (a + days - 1) / days;

      int j = 0;
      int curr_sum = 0;

      for(int i = 0; i < a; i++){
          if(j >= days) break;

          newArr[j].push_back(weights[i]);
          curr_sum += weights[i];

          if(newArr[j].size() == size_of_arr){
              initial_sum.push_back(curr_sum);
              curr_sum = 0;
              j++;
          }
      }

      if(j < days){
          initial_sum.push_back(curr_sum);
      }
}

};


int main(){
  Solution s;
  int n;
  cin >> n;
  vector<int> weights(n);
  for(int i = 0;i<n;i++){
     cin >> weights[i];
  }
  int days;
  cout << "Enter days" ;
  cin >>days;
  vector<int> initial_sum;
  vector<vector<int>> newArr(days);
  s.divideInitial(initial_sum,newArr,weights,days);
  for(int i = 0; i < days; i++){
    cout << "output of " << i << ": "<<"with sum: "<<initial_sum[i]<<" ";
    for(int j = 0; j < newArr[i].size(); j++){
        cout << newArr[i][j] << " ";
    }
    cout << endl;
    }

  return 0;
}