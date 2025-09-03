#include <iostream>
#include <vector>
using namespace std;
vector<int> matrix(vector<vector<int>>&input){

  //Result vector
  vector<int> result;
  if(input.empty() || input[0].empty()){
    return result;
  }

  int row = input.size(), col = input[0].size(),left =0,right= col-1,bottom = row-1,top = 0;

  while(top<= bottom && left<= right){

    //right traversal
    for(int j = left ;j<=right;j++){
      result.push_back(input[top][j]);
    }
    top++;
  
  //Traverse down
  for(int i = top;i<= bottom;i++){
    result.push_back(input[right][i]);
  }
  right--;
  
  //Traverse left
  for(int j = right;j>= left;j--){
    result.push_back(input[bottom][j]);
  }
  bottom--;

  //Traverse Up
  for(int i = bottom;i>=top;i--){
    result.push_back(input[left][i]);
  }
  left++;
}

return result;
}

//Dry run
// top = 0, -> top = 1; [ 1,2,3,4]
// i = 1 
// bottom = row -1 ->1
// i = 

// bottom = [7,8,9,10]
