#include <iostream>
#include <vector>
using namespace std;

struct Node{
  int data;
  Node* prev;
  Node* next;
  Node(int data, Node* val1,Node* val2){
    this->data = data; // Point to the class member instead of self parameter
    this->prev = val1;
    this->next  = val2;
  }
  Node(int data){
    this->data = data;
    this->prev = nullptr;
    this->next = nullptr;
  }
  
};

void print(Node* head){
  while(head != NULL){
    cout << head->data << " ";
    head = head->next;
  }
}


Node* convertArr2DLL(vector<int>& arr){
  Node* head = new Node(arr[0]);
  Node* prev = head;

  for(int i =1;i<arr.size();i++){
    Node* temp = new Node(arr[i],prev,nullptr);
    prev -> next = temp;
    prev= prev->next;
  }

  return head;
}

int main(){
  vector<int> input= {1,3,4,5};
  Node* head = convertArr2DLL(input);
  print(head);
  return 0;
}
//[1, null, null] -> single doubly linked list
//This is a constructor
// For an element of the array Node* head= new Node(arr[0])
// Node* prev = head