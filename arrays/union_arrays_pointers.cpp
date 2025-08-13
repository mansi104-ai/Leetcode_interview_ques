#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> FindUnion(vector<int> arr1,vector<int>arr2, int n, int m){
  vector<int> Union;

  //Initialize 2 pointers 
  int i=0;
  int j=0;
  while(i<n && j<m){
    if(arr1[i] <= arr2[j] ){
      if((Union.size()>1 && Union.back() != arr1[i]) || Union.size() == 0){
        Union.push_back(arr1[i]);
      }
      
      i++;
    }
    
    else{
      if((Union.size()>1 && Union.back() != arr2[j]) || Union.size() == 0){
        Union.push_back(arr2[j]);
      }
      j++;
    }

    while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  }
  sort(Union.begin(),Union.end());
  return Union;
}
int main(){
  int n;
  cin >> n;
  vector<int> input1(n);
  for(int i =0;i<n;i++){
    cin >> input1[i];
  }

  int m;
  cin >> m;
  vector<int> input2(m);
  for(int i =0;i<m;i++){
    cin >> input2[i];
  }

  vector<int> output = FindUnion(input1,input2,n,m);
  for(auto it : output){
    cout << it<<" ";
  }

  return 0;
}

//Time Complexity : O(m+n)
//Space Complexity : O(m+n)