#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int> subarraySum(vector<int> & arr, int target){
        // Using the concept of sliding window

        //Step 1 :Initialize the vector to store the resulting indices array
        vector<int> res;

        // Step 2 : Make the loop to find the appropriate sliding window with sum <= target

        for(int s =0;s<arr.size();s++){
            int curr_sum = 0;
            for(int e = s; e< arr.size();e++){
                curr_sum+= arr[e];
                if(curr_sum== target){
                    res.push_back(s+1);
                    res.push_back(e+1);
                }
                else if(curr_sum > target){
                    s += 1;
                    curr_sum = 0;
                }
            }
        }
        return res;


    }
};


// // Using the concept of sliding window

//         //Step 1 :Initialize the vector to store the resulting indices array
//         vector<int> res;

//         // Step 2 : Make the loop to find the appropriate sliding window with sum <= target

//         for(int s =0;s<arr.size();s++){
//             int curr_sum = 0;
//             for(int e = s; e< arr.size();e++){
//                 curr_sum+= arr[e];
//                 if(curr_sum== target){
//                     res.push_back(s+1);
//                     res.push_back(e+1);
//                 }
//                 else if(curr_sum > target){
//                     s += 1;
//                     curr_sum = 0;
//                 }
//             }
//         }
//         return res;

int main(){
    vector<int> arr = {1,2,3,7,5};
    int target = 12;

    Solution s;
    vector<int> res = s.subarraySum(arr,target);
    return {-1};

}