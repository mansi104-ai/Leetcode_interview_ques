#include <algorithm>
using namespace std;

int solve(vector<vector<int>> &A){
  A.sort(A.begin(),A.end(),[](const vector<int>&a,const vector<int>&b){
         return a[1]<b[1];
  }
         );

// If you need to sort the vector of vectors in order of end first
  // if you need last start replace a[0]>b[0] for a[1]<b[1]
  
