// Code using the element to be deleted from the array
/* takes -2ms
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index =0;
        for(int i=0; i<nums.length();i++){
            if(nums[i]!=val){
                nums[index]=nums[i];
                index++;
            }
        }
        return index;

        
    }
};
*/

/*
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count =0;
        for (int i=0; i<nums.length();i++){
            if (nums[i]==val){
                nums.erase(nums.begin()+i--);
                nums.push_back(val+1);
                count ++;
            }


        }
        return nums.size()- count;
    }
}
*/




