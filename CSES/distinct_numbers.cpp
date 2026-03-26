#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<long long> inp(n);
  for(int i=0;i<n;i++){
    cin >> inp[i];
  }
  sort(inp.begin(),inp.end());
  int cnt =1;
  for(int i=1;i<inp.size();i++){
    if(inp[i]!= inp[i-1]){
      cnt++;
    }
  }
  cout << cnt <<"";
  return 0;
}