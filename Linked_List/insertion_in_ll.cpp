#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node{
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next = nullptr;
  }

  Node(int data,Node* next){
    this->data = data;
    this->next =next;
  }
};

//Function to print the linked_list
void printLL(Node* head){
  while(head!=NULL){
    cout <<head->data <<" ";
    head = head->next;
  }
}

//Function to insert a node at the head of the linked list
Node* InsertHead(Node* head,int val){
  Node* temp = new Node(val,head);
  return temp;
}

int main(){
  vector<int> arr = {12,8,5,7};
  int val = 100;
  Node* head = new Node(arr[0]);
  head->next = new Node(arr[1]);
  head->next->next = new Node(arr[2]);
  head->next->next->next = new Node(arr[3]);
  
  //Inserting a new node at the head of the linked list 
  head = InsertHead(head,val);

  //Printing the linked list 
  printLL(head);

  return 0;
}