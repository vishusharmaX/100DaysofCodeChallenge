class Solution {
  public:
  
     void solve(int node,vector<vector<int>>&adj ,vector<int>&visited,vector<int>&ans){
        
        visited[node] = 1;
        
        for(int i = 0; i < adj[node].size(); i++){
            if(!visited[adj[node][i]]){
                solve(adj[node][i],adj, visited, ans);
            }
        }
        
        
        ans.push_back(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        vector<vector<int>>adj(V);
        
        for(int i = 0 ; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }
        
        vector<int>ans;
        vector<int>visited(V,0);
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                solve(i,adj,visited,ans);
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};