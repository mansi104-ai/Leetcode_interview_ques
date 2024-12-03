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

void deleteNode(Node* temp){
    Node* back = temp ->prev;
    Node* front  = temp ->next;
    if(front == NULL){
        back->next= nullptr;
        temp ->prev = nullptr;
        delete(temp);
        return;

    }

    back->next = front;
    front->prev =back;
    temp ->next = nullptr;
    temp ->prev= nullptr;
    delete(temp); 

}

Node* insertnewHead(Node* head,int val){
    Node* newHead= new Node(val,nullptr,head);
    head ->prev = newHead;

    return newHead;
}

Node* createNodeBeforeTail(Node* head,int val){
    if(head ->next== NULL){
        insertnewHead(head,val);
    }
    Node* tail = head;
    while(tail->next!= NULL){
        tail = tail->next;

    }
    Node* back = tail->prev;
    Node* newTail = new Node(val,back,tail);
    back ->next = newTail;
    tail ->prev= newTail;
    return newTail;
}

Node* InsertBeforeKthElement(Node* head, int k, int val){
    if(k== 1){
        return insertnewHead(head,val);

    }
    Node* temp = head;
    int cnt= 0;
    while(temp != NULL){
        cnt++;
        if(cnt == k)break;
        temp = temp ->next;

    }
    Node* back = temp ->prev;
    Node* newEle = new Node(val,back,temp);
    back ->next = newEle;
    temp ->prev = newEle;
    return head;
}

void InsertBeforeANode(Node* node, int val){
    Node* back = node->prev;
    Node* newNode = new Node(val,back,node);
    back ->next = newNode;
    node ->prev= newNode;
    

}
int main() {
    vector<int> arr = {1, 4, 2, 3};
    Node* head = arr2DLL(arr);

    // Uncomment to test deleteHead
    // head = deleteHead(head);
    // print(head);

    // head = deleteTail(head);
    // print(head);
    // deleteNode(head->next);

    InsertBeforeANode(head->next,45);
    print(head);
    return 0;
}
