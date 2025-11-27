#include <iostream>
#include <string>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    if(a!= b || a!= c || a!= d){
      cout << "NO" <<endl;
    }else{
      cout << "YES"<<endl;
    }


  }
  return 0;
}