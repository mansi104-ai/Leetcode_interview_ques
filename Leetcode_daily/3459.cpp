#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
  public:
  int n, m;
  vector<vector<int>> grid;
  vector<pair<int,int>> dirs = {{1,1},{1,-1},{-1,-1},{-1,1}};

  vector<int> turn = {1,2,3,0};

  int expectedVal(int k){
    if(k == 0)return 1;
    return (k%2==1) ? 2 : 0;
  }

  int dfs(int x,int y,int dir,int k, bool turned){
    if(x < 0 || x>=n || y < 0||y>=n){
      return 0;
    }
    if(grid[x][y] != expectedVal(k)) return 0;
    int best = 1;

    //Continue in the same direction
    best = max(best, 1 + dfs(x + dirs[dir].first,y + dirs[dir].second,dir,k+1,turned));

    //try turning ( if not turned yet)
    if(!turned){
      int nd = turn[dir];
      best = max(best, 1+ dfs(x + dirs[dir].first,y+ dirs[dir].second,nd,k+1,true));

    }

    return best;

    }

    int longestSegment(vector<vector<int>> &g){
      grid = g;

      //To get the size of the grid
      int n = grid.size();

      //The size of the first element in the grid to keep the track of the inputs 
      int m = grid[0].size();

      int ans = 0;

      for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
          if(grid[i][j] == 1){
            for(int d = 0;d < 4;d++){
              ans = max(ans, dfs(i,j,d,0,false));
            }
          }
        }
      }

      return ans;
    }
};



//Better solution for the problem with 100% beat 
char grd[502*501+1];
int vsz[501*500][5];
int dlt[4];

pair<int,int> init(const vector<vector<int>>& grid) {
    int M = size(grid[0]) + 1;
    char *p = grd + M; memset(grd, 4, M);
    for (const auto &r : grid) {
        *p++ = 4;
        for (int x : r) *p++ = x;
    }
    memset(p, 4, M+1);
    dlt[0] = -M - 1;  dlt[1] = -M + 1;  dlt[2] = M + 1;  dlt[3] = M - 1;
    return {M+1, p-grd};
}

class Solution {
public:
    int lenOfVDiagonal(vector<vector<int>>& grid) {
        auto [bg, ed] = init(grid);
        for (int i = bg, j = 0, d0 = dlt[0], d1 = dlt[1]; i != ed; ++i, ++j) {
            char u = grd[i], d = !(u & 5);
            vsz[j][4] = (u ^ grd[i + d0]) == 2 ? 1 + vsz[j+d0][4] : d;
            vsz[j][1] = (u ^ grd[i + d1]) == 2 ? 1 + vsz[j+d1][1] : d;
        }
        for (int i = ed-1, j = ed-bg-1, d2 = dlt[2], d3 = dlt[3]; j >= 0; --i, --j) {
            char u = grd[i], d = !(u & 5);
            vsz[j][2] = (u ^ grd[i + d2]) == 2 ? 1 + vsz[j+d2][2] : d;
            vsz[j][3] = (u ^ grd[i + d3]) == 2 ? 1 + vsz[j+d3][3] : d;
        }

        for (int i = bg, j = 0, d0 = dlt[0], d1 = dlt[1]; i != ed; ++i, ++j) {
            char u = grd[i];
            int b0 = vsz[j][1], b1 = vsz[j][2];
            vsz[j][0] = (u ^ grd[i + d0]) == 2 ? max(1 + vsz[j+d0][0], b0) : b0;
            vsz[j][1] = (u ^ grd[i + d1]) == 2 ? max(1 + vsz[j+d1][1], b1) : b1;
        }
        for (int i = ed-1, j = ed-bg-1, d2 = dlt[2], d3 = dlt[3]; j >= 0; --i, --j) {
            char u = grd[i];
            int b2 = vsz[j][3], b3 = vsz[j][4];
            vsz[j][2] = (u ^ grd[i + d2]) == 2 ? max(1 + vsz[j+d2][2], b2) : b2;
            vsz[j][3] = (u ^ grd[i + d3]) == 2 ? max(1 + vsz[j+d3][3], b3) : b3;
        }
        int res = 0, f = 0;
        for (int i = bg, j = 0; i != ed; ++i, ++j) if (grd[i] == 1) {
            f = 1;
            for (int d = 0; d < 4; ++d) if (grd[i+dlt[d]] == 2) res = max(res, vsz[j+dlt[d]][d]);
        }
        return f ? res+1 : 0;
    }
};