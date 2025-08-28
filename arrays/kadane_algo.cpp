#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// //Approach 1 : Using 3 loops -> Brute Force
// int main(){
//   vector<int> nums = {{ -2, 1, -3, 4, -1, 2, 1, -5, 4}};
//   int maxi= INT_MIN;

//   for(int i =0;i< nums.size();i++){
//     for(int j = i;j<nums.size();j++){
//       int sum = 0;

//       //Add the elements of the subarray
//       for(int k = i;k <= j;k++){
//         sum += nums[k];
//       }

//       maxi = max(maxi,sum);
//     }
//   }
//   cout << maxi;
//   return 0;

// }

// //Method 2 : Using 2 loops
// int main(){
//   vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
//   int maxi= INT_MIN;

//   for(int i =0;i< nums.size();i++){
//     int sum = 0;
//     for(int j = i;j<nums.size();j++){
//       sum += nums[j];
//       maxi = max(maxi,sum);
//     }
//   }
//   cout << maxi;
//   return 0;

// }


//Method 3 : Using single loop
int main(){
  vector<int> nums = {3,4,-5,2,1,7};

  //Step1 : Run a loop to iterate a given array
  int maxi = INT_MIN;
  int sum = 0;
  for(int i =0;i<nums.size();i++){
   
    sum += nums[i];
    if(sum < 0){
      sum = 0;
    }
    maxi = max(maxi,sum);
  }

  cout << maxi;
  return 0;
}