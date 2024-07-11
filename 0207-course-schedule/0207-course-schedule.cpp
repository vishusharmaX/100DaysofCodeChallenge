class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n  = prerequisites.size();
        vector<int>adj[numCourses];
        vector<int>indegree(numCourses,0);

        for(int i = 0 ; i < n ; i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }
        queue<int>q;
        for(int i = 0 ; i<numCourses ; i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        int cnt = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cnt++;

            for(int i = 0; i <adj[node].size(); i++){
                indegree[adj[node][i]]--;
                if(indegree[adj[node][i]] == 0)
                    q.push(adj[node][i]);
            }
        }


        return cnt == numCourses;

    }
};