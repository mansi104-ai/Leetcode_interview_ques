#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
     Node* back;
    
    public:
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

Node* convertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev =head;
    for (int i = 1; i <arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev-> next = temp;
        prev= temp;
    }
    return head;
}

Node* reversedDLL(vector<int> &arr){
    int n = arr.size();
    // Handle empty or single-element arrays
    if (n == 0) {
        return nullptr;
    } else if (n == 1) {
        return new Node(arr[0]);
    }
    Node* head = new Node(arr[n-1]);
    Node* prev= head;
    for(int i = n - 2; i >= 0; i--){
        Node* temp = new Node(arr[i], nullptr,prev);
        prev ->next = temp;
        prev= temp;
    }
    return head;

}

Node* deleteHead(Node* head){
    Node* prev = head;
    head = head->next;

    prev -> next = nullptr;
    head ->back = nullptr;

    delete prev;
    return head;
}

Node* deleteTail(Node* head){
    if(!head || !head->next){
        return NULL;
    }
    Node* temp = head;
    while(temp->next!= NULL){
        temp = temp ->next;
    }

    Node* newTail = temp->back;
    newTail ->next =nullptr;
    temp ->back = nullptr;
    
    delete temp;
    return head;
}

void printHead(Node* head){

    while(head!= NULL){
        cout << head-> data <<" ";
        head = head-> next;
    }

}

int main(){
    vector<int> arr ={1,3,5,6,7};
    Node* head = convertArr2DLL(arr);

    head = deleteTail(head);

    printHead(head);
    return 0;
}