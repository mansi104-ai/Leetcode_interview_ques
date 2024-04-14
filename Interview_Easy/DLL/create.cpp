// include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    Node* back;

    public :
      Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
      }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
      }
};

Node* convertAll2DLL(vector<int> &arr){
    Node* head = new Node (arr[0]); // This line gives segmentation error when you empty the array
    Node* prev = head;

    for(int i=1;i< arr.size();i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev-> next=temp;
        prev =temp;
    }
    return head;

}

Node* deleteHead(Node* head){
    Node* prev = head;
    head = head-> next;
    head-> back = nullptr;
    prev -> next =nullptr;

    delete prev;
    return head;
};

Node* deleteTail(Node* head){
    if (head == NULL || head->next == NULL) {
        delete head; // If the list is empty or has only one node, delete the head and return nullptr
        return nullptr;
    }

    // Traverse to the last node
    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }

    // Update the links of the new tail and delete the old tail
    Node* newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;
    delete tail;

    return head; // Return the head of the modified list
}

// deleting an element at kth position

Node* deleteKelement(Node* head, int k){
    Node* kthel = head;
    int cnt =0 ;
    if(head == NULL && k ==1){
        delete head;
        return NULL;
    }

    while(kthel!= NULL){
        cnt++;
        if(cnt == k)break;
        kthel = kthel->next;
    }
    Node* prev = kthel -> back;
    Node* front = kthel-> next;
    if(prev == NULL && front == NULL){
        return NULL;
    }
    else if( prev== NULL){
        return deleteHead(head);
    }
    else if(front == NULL){
        return deleteTail(head);
    }
    prev -> next = front;
    front -> back = prev;

    kthel ->next = nullptr;
    kthel ->back = nullptr;
    delete kthel;

    return head;

} 

Node* InsertBeforeHead(Node* head , int val){
    Node* newHead = new Node(val, head, nullptr);
    head -> back = newHead;

    return newHead;
}

Node* InsertBeforeTail(Node* head, int val){
    if(head -> next == NULL){
        return InsertBeforeHead(head, val);
    }
    Node* tail = head;
    while(tail -> next != NULL){
        tail = tail->next;
    }

    Node* prev = tail -> back;
    Node* newNode = new Node(val,tail, prev );
    prev -> next = newNode;
    tail -> back = newNode;
    return head;
}
void deleteNode(Node* temp){
    Node* prev = temp -> back;
    Node* front = temp-> next;

    if(front == NULL){
        prev -> next = nullptr;
        temp-> back = nullptr;
        delete temp;
        return ;
    }

    prev -> next = front;
    front -> back = prev;
    temp ->next = temp -> back = nullptr;
    delete temp;
}


void printHead(Node* head){
    while(head!=NULL){
        cout << head->data<< " ";
        head = head->next;
    }
}

int main(){
    vector<int> arr = {12,3,5,6};
    Node* head = convertAll2DLL(arr);

    head = InsertBeforeTail(head, 7);
    printHead(head);
    return 0;
}
