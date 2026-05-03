// User function Template for C++
class Solution {
  public:
    void solve(int node,  vector<vector<pair<int,int>>>&adj, vector<int>&visited,stack<int>&ans){
        
        visited[node]= 1;
        
        for(int i = 0; i < adj[node].size(); i++){
            if(!visited[adj[node][i].first]){
                solve(adj[node][i].first,adj,visited,ans);
            }
        }
        
        ans.push(node);
    }
    
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int,int>>> adj(V);
        for(int i =0 ; i < E; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];
            
            adj[u].push_back(make_pair(v,weight));
        }
        
        stack<int>ans;
        vector<int>visited(V,0);
        solve(0,adj,visited,ans);
        
        vector<int> dist(V, 1e9);
        dist[0] = 0;

        while(!ans.empty()){
            int node = ans.top();
            ans.pop();

            if(dist[node] != 1e9){
                for(auto &it : adj[node]){
                    int v = it.first;
                    int wt = it.second;

                    if(dist[node] + wt < dist[v]){
                        dist[v] = dist[node] + wt;
                    }
                }
            }
        }

        for(int i = 0; i < V; i++){
            if(dist[i] == 1e9) dist[i] = -1;
        }

        return dist;
        
        
        
        
    }
};
