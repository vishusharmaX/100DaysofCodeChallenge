class Solution {
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<vector<int>>adj(V);
        
        for(int i= 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int>color(V,-1);
        queue<int>q;
        
        for(int i = 0; i < V; i++){
            if(color[i] == -1){
                 q.push(0);
        color[0] = 0;
        
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(int i = 0; i < adj[node].size(); i++){
                //if color is not assign
                if(color[adj[node][i]] == -1){
                    color[adj[node][i]] = (color[node] + 1)%2;
                    q.push(adj[node][i]);
                }
                
                else{
                    if(color[node] == color[adj[node][i]])return 0;
                }
            }
        }
        
        
        
                
            }
        }
        return 1;
        
    }
};