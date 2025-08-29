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
  Node(int val, Node* next){
    this->data = val;
    this->next= next;
  }
};

void printLL(Node* head){
  while(head!= NULL){
    cout << head->data << " ";
    head = head->next;
  }
}

bool detectCycle(Node* head){
  Node* slow = head;
  Node* fast = head;
  // bool ans = false;
  while(fast && fast->next){
    slow = slow ->next;
    fast = fast->next->next;
    if(slow == fast){
      return true;
    }
  }

  return false;
}

int main(){
  vector<int> input = {1,2,3,4,5,2};
  Node* head = new Node(input[0]);
  int i = 1;
  Node* curr= head;
  while(i < input.size()){
    curr->next = new Node(input[i]);
    curr = curr->next;
    i++;
  }
  bool ans = detectCycle(head);
  cout << ans <<endl;
  // printLL(head);

  if(ans == false){
    printLL(head);
  }

  return 0;

}