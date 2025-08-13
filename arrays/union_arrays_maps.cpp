#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> FindUnion(vector<int> arr1,vector<int> arr2,int n,int m){
  map<int,int> Freq;
  vector<int> Union;
  for(int i =0;i<n;i++){
    Freq[arr1[i]]++;
  }

  for(int i =0;i<m;i++){
    Freq[arr2[i]]++;
  }
  for(auto & it : Freq){
    Union.push_back(it.first);
  }
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


//Time complexity : O(m(logm) + n(logn))
//Space Complexity : (Worst case Complexity) O(m*n)
