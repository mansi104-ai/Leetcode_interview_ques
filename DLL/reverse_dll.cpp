#include <iostream>
#include <vector>
using namespace std;

struct Node{
  int data;
  Node* prev;
  Node* next;
  Node(int data, Node* prev, Node* next){
    this->data = data;
    this-> prev= prev;
    this->next = next;
  }Node(int data){
    this->data = data;
    this-> prev= nullptr;
    this->next = nullptr;
  }
};
Node* reverseDLL(Node* head){
  if(head == nullptr || head->next == nullptr)return head;

  Node* curr = head;
  Node* prevNode= nullptr;

  while(curr!= nullptr){
    Node* temp = curr->prev;
    curr->prev = curr->next;
    curr->next= temp;

    prevNode = curr; //store the last processed node
    curr= curr->prev; //move to the next node
  }

  return prevNode;
}