#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

struct Queue{
  stack<int> input, output;

  void Push(int data){
    while(!input.empty()){
      output.push(input.top());
      input.pop();
    }

    input.push(data);

    while(!output.empty()){
      input.push(output.top());
      output.pop();
    }
  }

int Pop(){
  if(input.empty()){
    cout << "queue is empty."<<endl;
    exit(0);
  }

  int x  = input.top();
  input.pop();
  return x;
}

int Size(){
  int s = input.size();
  return s;
}

int Top(){
  return input.top();
}
};

int main(){
  Queue q;
  q.Push(2);
  q.Push(3);
  q.Push(5);
  q.Push(6);

  cout <<"The first element of the queue: " <<q.Pop()<<endl;
  cout <<"The current size:"<<q.Size()<<endl;
  cout <<"The second element of the queue: " <<q.Pop()<<endl;
  cout <<"The current size:"<<q.Size()<<endl;
  cout <<"The third element of the queue: " <<q.Pop()<<endl;
  cout <<"The current size:"<<q.Size()<<endl;
  cout <<"The fourth element of the queue: " <<q.Pop()<<endl;
  return 0;
}