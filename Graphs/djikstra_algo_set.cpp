#include <iostream>
#include <queue>
#include <vector>
#include <set>
using namespace std;

class Solution{
    public:
     vector<int> djikstra(int V, vector<vector<int>> adj[], int S){
        set<pair<int,int>> st;
        vector<int> dist(V,1e9);

        st.insert({0,S});
        dist[S] = 0;

        while(!st.empty()){
            auto it = *(st.begin());
            int dis = it.first;
            int node = it.second;
            st.erase(it);

            for(auto it: adj[node]){
                int adjNode =it[0];
                int edgW = it[1];

                if(edgW + dis < dist[adjNode]){
                    //erase from the set if the combination with lesser value existed

                    if(dist[adjNode] != 1e9){
                        st.erase({dist[adjNode], adjNode});
                    }

                    dist[adjNode] = dis+ edgW;
                    st.insert({dist[adjNode], adjNode});
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
    vector<int> dist = obj.djikstra(V, adj, S);

    cout << "The shortest distances from node " << S << " are:" << endl;
    for (int i = 0; i < V; i++) {
        cout << "Node " << i << " : " << dist[i] << endl;
    }

    return 0;
}
