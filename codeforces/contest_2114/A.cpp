#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int  main(){
  long long  n;
  cin >> n;
  while(n--){
    string t;
    cin >> t;
    for(long long  i =0;i<t.length();i++){
      if(t[i] == '0'){
        t.erase(t.begin()+i);
      }else{
        break;
      }
    }

    long long  res =stoi(t);
    long long  a = sqrt(res);

    if(a*a != res){
      cout << -1 <<endl;
    }else{
      cout << a-1 << " "<<1 <<endl;
    }

    
  }

  return 0;

}