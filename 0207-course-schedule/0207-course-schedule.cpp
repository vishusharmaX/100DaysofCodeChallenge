class Solution {
public:
    bool canFinish(int N, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(N);
        for(int i = 0; i < prerequisites.size(); i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            
            adj[v].push_back(u);
        }
        
        
        vector<int>indeg(N,0);
        
       for(int i = 0; i < adj.size(); i++){
            for(int j = 0; j < adj[i].size(); j++){
                indeg[adj[i][j]]++;
            }   

        }
        queue<int>q;
        for(int i = 0; i < indeg.size(); i++){
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
                if(indeg[adj[node][i]] == 0){
                    q.push(adj[node][i]);
                }
            }
        }
        
        
        return cnt == N;
    }
};