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

Node* deleteHead(Node* head){
  if(head == nullptr)return nullptr;

  if(head->next != NULL){
    Node* backNode = head;
    head = head->next;
    backNode->next = nullptr;
    head->prev = nullptr;
    delete backNode;
  }else{
    delete head;
    return nullptr;
  }
  return head;
}

Node* kth(Node* head, int k) {
    if (head == nullptr) return nullptr;

    Node* temp = head;
    int cnt = 1;

    while (temp != nullptr && cnt < k) {
        temp = temp->next;
        cnt++;
    }

    if (temp == nullptr) return head; // k > length

    Node* back = temp->prev;
    Node* front = temp->next;

    if (back == nullptr && front == nullptr) {
        // only one node in list
        delete temp;
        return nullptr;
    }
    else if (back == nullptr) {
        // deleting head
        head = deleteHead(head);
    }
    else if (front == nullptr) {
        // deleting tail
        head = deleteTail(head);
    }
    else {
        // deleting middle node
        back->next = front;
        front->prev = back;
        temp->prev = nullptr;
        temp->next = nullptr;
        delete temp;
    }
    return head;
}


void print(Node* head){
  while(head!= nullptr){
    cout <<head->data <<" ";
    head= head->next;
  }
  cout <<endl;
}

int main(){
  vector<int> arr= {1,3,4,5};
  Node* head= convertArr2DLL(arr);
  print(head);
  // head = deleteTail(head);
  // print(head);
  head= kth(head,5);
  print(head);
  return 0;
}