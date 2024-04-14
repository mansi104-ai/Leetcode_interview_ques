#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {  // Handle empty or single-node list
            return NULL;
        }

        ListNode *slow = head, *fast = head, *prev = nullptr;
        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev) {
            prev->next = slow->next;
        } else {
            head = head->next;  // Middle node is head
        }
        delete slow;
        return head;
    }
};

int main() {
    Solution s;

    // Create a sample linked list (optional)
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    // Call the deleteMiddle function
    ListNode* newHead = s.deleteMiddle(head);

    // Print the modified linked list (optional)
    while (newHead) {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }
    cout << endl;

    // Free the memory allocated for the linked list (important)
    ListNode* current = head;
    while (current) {
        ListNode* temp = current->next;
        delete current;
        current = temp;
    }

    return 0;
}
