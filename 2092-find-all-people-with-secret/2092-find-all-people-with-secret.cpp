class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int f) {
        vector<int> ans;
        int time = 0;
        set<pair<int, int>> q;
        q.insert({0, 0});
        q.insert({0, f});
        set<int> st;
        vector<pair<int, int>> adj[n + 1];
        for (auto x : meetings) {
            adj[x[0]].push_back({x[1], x[2]});
            adj[x[1]].push_back({x[0], x[2]});
        }
        while (q.size() > 0) {
            auto p = *q.begin();
            q.erase(q.find(p));
            int s = (p).second;
            if (st.count(s) == 0) {
                ans.push_back(s);
                st.insert(s);
            }
            if (adj[p.second].size() == 0) {
                continue;
            }
            for (auto y : adj[p.second]) {
                if (y.second >= p.first && st.count(y.first) == 0) {
                    q.insert({y.second, y.first});
                }
            }
        }
        return ans;
    }
};