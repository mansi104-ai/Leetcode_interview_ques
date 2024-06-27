#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution{
  public :
   bool f(int n, int k ,vector<int> &arr){
   if (n==0) return (arr[0] == k);
   if (k==0) return true;

   int notTake = f(n-1,k,arr);
   int take = false;
   if(arr[n]<= k){
      take = f(n-1,k - arr[n],arr);
      }
   return notTake|take;
   
   }

   bool isSubsetSum(vector<int> &arr, int target){
     
    int n = arr.size();
    return f(n-1,target,arr);
    }
};

int main(){
   
  Solution s;
  vector<int> arr = {1,4,5,6,7,4};
  int target = 50;
  int n = arr.size();
  cout << s.isSubsetSum(arr,target);
  return 0;

}