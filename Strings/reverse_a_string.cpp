#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Brute Approach 
       // Using a stack and an answer vector

    //    stack<string> st;
    //    string ans = "";
    //    int i;
    //    string str = "";

    //    for(int i =0;i<s.length();i++){
    //     if(s[i] == ' '){
    //         if(!str.empty()){
    //         st.push(str);
    //         str = "";
    //         }
    //     }
    //     else{
    //         str+= s[i];
    //     }
    //    }
    //    if(!str.empty()) {
    //         st.push(str);
    //     }

    //    while(st.size()!= 1){
    //     ans+= st.top() + " ";
    //     st.pop();
    //    }
    //    ans += st.top(); //The last word shouldn't have a space after it
    //    return ans;

    // Optimized solution
class Solution{
  public:
  string ReversedString(string s){
    int left = 0;
        int right = s.length() - 1;  // Correct the right boundary

        string ans = "";
        string temp = "";

        // Skip the leading spaces
        while (left <= right && s[left] == ' ') {
            left++;
        }

        // Skip the trailing spaces
        while (right >= left && s[right] == ' ') {
            right--;
        }

        while (left <= right) {  // Use <= to include the last character
            char ch = s[left];

            if (ch != ' ') {
                temp += ch;
            } else {
                if (!temp.empty()) {  // Only add if temp has a word
                    if (!ans.empty()) {
                        ans = temp + " " + ans;  // Add current word to the front of ans
                    } else {
                        ans = temp;  // First word doesn't need leading space
                    }
                    temp = "";  // Clear temp for the next word
                }
            }
            left++;
        }

        // Add the last word to the result
        // We need to add the condition for the last word because it may may be led by some trailing space
        if (!temp.empty()) {
            if (!ans.empty()) {
                ans = temp + " " + ans;
            } else {
                ans = temp;
            }
        }

        return ans;
  }
};

int main(){
  string s;
  cin >> s;
  Solution a;
  string output = a.ReversedString(s);
  cout << output << endl;
}

