class Solution {
  public:
    
    void dfs(int node, vector<vector<int>>& adj, vector<bool>&visited, vector<int>&ans){
        
        visited[node] = 1;
        ans.push_back(node);
        for(int i = 0; i < adj[node].size(); i++){
            if(visited[adj[node][i]] == 0){
                dfs(adj[node][i],adj,visited, ans);
                visited[adj[node][i]] = 1;
            }
        }
        
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int v = adj.size();
        vector<bool>visited(v,0);
        vector<int>ans;
        
        dfs(0,adj,visited,ans);
        
        return ans;
        
    }
};