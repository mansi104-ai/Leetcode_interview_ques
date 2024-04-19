#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
 int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };


class Solution {
private:
  vector<int> convertLLtoArr(ListNode* head) {
    vector<int> arr;
    ListNode* temp = head;

    // Traverse the linked list and add elements to the vector
    while (temp != nullptr) {
      arr.push_back(temp->val);
      temp = temp->next;
    }

    return arr;
  }

public:
  int getVal(vector<int> arrA, vector<int> arrB) { // Update function signature
    for (int i = 0; i < arrA.size(); i++) {
      for (int j = 0; j < arrB.size(); j++) {
        if (arrA[i] == arrB[j]) {
          return arrA[i]; // Return the first intersection value
        }
      }
    }

    return -1; // Indicate no intersection found (replace with any non-existent value)
  }

public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    // Convert linked lists to arrays
    vector<int> arrA = convertLLtoArr(headA);
    vector<int> arrB = convertLLtoArr(headB);

    int result = getVal(arrA, arrB); // Pass arrays to getVal function

    if (result == -1) { // No intersection found
      return nullptr;
    }

    ListNode* temp = headA;
    while (temp) {
      if (temp->val == result) { // Use == for comparison
        return temp;
      } else {
        temp = temp->next;
      }
    }

    return nullptr; // No intersection found within headA
  }
};


/// THIS code was failed for testcases where the lists were= [4,1,8,4,5] and [5,4,1,8,4,5]
// it returned 4 as the intersection node whereas the expected one was 8

// correct code can be found in corrected_ins.cpp
