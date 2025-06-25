#include <iostream>
#include <stack>

using namespace std;
// Creating an additional stack apart from the original stack to empty and present the elements without modifying the original stack
int main(){
  //Initialize a stack
  stack<int> st;

  // Push elements into stack
  st.push(40);
  st.push(30);
  st.push(20);
  st.push(10);

  stack<int> st1(st);

  while(!st1.empty()){
    cout << st1.top() <<endl;
    st1.pop();
  }

  return 0;
}