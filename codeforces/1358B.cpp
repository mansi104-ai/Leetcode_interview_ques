#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n ;
    cin >> n;
    vector<int> inp(n);

    for(int i =0;i<n;i++){
      cin >> inp[i];
    }

    sort(inp.begin(),inp.end());

    // Initialize the initial count of grannies in garden with 1 
    int in_g = 1;
    int out_g = 0; 
    int i =0;
    // Loop through the grannies standing outside and look for the count of ai
    while(!(in_g + out_g > n)){
      if((in_g + out_g) >= inp[i]){
        in_g+= out_g +1;
        out_g =0;
        // i++;
        // cout  <<"in_g"<< in_g <<endl;
      }else{
        out_g++;
        // i+= 1;
        // cout <<"out_g" << out_g <<endl;
      }
      i++;
      
    }
    cout << in_g <<endl;
  }

  return 0;
}