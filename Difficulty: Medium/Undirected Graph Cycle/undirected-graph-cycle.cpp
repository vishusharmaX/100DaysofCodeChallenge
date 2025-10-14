class Solution {
  public:
    
    bool solve(int node,int parent,vector<vector<int>>& adj, vector<bool>&visited){
        visited[node] = 1;
        
        for(int i = 0; i < adj[node].size();i++){
            if(parent  == adj[node][i]){
                continue;
            }
            if(visited[adj[node][i]] == 1){
                return 1;
            }
            if(solve(adj[node][i],node,adj,visited)){
                return 1;
            }
            
        }
        
        return 0;

    }
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        
        // Code here
        vector<vector<int>> adj(V);
        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u); 
        }
        
        vector<bool>visited(V,0);
        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                if (solve(i, -1, adj, visited)) return true;
            }
        }

        return false;
    }
};