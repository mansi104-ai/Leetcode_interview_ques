#include <iostream>
#include<vector>
using namespace std;

class Solution{
  public:
  int findMaxNum(vector<int> &arr){

  int maxNum =0 ;
  for(int i=0;i<arr.size();i++){
  if(arr[i]> maxNum){
     maxNum= arr[i];
  }
  
}
 return maxNum;
   
}
};

int main(){
  vector<int> arr = {2,4,1,45,8};
  Solution s;
  cout << s.findMaxNum(arr) <<endl;

}