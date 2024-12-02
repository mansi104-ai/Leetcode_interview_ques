#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
    }
    Node(int data, Node* next){
        this-> data = data;
        this-> next = next;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover-> next = temp;
        mover= temp;
    }
    return head;
}
int main(){
    vector<int> arr ={1,3,5,6};
    Node* head = convertArr2LL(arr);
    cout << head->data;
}