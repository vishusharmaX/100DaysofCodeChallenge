class Solution {
public:
    bool isBipartite(vector<vector<int>>& adj) {
        
        int V = adj.size();
        vector<int>color(V,-1);
        queue<int>q;


        
        for(int i = 0; i < V; i++){
            if(color[i] == -1){
                q.push(i);
        color[i] = 1;

        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(int i = 0; i < adj[node].size(); i++){
                //assign color to node

                if(color[adj[node][i]] == -1){
                    color[adj[node][i]] = (color[node] + 1)%2;
                    q.push(adj[node][i]);
                }

                else{
                    if(color[node] == color[adj[node][i]]){
                        return 0;
                    }
                }

            }
        }
            }
        }


        return 1;

    }
};