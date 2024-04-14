#include <iostream>
#include <vector>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(nullptr){};
};

class Solution{
    public:
      ListNode* reverseList(ListNode* head){
        // Base case: if the list is empty or has only one one node
        if(head == nullptr || head-> next == nullptr){
            return head;
        }

        // recursive call to reverse the rest of the list
        ListNode* reverseHead = reverseList(head->next);

        // Adjust the pointers to reverse the current node's link
        head->next->next = head;
        head->next = nullptr;

        //Return the new head of the reversed list
        return reverseHead;
      }
};

void printList(ListNode* head){
    ListNode* temp = head;
    while(temp!= nullptr){
        cout<< temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    //Create a simple linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next ->next = new ListNode(3);
    head -> next -> next ->next = new ListNode(4);
    head -> next -> next -> next -> next = new ListNode(5);

    // Print the original list
    cout << "Original list: ";
    printList(head);

    //Reverse the list
    Solution Solution;
    ListNode* reverseHead = Solution.reverseList(head);

    cout << "Reversed list: ";
    printList(reverseHead);

    // Free memory 
    ListNode* temp;
    while (reverseHead != nullptr){
        temp = reverseHead;
        reverseHead = reverseHead->next;
        delete temp;
        
    }
    return 0;
    
}