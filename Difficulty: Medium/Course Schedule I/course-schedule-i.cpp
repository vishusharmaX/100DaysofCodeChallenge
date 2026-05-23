class Solution {
  public:
    bool solve(int node, vector<vector<int>>&adj,vector<int>&visited, vector<int>&pathvisited){
        visited[node] = 1;
        pathvisited[node] = 1;
        
        for(int i = 0; i < adj[node].size(); i++){
            int neighbour = adj[node][i];

            if(!visited[neighbour]) {

                if(solve(neighbour, adj, visited, pathvisited)) {
                    return true;
                }
            }

            else if(pathvisited[neighbour]) {
                return true;
            }
        }
         pathvisited[node] = 0;
         
         return false;
        
    }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        // Code here
        vector<vector<int>>adj(n);
        for(int  i = 0; i < prerequisites.size(); i++ ){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            adj[v].push_back(u);
        }
        
        vector<int>visited(n,0);
        vector<int>pathvisited(n,0);
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                if(solve(i,adj,visited,pathvisited)){
                    return false;
                };
            }
        }
        
        return true;
        
        
       
        
    }
};