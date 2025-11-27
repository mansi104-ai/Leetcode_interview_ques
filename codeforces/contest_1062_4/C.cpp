#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> input(n);
    int even = 0, odd = 0;
    for(int i = 0;i<n;i++){
      cin >> input[i];
      if(input[i]%2 == 0){
        even++;
      }else{
        odd++;
      }
    }

    if(odd!= 0 && even != 0){
      sort(input.begin(),input.end());
    }
    for(auto& a:input){
        cout <<a<<" ";
      }
    cout <<endl;
  }
  return 0;
}

