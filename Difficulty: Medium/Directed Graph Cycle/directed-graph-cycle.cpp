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
        for(int i = 0; i < edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        vector<int>indeg(V,0);
        
        for(int i = 0; i < adj.size(); i++){
            for(int j = 0; j < adj[i].size(); j++){
                indeg[adj[i][j]]++;
            }
        }
        
        queue<int>q;
        
        for(int i = 0; i <indeg.size(); i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }
        
        int cnt = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cnt++;
            
            for(int i = 0; i < adj[node].size(); i++){
                indeg[adj[node][i]]--;
                if(indeg[adj[node][i]] ==0){
                    q.push(adj[node][i]);
                }
            }
        }
        
        
        return cnt != V;
        
        
    }
};