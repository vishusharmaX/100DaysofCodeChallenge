class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {
        // code here
        vector<vector<int>>adj(V);
        
        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int>dist(V,-1);
        vector<int>visited(V,0);
        
        queue<int>q;
        q.push(src);
        dist[src] = 0;
        visited[src] = 1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(int i = 0; i < adj[node].size(); i++){
                if(!visited[adj[node][i]]){
                    visited[adj[node][i]] = 1;
                    dist[adj[node][i]] =  dist[node]+1;
                    q.push(adj[node][i]);
                }
            }
        }
        
        return dist;
    }
};
