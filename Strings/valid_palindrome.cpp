#include <iostream>
#include <string>
#include <vector>
using namespace std;

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int n = s.length();
//         for (int i = 0; i < s.size(); i++) {
//         s[i] = tolower(s[i]);
//     }

//         int a = s.length() -1;
//         //If the length of the string is odd
//         if(n % 2 != 0){
//             int l , r = n/2;

//             while(l >= 0 && r <= n-1){

//                 if(!isalpha(s[l]) ) {
//                 l--;
//                 continue;
//                 }
//                 if(!isalpha(s[r])) {
//                     r++;
//                     continue;
//                 }
//                 if(s[l] != s[r] ){
//                     return false;
//                     break;
//                 }
//                 l--;
//                 r++;

//                 cout << s[l] << " "<<s[r] <<endl;
//             }
//         }


//         //If the length of the string is even

//         else{
//             int l = (n/2),r= (n/2)+1;

//             while(l >= 0 && r <= n-1){

//                 if(!isalpha(s[l]) ){
//                     l--;
//                     continue;
//                 }
//                 if(!isalpha(s[r])) {
//                     r++;
//                     continue;
//                 }
//                 if(s[l] != s[r]){
//                     return false;
//                     break;
//                 }
//                 l--;
//                 r++;
//                 cout << s[l] << " "<<s[r] <<endl;
//             }
        
//         }

//         return true;
//     }
// };

class Solution {
public:
    bool isPalindrome(string s) {
      
        int l = 0, r = s.length() - 1;

        while (l < r) {
            if (!isalnum(s[l])) { l++; continue; }
            if (!isalnum(s[r])) { r--; continue; }

            if (tolower(s[l]) != tolower(s[r])) return false;

            l++;
            r--;
        }

        return true;
    

    }
};

int main(){
  string s = "1a2";
  Solution a;

  bool output = a.isPalindrome(s);
  cout << output ;
}