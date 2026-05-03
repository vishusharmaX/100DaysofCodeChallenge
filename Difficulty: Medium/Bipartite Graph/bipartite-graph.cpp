class Solution {
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        
        
        vector<vector<int>>adj(V);
        
        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        
        vector<int> color(V, -1);
        
        for(int j = 0; j < V; j++){
            if(color[j] == -1){
                
                queue<int> q;
                q.push(j);
                color[j] = 0;
                
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    
                    for(int k = 0; k < adj[node].size(); k++){
                        int neigh = adj[node][k];
                        
                        if(color[neigh] == -1){
                            color[neigh] = (color[node] + 1) % 2;
                            q.push(neigh);
                        }
                        else if(color[node] == color[neigh]){
                            return false;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};