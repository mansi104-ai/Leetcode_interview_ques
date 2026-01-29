#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution{
  public:
  int solve(int i,int j, vector<vector<int>>&triangle){
    int n = triangle.size();

    //Base case : last row
    if(i == n-1) return triangle[i][j];

    //recursive calls
    int down = solve(i+1,j,triangle);
    int diag = solve(i+1,j+1,triangle);
    return triangle[i][j] + min(diag,down);
  }
  int minimumPathSum(vector<vector<int>> &triangle){
    //Start by adding the value present at [0,0] -> then find the min of the values at [1,0] and [1,1]
    //The next depends on the value selected from [1,0] and [1,1] -> if [1,0] was selected , then next possibility can be ->[2,0] and[2,1] and if [1,1] was selected the next possibility can by [2,1] and [2,2]

    //Call recursive functions that tracks from the i and j
    return solve(0,0,triangle);

  }
};
int main(){
  // int n;
  // cin >> n;
  vector<vector<int>> grid = {{5},{3,9},{6,5,1},{2,2,2,2}};
  Solution s;
  cout <<s.minimumPathSum(grid);
  return 0;
}

//   2
//  3 4
// 6 5 7
//9 3 1 4

// We need from 2 to 1 -> 2-> 3 -> 5 -> 1
// Step 1 : find recursive relation from going from 2->1
// search the bottom elements of the current elements which means search the min of the elements ->
//If the current element is i,j, then  search at positions i+1,j and i+1,j+1
// then keep on recursively finding the minimum of the elements at these positions
//to do this start traversing i from 0 to triangle.size()-2 and find the minimum elements in the next row 