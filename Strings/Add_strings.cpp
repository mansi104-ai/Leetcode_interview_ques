#include <iostream>
#include <string>
using namespace std;

class Solution{
  public:
  string AddString(string num1, string num2){
    int int1 = stoi(num1);
    int int2 = stoi(num2);

    int fin = int1+int2;
    string output = to_string(fin);

    return output;
  }
};

int main(){

  string num1 = "11";
  string num2 = "1234";
  Solution s;
  string output = s.AddString(num1,num2);

  cout << "The string after adding the strings are : "<< output<<endl;

  return 0;

}