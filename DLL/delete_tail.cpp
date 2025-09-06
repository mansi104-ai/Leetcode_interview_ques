#include <iostream>
#include <vector>
using namespace std;

struct Node{
  int data;
  Node* prev;
  Node* next;
  Node(int data, Node* val1, Node* val2){
    this->data= data;
    this->prev = val1;
    this->next = val2;
  }

  Node(int data){
    this->data = data;
    this->prev = nullptr;
    this->next = nullptr;
  }
};

Node* convertArr2DLL(vector<int>& arr){
  Node* head = new Node(arr[0]);
  Node* prev= head;
  for(int i = 1;i<arr.size();i++){
    Node* temp = new Node(arr[i], prev,nullptr);
    prev->next = temp;
    prev= prev->next;
  }
  return head;
}

Node* deleteTail(Node* head){
  Node* tail = head;
  if(head->next == nullptr){
    delete head;
    return nullptr;
  }
  while(tail->next!= nullptr){
    tail= tail->next;
  }
  tail->prev->next = nullptr;
  tail->prev= nullptr;
  delete tail;

  return head;

}

void print(Node* head){
  while(head!= NULL){
    cout <<head->data <<" ";
    head= head->next;
  }
  cout <<endl;
}

int main(){
  vector<int> arr= {1,3,4,5};
  Node* head= convertArr2DLL(arr);
  print(head);
  head = deleteTail(head);
  print(head);
  return 0;
}