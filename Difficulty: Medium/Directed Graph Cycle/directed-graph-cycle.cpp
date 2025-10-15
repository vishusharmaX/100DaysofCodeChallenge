class Solution {
  public:
    bool solve(int node ,vector<vector<int>>&adj,vector<int>&visited, vector<int>&path){
        path[node] = 1;
        visited[node] = 1;
        
        for(int i = 0; i < adj[node].size(); i++){
            if(path[adj[node][i]]) return 1;
            if(visited[adj[node][i]])continue;
            
            if(solve(adj[node][i],adj,visited, path))return 1;
           
        }
        
        path[node] = 0;
        return 0;
    }
  
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>>adj(V);
        vector<int>path(V,0);
         vector<int>visited(V,0);
        for(int i = 0; i < edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        
        for(int i = 0; i < V;i++){
            if(visited[i] == 0 && solve(i,adj,visited,path)){
                return 1;
            }
        }
        
        return 0;
        
        
        
    }
};