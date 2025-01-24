class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        // find the first eventual safe state

        // adj list is given
        // no circular path starting from node

        //get the safe node/terminal node

        //traverse from the safe nodes to other nodes and fetch the indegree topological sorted
        int n = graph.size();
        vector<int> in(n,0);
        vector<int> res;
        vector<vector<int>> rg(n);

        queue<int> q;
        for(int i=0; i<n; i++) {
            if(graph[i].size()!=0) {
                in[i]=graph[i].size();
                for(int j=0; j<graph[i].size(); j++) {
                    int node = graph[i][j];
                    rg[node].push_back(i);
                }
            } else {
                q.push(i);
            }
        }

        //now explore further paths from safeNode
        while(!q.empty()) {
            int top = q.front();

            res.push_back(top);
            // cout<<top<<" :: ";
            //explore from the safe paths if we reach end nodes
            for(int i=0; i<rg[top].size(); i++) {
                int node = rg[top][i];
                // cout<<node<<" : "<<in[node]<<",";
                if(in[node]--==1) {
                    q.push(node);
                }
            }
            // cout<<"\n";

            q.pop();
        }
        sort(res.begin(), res.end());

        return res;
    }
};