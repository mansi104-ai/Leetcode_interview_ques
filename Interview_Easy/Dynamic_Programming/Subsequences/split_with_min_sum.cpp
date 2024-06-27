#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution{
    public: 
      int vectorToInt(vector<int> &digits){
  int result =0;
  for(int digit: digits){
     result = result*10 + digit;
  }
  return result;

}

      int SubSetSum(int num){
   vector<int> digits;
   while(num!=0){
   digits.push_back(num%10);
   num = num/10;
   }
   
   sort(digits.begin(),digits.end());
   vector<int> num1Digits, num2Digits;
   
   for(size_t i= 0;i<digits.size();i++){
   
   if(i%2 == 0){
    num1Digits.push_back(digits[i]);
   }
   
   else{
     num2Digits.push_back(digits[i]);
   }
}  
   int Num1 = vectorToInt(num1Digits);
   int Num2 = vectorToInt(num2Digits);
   
   return Num1 + Num2;

}

     
};

int main(){
 Solution s;
 int num = 43567;
 cout << s.SubSetSum(num)<< endl;
 return 0;

}