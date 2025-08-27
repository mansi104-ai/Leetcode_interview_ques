#include <iostream>
#include <string>
#include <stack>
#include <unordered_set>
using namespace std;

class Solution{
  public:

  stack<string> s_stack(string s){
    stack<string> st;
    string curr_word = "";
    //Loop thorugh the elements of s to store the elements to stack

    for(int i =0;i<s.length();i++){
      if(s[i] == ' '){
        st.push(curr_word);
        curr_word ="";
      }else{
        curr_word += s[i];
      }
    }

    if(curr_word != ""){
      st.push(curr_word);
    }

    return st;
  }
  bool IsPattern(string pattern, string s){
    //using hash map to save the key map for the pattern string
    unordered_set<char> pattern_set;
    unordered_set<string> s_set;
    
    for(int i =0;i<pattern.length();i++){
      pattern_set.insert(pattern[i]);
    }
    stack<string> output = s_stack(s);
    while(!output.empty()){
      s_set.insert(output.top());
      output.pop();
    }

    //Check the lengths of the s_set and pattern_set

    if(s_set.size()!= pattern_set.size()){
      return false;
    }
    return true;
  }
};

int main(){
  string pattern = "abba";
  string s= "dog cat cat dog";

  Solution a;
  cout << a.IsPattern(pattern,s) <<endl;

  return 0;

}