#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        vector<int> indegree(numCourses, 0);

        // Build the graph
        for (auto& pre : prerequisites) {
            adj[pre[1]].push_back(pre[0]);
            indegree[pre[0]]++;
        }

        queue<int> q;

        // Push all nodes with indegree 0 into the queue
        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        int count = 0;

        // Process the nodes in the queue
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            count++;

            // Decrease the indegree of adjacent nodes
            for (auto it : adj[node]) {
                indegree[it]--;
                if (indegree[it] == 0) {
                    q.push(it);
                }
            }
        }

        // If count equals numCourses, all courses can be finished
        return count == numCourses;
    }
};

int main() {
    Solution solution;
    
    // Example 1
    int numCourses1 = 2;
    vector<vector<int>> prerequisites1 = {{1, 0}};
    cout << "Can finish courses (Example 1): " << solution.canFinish(numCourses1, prerequisites1) << endl;

    // Example 2
    int numCourses2 = 2;
    vector<vector<int>> prerequisites2 = {{1, 0}, {0, 1}};
    cout << "Can finish courses (Example 2): " << solution.canFinish(numCourses2, prerequisites2) << endl;

    return 0;
}
