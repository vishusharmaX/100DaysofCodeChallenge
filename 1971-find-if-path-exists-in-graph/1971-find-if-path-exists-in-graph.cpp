class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int,vector<int>>mpp;

        for(vector<int>&edge : edges){
            int u = edge[0];
            int v = edge[1];

            mpp[u].push_back(v);
            mpp[v].push_back(u);
        }

        vector<bool>visited(n+1,false);
        queue<int>q;
        q.push(source);
        visited[source]= true;

        while(!q.empty()){
            int val = q.front();
            q.pop();
            if(val == destination) return true;
            for(auto it : mpp[val]){
                if(!visited[it]){
                    q.push(it);
                    visited[it] = true;
                }
            }
        }

        return false;
    }
};