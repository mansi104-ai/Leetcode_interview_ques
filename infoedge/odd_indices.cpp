#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node(int val){
    this->data = val;
    this->next= next;
  }

  Node(int val, Node* next){
    this->data = data;
    this->next = next;
  }
};

Node* OddIndices(Node* head){
  Node* newHead = new Node(head,nullptr);
  Node* odd = head;
  Node* even = head->next;

  while(odd!= NULL){
      newHead->next = odd;
      odd->next->next;
      newHead = newHead->next;
  
  }
  while(even!= NULL){

  }
  // while(curr->next->next!= NULL){
  //   Node* temp= curr->next->next;
  //   head->next = temp;
  //   temp = temp->next->next;
  //   curr=curr->next;
  // }
}

// [1,2,3,4,5]
// odd = 1
// newHead->next = 1;
// odd = 3;
// newHead -> 1;
// newHead->next = 3;
// odd = 5



// int main(){
  
// }