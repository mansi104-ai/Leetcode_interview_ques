#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstring>
#include <set>
#include <hash_map>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;

    char start= s[0];
    char end= s[n-1];
    bool ret = false;
    for(int i =1;i<n-1;i++){
      if(s[i] == start || s[i] == end){
        ret = true;
      }
      for(int j=i+1;j<n-1;j++){
        if(s[i] == s[j]){
          ret = true;
        }
      }
    }
    if(ret == true){
      cout << "Yes"<<endl;
    }else{
      cout << "No" <<endl;
    }
  }
  return 0;
}