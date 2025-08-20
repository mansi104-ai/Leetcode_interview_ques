#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        string result = "";
        int n = num.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) {
                result = num.substr(0, i + 1);
                break;
            }
        }
        
        return result;
    }
};

int main(){
  string s;
  cin >> s;
  Solution a ;
  string output = a.largestOddNumber(s);
  cout << output <<endl;
  return 0;
}