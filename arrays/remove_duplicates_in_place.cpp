#include <iostream>
#include <vector>
using namespace std;


int NumberOfDuplicates(vector<int>& nums){
  int n = nums.size();

  // Intialize a variable i and then loop through the array from 1 to the length of the array using variable j
  int i =0;
  for(int j =1;j<n;j++){
    if(nums[i] != nums[j]){
      i++;
      nums[i] = nums[j];
    }
  }
  return (i+1);

}
int main(){
  int n ;
  cin >> n;
  vector<int> input(n);
  for(int  i =0;i<n ;i++){
    cin >> input[i];
  }

  int k = NumberOfDuplicates(input);

  cout << k <<endl ;
  for(int i =0;i<k;i++){
    cout << input[i] <<endl;
  }
  return 0;
}