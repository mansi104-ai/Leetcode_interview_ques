#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;


//Method 1 : Brute Force Approach
// int main(){
//   vector<int> nums = {3,4,5,5,1};

//   //Step1  : Loop through the array using 2 pointers
//   for(int i = 0;i<nums.size();i++){
//     for(int j = i+1; j<nums.size();j++){
//       if(nums[i] == nums[j]) cout << nums[i];
//     }
//   }
//   return -1;
// }

// //Method 2 : Using sorting
// int main(){
//   vector<int> nums = {3,4,5,5,1};

//   sort(nums.begin(),nums.end());

//   //Step2 : Loop through the array to find the duplicate element
//   for(int i =0;i<nums.size()-1;i++){
//     if(nums[i] == nums[i+1])cout << nums[i];
//   }

//   return -1;
// }



// //Method 3 : Using hash set
// int main(){
//   vector<int> nums = {3,4,5,5,1};

//   //Initialize the unordered set
//   unordered_set<int> seen;

//   //Loop through the array
//   for(int num : nums){
//     if(seen.count(num))cout << num;
//     seen.insert(num);
//   }

//   return -1;
// }


//Method 4 : Using Binary Search on answers
int main(){
  vector<int> nums = {3,4,2,2,1};

  int low = 1,high = nums.size(),duplicate = -1;
  while(low <= high){
    int mid = low + (high-low)/2;

    int count  = 0;
    for(int num : nums){
      if(num <= mid){
        count ++;
      }
    }
    if(count > mid){
      duplicate = mid;
      high = mid-1;
    }else{
      low = mid+1;
    }
  }
  cout <<duplicate;
  return 0; 
}