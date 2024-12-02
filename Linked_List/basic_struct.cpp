#include <iostream>
#include <vector>
using namespace std;

struct Node{
  
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
    
    Node(int data, Node* next){
        this->data = data;
        this->next = next;

    }
};

int main(){
    vector<int> arr ={2,5,8,7};
    Node* y = new Node(arr[0],nullptr);
    cout << y->data;

}

// Struct does not help to define the oops concepts but class does!