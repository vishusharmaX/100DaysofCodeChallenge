class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        vector<pair<int, int>> adj[n+1]; 
        for (auto &edge : edges) {
            int u = edge[0] , v = edge[1] , w = edge[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w}); 
        }

        vector<int> explored(n+1, 0);
        vector<int> dist(n+1, INT_MAX);
        vector<int> parent(n+1, -1);


        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0, 1});
        dist[1] = 0;
        parent[1] = -1;

        while (!pq.empty()) {
            int node = pq.top().second;
            pq.pop();

            if (explored[node]) continue;
            explored[node] = 1;

            for (auto &edge : adj[node]) {
                int neigh = edge.first;
                int weight = edge.second;

                if (!explored[neigh] && dist[node] + weight < dist[neigh]) {
                    dist[neigh] = dist[node] + weight;
                    parent[neigh] = node;
                    pq.push({dist[neigh], neigh});
                }
            }
        }
        
        vector<int>path;
        if(parent[n] == -1){
            path.push_back(-1);
            return path;
        }
        int dest = n;
        
        while(dest != -1){
            path.push_back(dest);
            dest = parent[dest];
        }
        path.push_back(dist[n]);
        reverse(path.begin(),path.end());

        return path;
        
    }
};