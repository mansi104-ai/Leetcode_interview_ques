#include <iostream>
using namespace std;

class ListNode{
    public:
     int data;
     ListNode* next;

    public:
     ListNode(int data1, ListNode* next1){
       data  = data1;
       next  = next1;
     }

    public:
     ListNode(int data1){
        data = data1;
        next = nullptr;
     }
};

class Solution{
    public:
      ListNode* getIntersectionNode(ListNode* headA, ListNode* headB){

        ListNode* t1 = headA;
        ListNode* t2 = headB;
        while(t1!= t2){
            t1 = t1->next;
            t2 = t2 ->next;

            if(t1 == t2)return t1;

            if(t1 == NULL) t1 = headB;
            if(t2 == NULL) t2 = headA;
                   }
        return t1;
      }
};
