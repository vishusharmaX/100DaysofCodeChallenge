class Solution {
public:

    bool dfs(int node, vector<vector<int>>& adj, vector<int>& visited, vector<int>& pathVis) {
        visited[node] = 1;
        pathVis[node] = 1;

        for (auto neighbor : adj[node]) {
            if (!visited[neighbor]) {
                if (dfs(neighbor, adj, visited, pathVis))
                    return true;
            }
            else if (pathVis[neighbor]) {
                return true;
            }
        }

        pathVis[node] = 0;
        return false;
    }

    bool isCyclic(int V, vector<vector<int>> &edges) {

        // 🔥 Build adjacency list (DIRECTED)
        vector<vector<int>> adj(V);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]); // only one direction
        }

        vector<int> visited(V, 0);
        vector<int> pathVis(V, 0);

        // 🔁 check all components
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (dfs(i, adj, visited, pathVis))
                    return true;
            }
        }

        return false;
    }
};