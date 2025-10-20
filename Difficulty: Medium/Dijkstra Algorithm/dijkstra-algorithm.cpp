// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Step 1: Build adjacency list
        vector<pair<int, int>> adj[V]; 
        for (auto &edge : edges) {
            int u = edge[0], v = edge[1], w = edge[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w}); 
        }

      
        vector<int> explored(V, 0);
        vector<int> dist(V, INT_MAX);
        dist[src] = 0;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,src});
        
        while (!pq.empty()) {
            int node = pq.top().second;
            pq.pop();

            if(explored[node] == 1)continue;
            
            explored[node] = 1;
            
            for (int j = 0; j < adj[node].size(); j++) {
                int neig = adj[node][j].first;
                int weight = adj[node][j].second;

                if (!explored[neig] && dist[node] + weight < dist[neig]) {
                    dist[neig] = dist[node] + weight;
                    pq.push({dist[neig],neig});
                }
            }
        }

        return dist;
    }
};
