#include <iostream>
#include <vector>
using namespace std;

int main(){
  int m,n;
  cin >> n,m;
  vector<int> adj[n+1];
  for(int i =0;i<m;i++){
   int u,v;
   cin >> u,v;

   // time complexity for undirected graph = 2(E), for directed graph = E 
   adj[u].push_back(v);
   adj[v].push_back(u); // comment this line for directed graph
  }


return 0;

}