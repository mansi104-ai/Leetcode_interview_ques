#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

struct Stack{
  queue<int> input, output;

  void Push(int x){
    while(!input.empty()){
      output.push(input.front());
      input.pop();
    }

    input.push(x);

    while(!output.empty()){
      input.push(output.front());
      output.pop();
    }
  }

int Pop(){

  if(input.empty()){
    cout << "Empty stack"<<endl;
    exit(0);
  }
  int s = input.front();
  input.pop();
  return s;
}

int Size(){
  return input.size();
}

int Top(){
  return input.front();
}
};

int main(){
  Stack s;
  s.Push(2);
  s.Push(3);
  s.Push(5);
  s.Push(6);
  cout <<"The first element of the queue: " <<s.Pop()<<endl;
  cout <<"The current size:"<<s.Size()<<endl;
  cout <<"The second element of the queue: " <<s.Pop()<<endl;
  cout <<"The current size:"<<s.Size()<<endl;
  cout <<"The third element of the queue: " <<s.Pop()<<endl;
  cout <<"The current size:"<<s.Size()<<endl;
  cout <<"The fourth element of the queue: " <<s.Pop()<<endl;
  return 0;

}

