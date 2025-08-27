#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
  string s = "A man, a plan, a canal: Panama";

  string res= "";

  for(int i =0;i<s.length();i++){
    if(isalpha(s[i])){
      res.push_back(s[i]);
    }
  }

  cout <<res<<endl;
  return 0;

}