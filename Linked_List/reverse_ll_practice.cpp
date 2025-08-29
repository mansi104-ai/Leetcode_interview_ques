#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node(int val){
    this->data = val;
    this->next = nullptr;

  }
  Node(int val,Node* next){
    this->data = val;
    this->next = next;
  }
};

void printLL(Node* head){
  while(head!= NULL){
    cout << head->data;
    head= head->next;
  }
}

Node* ReverseLL(Node* head){
  Node* prev = NULL;
  Node* curr = head;
  Node* next= NULL;

  while(curr!= NULL){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr=next;
  }

  return prev;
}