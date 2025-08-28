#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// //Method 1 : Using sorting 
// int main(){
//   vector<int> nums = {1,3,4,4,2};

//   //Step 1 : Sort the array 
//   sort(nums.begin(),nums.end());
//   // int res = 0;
//   //Step 2 : Loop through the array for i and its next element to find the duplicate
//   for(int i =0;i<nums.size()-1;i++){
//     if(nums[i] == nums[i+1]){
//       cout << nums[i];
//     }
//   }

//   return -1;
// }


//Method 2 : Using the sum of the array

int main(){
  vector<int> nums = {1,3,4,2,2};
  int n = nums.size();
  //Find the original sum for 1 -> n 
  int org_sum = ((n-1)*n)/2;
  
  //Step 2 : Initializing a variable to store the current sum of the array
  int curr_sum = 0;
  //Step 3 : Find the current sum of the elements of array
  for(auto& it : nums){
    curr_sum += it;
  }

  //Step 4  : Store the duplicate element 
  curr_sum -= org_sum;
  cout << curr_sum ;
  return -1;

}