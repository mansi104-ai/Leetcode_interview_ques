#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    ListNode* reversed(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;

        while(temp->next){
            ListNode* NextNode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = NextNode;

        }
        return prev;
    }
}