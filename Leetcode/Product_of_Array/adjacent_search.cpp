#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool dfs(int i,int j, int idx, vector<vector<char>> &board, string &word){
  //if the string matched the traversal
  if(idx == word.size()){
    return true;
  }

  //checking for bounds
  if(i<0 || j<0 || i>=board.size()||j>=board[0].size()){
    return false;
  }

  //mark cell as visited
  char temp = board[i][j];
  board[i][j] = '#';

  //explore 4 directions
  bool found = 
    dfs(i-1,j,idx+1,board,word)|| //top
    dfs(i+1,j,idx+1,board,word)|| //bottom
    dfs(i,j-1,idx+1,board,word)|| //left
    dfs(i,j+1,idx+1,board,word);

  //backtrack
  board[i][j] = temp;

  return found;
}