#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data, Node* next){
        this->data = data;
        this-> next = next;
    }
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    // Node* temp = head->next;
    Node* mover = head;
    for(int i =1;i<arr.size();i++){
        mover->next = new Node(arr[i]);
        mover = mover->next;
        // mover = temp;
    }
    return head;
}

// void traversalInLL(Node* head){
    
//     Node* tempo = head;
//     while(tempo){
//         cout << tempo->data << " ";
//         tempo = tempo->next;
//     }

// }

int countLL(Node* head){
    
    int cnt =0;
    Node* tempo = head;
    while(tempo){
        // cout << tempo->data << " ";
        tempo = tempo->next;
        cnt++;
    }
    return cnt;

}

int main(){
    vector<int> arr = {2,3,55,66};
    Node* head = convertArr2LL(arr);
    // traversalInLL(head);
    cout<< countLL(head);
    
}