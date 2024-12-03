#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int data, Node* prev1,Node* next){
        this->data = data;
        this->prev = prev1;
        this->next = next;
    }
    Node(int data){
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

Node* arr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev= head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    while(head!= NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    vector<int> arr = {1,3,2,4};
    Node* head = arr2DLL(arr);
    // cout << head ->data;
    print(head);

    
    return 0;

}