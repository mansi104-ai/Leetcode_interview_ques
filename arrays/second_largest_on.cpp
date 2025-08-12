#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n ;
  cin >> n;
  vector<int> input(n);
  for(int i =0;i<n;i++){
    cin >> input[i];
  }

  //First traversal to find the smallest and the largest element 
  int smallest_ele=INT_MAX;
  int largest_ele = INT_MIN;
  for(int i =0;i<n;i++){
    if(input[i] < smallest_ele){
      smallest_ele = input[i];
    }else if(input[i]>largest_ele){
      largest_ele = input[i];
    }
  }

  // cout << largest_ele<< smallest_ele;
  int second_smallest = INT_MAX;
  int second_largest = INT_MIN;
  // //Second traversal to find the second most smallest element in the array
  for(int i =0;i<n;i++){
    if(input[i] < second_smallest && input[i] != smallest_ele){
      second_smallest = input[i];
    }
    else if(input[i] > second_largest && input[i] != largest_ele){
      second_largest = input[i];
    }
  }

  cout << "The second smallest element is: "<<second_smallest << " & the second largest element is: "<<second_largest<<endl;
  return 0;
}