class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> res;
        int base10 = 0;
        ListNode* curr = head;
        while(curr != nullptr){
            res.push_back(curr->val);
            curr = curr->next;
        }
        //now we need to convert out integer in our vector to a
        //base 10 number
        int n = res.size();

        for(int i = 0; i < n; i++){
            base10 += res[i] * pow(2, (n-i-1));
            //number = 1,0,1
            // res[0] = 1 * pow(2, (3-0-1)) so 2^2 = 4
            //res[1] = 1
        }
        return base10;
    }
};