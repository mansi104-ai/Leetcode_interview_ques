#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int data, Node* prev = nullptr, Node* next = nullptr) {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

Node* arr2DLL(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->prev = prev; // Fix: Update the prev pointer of the new node,needs to be added to the dll codes
        prev = temp;
    }
    return head;
}

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* deleteHead(Node* head) {
    if (head == NULL) return NULL;

    if (head->next == NULL) { // Handle single-node list
        delete head;
        return NULL;
    }

    Node* back = head;
    head = head->next;
    head->prev = nullptr;
    back->next = nullptr;

    delete back;
    return head;
}

Node* deleteTail(Node* head) {
    if (head == NULL) return NULL;

    // if (head->next == NULL) { // Handle single-node list
    //     delete head;
    //     return NULL;
    // }

    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }

    Node* back = tail->prev;
    back->next = nullptr;
    tail->prev = nullptr;

    delete tail;
    return head;
}

Node* deleteKNode(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    Node* temp = head;
    int cnt = 0;
    while(temp!= NULL){
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp->next;

    }
    Node* back = temp ->prev;
    Node* front = temp -> next;
    if(back == NULL && front == NULL){
        delete(temp);
        return NULL;
    }
    else if(back == NULL){
        return deleteHead(head);

    }
    else if(front ==NULL){
        return deleteTail(head);
    }else{
        back->next = front;
        front ->prev = back;
        temp ->prev = nullptr;
        temp ->next = nullptr;
        delete(temp);
        return head;
    }


}
int main() {
    vector<int> arr = {1, 4, 2, 3};
    Node* head = arr2DLL(arr);

    // Uncomment to test deleteHead
    // head = deleteHead(head);
    // print(head);

    // head = deleteTail(head);
    // print(head);
    head = deleteKNode(head,1);
    print(head);
    return 0;
}
