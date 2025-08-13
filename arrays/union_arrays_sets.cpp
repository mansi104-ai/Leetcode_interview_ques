#include <iostream>
#include <set>
#include <vector>
using namespace std;


vector<int> FindUnion(vector<int> arr1,vector<int> arr2,int n,int m){
  set<int> st;
  vector<int> Union;
  for(int i =0;i<n;i++){
    st.insert(arr1[i]);
  }

  for(int i =0;i<m;i++){
    st.insert(arr2[i]);
  }
  for(auto & it : st){
    Union.push_back(it);
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

//Time Complexity : O(m+n(Log(m+n)))
//Space Complexity : O(m*n) (if union array list is considered)
