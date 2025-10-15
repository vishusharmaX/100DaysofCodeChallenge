class Solution {
  public:
    void solve(int node, vector<vector<int>>& adj, vector<bool>&visited,vector<int>&ans ){
        
        visited[node]= 1;
        
        for(int i = 0 ; i < adj[node].size(); i++){
            if(visited[adj[node][i]] == 0){
                solve(adj[node][i],adj,visited, ans);
            }
        }
        // cout<<"node"<<node<<"->";
        ans.push_back(node);
        
    }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        
        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }

        vector<bool>visited(V,0);
        vector<int>ans;
        
        for(int i = 0; i < V; i++){
            if(visited[i] == 0){
                solve(i, adj,visited, ans);
            }
        }   
        
        reverse(ans.begin(),ans.end());
        // for(auto it: ans){
        //     cout<<it<<" ";
        // }
        
        // cout<<endl;
        
        return ans;
        
        
    }
};