#include <vector>
#include <iostream>
using namespace std;

class Solution{
public:
       int removeDuplicates(vector<int>& nums){
        int j=0;
        for (int i=1; i< nums.size();i++){
            if (nums[i-1]!= nums[i]){
                nums[i] == nums[j];
                j++;
            }
         }
         return j;
       }
}
   