#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool dfs(int i,int j,int idx,vector<vector<char>>&board, string& word){
  //Stopping condition all conditions met 
  int m = board.size();
  int n = board[0].size();

  vector<pair<int,int>> dirs = {
    {-1,0}, // up
    {1,0},  //bottom
    {0,-1}, //left
    {0,1}   //right
  };

  for(int si =0;si<m;si++){
    for(int sj= 0;sj<n;sj++){
      if(board[si][sj] != word[0])continue;

      //stack elements : i,j, index, next direction to try
      stack<tuple<int,int,int,int>> st;
      st.push({si,sj,0,0});

      char startChar = board[si][sj];
      board[si][sj] = '#'; //mark visited

      while(!st.empty()){
        auto& [i,j,idx,d] = st.top();

        //whole word matched 
        if(idx == word.size() -1){
          return true;
        }
        // if all 4 directions tried -> backtrack
        if(d == 4){
          board[i][j] = word[idx]; //undo visit
          st.pop();
          continue;
        }

        //try next direction
        int ni = i + dirs[d].first;
        int nj = j + dirs[d].second;
        st.top() = {i,j,idx,d + 1};

        if(ni >= 0 && nj >= 0 &&ni <m && nj < n && board[ni][nj] == word[idx+1]){
          board[ni][nj] = '#'; //mark visited
          st.push({ni,nj,idx+1,0});
          }
      }

      //restore start cell before trying next start
      board[si][sj] = startChar;
    }
  }

  return false;

}