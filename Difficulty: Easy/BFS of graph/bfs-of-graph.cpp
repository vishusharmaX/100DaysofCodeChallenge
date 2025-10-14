class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int V= adj.size();
        vector<bool>visited(V,0);
        vector<int>ans;
        queue<int>q;
        q.push(0);
        visited[0] = 1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int i = 0; i< adj[node].size(); i++){
                if(visited[adj[node][i]] == 0){
                    q.push(adj[node][i]);
                    visited[adj[node][i]] = 1;
                }
            }
        }
        
        return ans;
    }
};