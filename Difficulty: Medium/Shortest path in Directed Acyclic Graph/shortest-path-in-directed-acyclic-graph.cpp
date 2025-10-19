// User function Template for C++
class Solution {
  public:
    void solve(int node,vector<vector<pair<int,int>>>adj, vector<int>&visited,stack<int>&st){
        visited[node] = 1;
        
        for(int i = 0;i <adj[node].size(); i++){
            if(visited[adj[node][i].first] == 0){
                solve(adj[node][i].first,adj,visited,st);
            }
        }
        
        st.push(node);
    }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int,int>>> adj(V);  // Resize to V

        
        for(int i= 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];
            adj[u].push_back({v,weight});
        }
        
        stack<int>st;
        vector<int>visited(V,0);
        solve(0,adj,visited,st);
        
       
        vector<int>dist(V,INT_MAX);
         dist[0] = 0;
        while(!st.empty()){
            int node = st.top();
            st.pop();
            
            for(int i = 0; i < adj[node].size(); i++){
                int neig = adj[node][i].first;
                int weight = adj[node][i].second;
                
                dist[neig] = min(dist[neig] , dist[node] + weight);
            }
        }
        
        for(int i = 0; i < dist.size(); i++){
            if(dist[i] == INT_MAX)
                dist[i] = -1;
        }
        
        return dist;
        
    }
};
