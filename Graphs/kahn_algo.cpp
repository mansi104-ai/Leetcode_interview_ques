#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution{
public:
    vector<int> topoSort(int V, vector<int> adj[]){
        vector<int> indegree(V, 0);

        // Calculate the indegree for each node
        for(int i = 0; i < V; i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }

        queue<int> q;

        // Push all nodes with indegree 0 into the queue
        for(int i = 0; i < V; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }   

        vector<int> result;

        // Process the nodes in the queue
        while(!q.empty()){
            int node = q.front();
            q.pop();
            result.push_back(node);

            // Decrease the indegree of adjacent nodes
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }

        return result;
    }
};

int main() {
    // Example usage
    int V = 6;
    vector<int> adj[6];
    adj[5].push_back(2);
    adj[5].push_back(0);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    Solution obj;
    vector<int> result = obj.topoSort(V, adj);

    for(auto node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
