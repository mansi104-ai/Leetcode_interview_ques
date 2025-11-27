#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s != t){
      cout << "no"<<endl;
    }
    else{
      cout << "yes"<<endl;
    }
  }
  return 0;
}