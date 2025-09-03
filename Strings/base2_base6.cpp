#include <iostream>
#include <string>
#include <vector>
using namespace std;

void convertBase(string N){
  long long decimal = 0;

  //Loop to iterate N
  for(int i =0;i<N.length();i++){
    decimal = decimal * 2 + (N[i]-'0');
  }
  
  //Stores the base 6 int 
  vector<int> ans;

  while(decimal >0){
    ans.push_back(decimal% 6);
    decimal /= 6;
  }

  //Print the answer
  for(int i = ans.size()-1;i>=0;i--){
    cout <<ans[i];
  }

}
int main(){
  string N = "100111";
  convertBase(N);
  return 0;

}