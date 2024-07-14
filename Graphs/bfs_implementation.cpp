#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // int n = adj.size();

        vector<int> vis(V,0);

        queue<int> q;
        vis[0] = 1;

        q.push(0);

        vector<int> bfs;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for(auto it: adj[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] =1;
                }
            }

        }
        return bfs;

    }
};

int main() {
    // Number of vertices
    int V = 5;
    
    // Adjacency list representation of the graph
    vector<int> adj[5];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(3);
    adj[3].push_back(4);
    
    Solution sol;
    vector<int> result = sol.bfsOfGraph(V, adj);
    
    cout << "BFS Traversal: ";
    for (int i : result) {
        cout << i << " ";
    }
    
    return 0;
}

