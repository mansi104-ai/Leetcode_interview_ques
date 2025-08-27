#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Solution{
  public:
  char grd[502*501 + 1]; //1D char buffer  (acts like 2D flattened to 1D)
  int vsz[501*500][5]; // 2D integer array (for storing cell-info , maybe visited sizes or transitions), each cell can store upto 5 values
  int dlt[4]; // Directional offsets -> up-left, up-right, bottom-left and bottom-right

  pair <int,int> init(const vector<vector<int>> &grid){
    int M = size(grid[0]) +1;  //row length including padding
    char *p = grd + M;memset(grd,4,M); //Start pointer p at row 1, column 0, fill the first row with value 4
    for(const auto &r: grid){ //Loop through each row r in the grid
      *p++ = 4; // First add a padding value 4 at the start of the row.
      for(int x : r) *p++ = x; //Then copy each value from the row into grd.
    }

    memset(p,4,M+1); //after finishing the grid copy, this adds the bottom padding row , all set to 4
    dlt[0] = -M-1; dlt[1] = -M+1 ; dlt[2] = M +1; dlt[3] = M-1; //Defines the neighbour offset in 1D flattened grid
    return {M+1,p-grd}; //Returns M+1 -> row width & p-grd -> how many chars are filled
  }
};


//Cache friendly -> data in one continuous block
//O(1) neighbour lookup wihtout bound checks 
//Less pointer dependency

//Space efficiency - > No per-row vector overhead
//Just one contiguous arrat with minimal padding

//Code simplicity - > no need to check the boundary conditions
//Just iterate using dlt