#include <iostream>
using namespace std;

struct StackNode{
  int data;
  StackNode* next;
  int size;
  StackNode(int d){
    data = d;
    next = NULL;
  }
};

struct Stack{
  StackNode* top;
  int size = 0;
  Stack(){
    top = NULL;
    size = 0;
  }
  void stackPush(int x){
    StackNode* element  = new StackNode(x);
    element-> next = top;
    top = element;
    cout <<"Element pushed"<<endl;
    size++;
  }

  int stackPop(){
    if(top == NULL){
      return -1;
    }
    int topData = top -> data;
    StackNode* temp = top;
    top = top -> next;
    delete temp;
    size--;
    return topData;
  }
  int stackSize() {
    return size;
  }
  bool stackIsEmpty() {
    return top == NULL;
  }
  int stackPeek() {
    if (top == NULL) return -1;
    return top -> data;
  }
  void printStack() {
    StackNode * current = top;
    while (current != NULL) {
      cout << current -> data << " ";
      current = current -> next;
    }
  }
};

int main() {
  Stack s;
  s.stackPush(10);
  cout << "Element popped: " << s.stackPop() << "\n";
  cout << "Stack size: " << s.stackSize() << "\n";
  cout <<"Stack empty or not? "<<s.stackIsEmpty()<<"\n";
  cout << "stack's top element: " << s.stackPeek() << "\n";
  return 0;
}
