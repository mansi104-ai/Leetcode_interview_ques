#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n,s;
    cin >> n>> s;
    vector<int> inp(n);
    for(int i =0;i<n;i++){
      cin >>inp[i];
    }

    sort(inp.begin(),inp.end());
    if(inp[n-1] > s){
      if(inp[0] >= s){
        cout << inp[n-1] -s <<endl;
      }else{
        cout << min((2 * (inp[n-1] -s)) +  (s-inp[0]), (inp[n-1] -s) +  (2*(s-inp[0]))) <<endl;
      }
    }
    else{
      cout << s - inp[0] <<endl;
    }
  }
  
  return 0;
}