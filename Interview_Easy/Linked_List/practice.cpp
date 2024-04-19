#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArrtoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        prev ->next =temp;
        prev = temp;
    }

    return head;
}

int lengthOfLL(Node* head){
    int cnt = 0;
    Node* temp =head;
    while(temp!= NULL){
        temp = temp->next;
        cnt ++;
    }
    return cnt;

}

void printHead(Node* head){
    while(head!=NULL){
        cout << head->data <<" ";
        head = head->next;
    }

}

int main(){

    vector<int> arr = {1,2,4,5,6};
    Node* head = convertArrtoLL(arr);
    int result = lengthOfLL(head);
    cout << result <<endl;
}