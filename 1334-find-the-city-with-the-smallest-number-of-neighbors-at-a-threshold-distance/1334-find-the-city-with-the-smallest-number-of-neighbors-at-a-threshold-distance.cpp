class Solution {
public:
    vector<int> findpath(vector<pair<int, int>> adj[], int n, int src) {
        vector<int> explored(n, 0);
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        int cnt = n;
        while (cnt--) {
            int node = -1, value = INT_MAX;
            for (int i = 0; i < n; i++) {
                if (!explored[i] && value > dist[i]) {
                    node = i;
                    value = dist[i];
                }
            }

            if (node == -1) break; // No more reachable nodes

            explored[node] = 1;

            for (int i = 0; i < adj[node].size(); i++) {
                int neighbour = adj[node][i].first;
                int weight = adj[node][i].second;

                if (!explored[neighbour] && dist[node] + weight < dist[neighbour]) {
                    dist[neighbour] = dist[node] + weight;
                }
            }
        }

        return dist;
    }

    int solve(vector<pair<int, int>> adj[], int n, int distance) {
        vector<vector<int>> mat(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            vector<int> dist = findpath(adj, n, i);
            for (int j = 0; j < dist.size(); j++) {
                mat[i][j] = dist[j];
            }
        }

        int leastReach = INT_MAX;
        int res = -1;
        for (int i = 0; i < mat.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] <= distance && i != j) {
                    cnt++;
                }
            }
            if (cnt <= leastReach) {
                leastReach = cnt;
                res = i;
            }
        }
        return res;
    }

    int findTheCity(int n, vector<vector<int>>& edges, int distance) {
        vector<pair<int, int>> adj[n];

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];

            adj[u].push_back({v, weight});
            adj[v].push_back({u, weight});
        }

        return solve(adj, n, distance);
    }
};
