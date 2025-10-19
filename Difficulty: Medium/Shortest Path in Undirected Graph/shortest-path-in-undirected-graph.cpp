class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        int n = adj.size();
        vector<int>dist(n,-1);
        vector<int>visited(n,0);
        
        queue<int>q;
        q.push(src);
        visited[src] = 1;
        dist[src] = 0;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(int i= 0; i < adj[node].size(); i++){
                if(visited[adj[node][i]])continue;
                
                visited[adj[node][i]]=1;
                q.push(adj[node][i]);
                dist[adj[node][i]] = dist[node]+1;
            }
        }
        
        return dist;
        
        
        
        
    }
};