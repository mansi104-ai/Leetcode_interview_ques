#include <iostream>
#include <vector>
using namespace std;

int main(){

  //Defining the grid
  vector<vector<int>> grid = {{3,4,5,6},{1,2,4,0},{2,3,4,5}};
  int n = grid.size();
  int m = grid[0].size();

  //New vector grid with padding(extra row/col on each side)
  vector<vector<int>> padded(n+2, vector<int> (m+2,0));

  //Copy old grid into padded grid
  for(int i =0;i<n;i++){
    for(int j =0;j<m;j++){
      padded[i+1][j+1] = grid[i][j];
    }
  }
}


//Problems to implement the method: 
//1. Number or Islands
//2. Unique Paths
//3. Image convolution problems (padding is the key there too)