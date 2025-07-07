#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Queue{
  int start ;
  int end;
  int size;
  vector<int> arr;
  public:
      Queue(){
        start = 0;
        end = 0;  
        size= 1000;
        arr=vector<int>(size);
      }

  void push(int x){
    arr[end] = x;
    end++;
  }

  int pop(){
    int x = arr[start];
    start++;
    return x;
  }

  int Size(){
    return end-start;
  }
  int top(){
    return arr[start];
  }
};

int main(){
  Queue q;
  q.push(2);
  q.push(3);
  q.push(5);
  q.push(6);

  cout <<"The first element of the queue is : " <<q.top()<<endl;
  cout << "The current size of the queue is: "<<q.Size()<<endl;
  q.pop();
  cout <<"The first element after deleting the first element :" <<q.pop()<<"is: "<<q.top()<<endl;
  cout << "The current size of the queue is: "<<q.Size()<<endl;
  return 0;

}