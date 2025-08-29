#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

void PrintLL(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next; // ✅ move inside loop
    }
    cout << endl;
}

Node* InsertNodeatK(Node* head, int val, int k) {
    if (k == 0) { // insert at head
        Node* temp = new Node(val, head);
        return temp;
    }

    Node* temp = head;
    int cnt = 0;
    while (temp != nullptr && cnt < k - 1) {
        temp = temp->next;
        cnt++;
    }

    if (temp == nullptr) return head; // k is out of bounds

    Node* newNode = new Node(val, temp->next);
    temp->next = newNode;

    return head;
}

int main() {
    vector<int> input;
    int n;
    cout << "Please input the size of the array: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x); // ✅ push_back instead of input[i]
    }

    // Build linked list
    Node* head = new Node(input[0]);
    Node* curr = head;
    for (int i = 1; i < n; i++) {
        curr->next = new Node(input[i]);
        curr = curr->next;
    }

    int val = 100;
    int k = 2;
    head = InsertNodeatK(head, val, k); // ✅ reassign head

    PrintLL(head);
    return 0;
}
