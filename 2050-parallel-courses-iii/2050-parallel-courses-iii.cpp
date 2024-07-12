class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {

        vector<int>adj[n];
        vector<int>Indeg(n,0);

        for(int i =0;i<relations.size(); i++){
            adj[relations[i][0]-1].push_back(relations[i][1]-1);
            Indeg[relations[i][1]-1]++;
        }

        queue<int>q;
        for(int i = 0; i < n; i++)
        if(!Indeg[i])
        q.push(i);
        vector<int>coursetime(n,0);
        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(int i =0;  i < adj[node].size(); i++){
                Indeg[adj[node][i]]--;
                if(!Indeg[adj[node][i]])
                q.push(adj[node][i]);
                coursetime[adj[node][i]] = max(coursetime[adj[node][i]],coursetime[node]+time[node]);
            }
        }

        int ans = 0;

        for(int i = 0; i < n;i++){
            ans = max(ans,coursetime[i]+time[i]);
        }

        return ans;
        
    }
};