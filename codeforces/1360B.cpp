#include<iostream>
#include <vector>
#include <algorithm>
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
          
          int diff = INT_MAX;
          for(int i =1;i<n;i++){
               diff = min(diff,inp[i]-inp[i-1]);
          }
          
          cout << diff <<endl;
     }
     return 0;
}