class Solution {
  public:
    vector<int> findOrder(int n, vector<vector<int>> prerequisites) {
        // code here
        vector<vector<int>>adj(n);
        for(int i = 0; i < prerequisites.size(); i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            adj[v].push_back(u);
        }
        
        vector<int>indeg(n,0);
        
        for(int i = 0; i < adj.size(); i++){
            for(int j = 0; j < adj[i].size(); j++){
                indeg[adj[i][j]]++;
            }
        }
        queue<int>q;
        for(int i = 0; i < indeg.size();i++){
            if(indeg[i]==0)q.push(i);
        }
        vector<int>ans;
        vector<int>temp;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            ans.push_back(node);
            
            for(int i = 0; i < adj[node].size(); i++){
                indeg[adj[node][i]]--;
                if(indeg[adj[node][i]] == 0)
                    q.push(adj[node][i]);
                
            }
            
            
        }
        
        return ans.size()==n ? ans : temp;
        
    }
};