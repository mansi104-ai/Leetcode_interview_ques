#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution {
    public:
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S) {
        // declaration of min heap
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(V);
        for (int i = 0; i < V; i++) dist[i] = 1e9;

        dist[S] = 0;
        pq.push({0, S});

        while (!pq.empty()) {
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for (auto it : adj[node]) {
                int edgeWeight = it[1];
                int adjNode = it[0];

                if (dis + edgeWeight < dist[adjNode]) {
                    dist[adjNode] = dis + edgeWeight;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        return dist;
    }
};

int main() {
    // Number of vertices in the graph
    int V = 5;
    // Adjacency list representation of the graph
    vector<vector<int>> adj[5];

    // Example graph
    adj[0].push_back({1, 10});
    adj[0].push_back({4, 3});
    adj[1].push_back({2, 2});
    adj[2].push_back({3, 9});
    adj[3].push_back({2, 7});
    adj[4].push_back({1, 1});
    adj[4].push_back({2, 8});

    // Source node
    int S = 0;

    Solution obj;
    vector<int> dist = obj.dijkstra(V, adj, S);

    cout << "The shortest distances from node " << S << " are:" << endl;
    for (int i = 0; i < V; i++) {
        cout << "Node " << i << " : " << dist[i] << endl;
    }

    return 0;
}
