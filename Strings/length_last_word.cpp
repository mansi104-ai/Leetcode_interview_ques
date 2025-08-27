#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<string> st;
        string curr_word = "";
        //Step 1 : Traverse the string to find the continuous string

        for(int i =0;i<s.length();i++){
            if(s[i] == ' '){
                if(curr_word != ""){
                    st.push(curr_word);
                    curr_word = "";
                }
                continue;
            }
            else curr_word += s[i];
            
        }

        // Push the last word if not empty
        if (curr_word != "") {
            st.push(curr_word);
        }

        // If no words found, return 0
        if (st.empty()) return 0;

        // Return length of last word
        return st.top().length();

    }
};


int main(){
  string s = "Hell Mansi  ";
  Solution a;
  cout << a.lengthOfLastWord(s) <<endl;
  return 0;
}