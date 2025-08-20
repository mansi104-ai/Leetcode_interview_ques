#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

// Algorithm 1 : Brute Force
int main(){
  string s = "My name is Mansi";
  cout << "Before reversing words: "<<endl;
  cout << s <<endl;

  s+= " ";
  stack<string> st;
  int i ;
  string str = "";
  for(int i =0;i<s.length();i++){
    if(s[i]==' '){
      st.push(str);
      str= "";
    }else{
      str += s[i];
    }

    
  }
  string ans = "";
    while(st.size()!= 1){
      ans+= st.top()+" ";
      st.pop();
    }
    ans += st.top();
    cout << "After reversing words: "<<endl;
    cout << ans;
    return 0;
}

//Algorithm 2: In Place Algorithm / Using an additional string
string result(string s){
  int left = 0;
  int right = s.length()-1;

  string temp = "";
  string ans = "";

  //iterate the string and keep on adding to form a word
  //If empty space is encountered then add the current word to the result
  while(left <= right){
    char ch = s[left];
    if(ch!= ' '){
      temp += ch;
    }else if(ch == ' '){
      if(ans!= "")ans = temp + " "+ans;
      else ans = temp;
      temp = "";
    }
    left++;
  }

  //If not empty string then add to the result(last word is added)
  if(temp!= ""){
    if(ans != "")ans = temp + " "+ans;
    else ans = temp;
  }

  return ans;
}
