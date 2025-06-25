#include <iostream>
#include <stack>
using namespace std;


void print(stack<int> st){

  while(!st.empty()){
    cout << st.top() <<" ";
    st.pop();
  } 
}
int main(){
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);

  print(st);
  return 0;
}

// We can access only the top element of the stack , can't access any element in the middle of stack

// using st.top() ,to delete the topmost element - > st.pop() , to push an element -> st.push()