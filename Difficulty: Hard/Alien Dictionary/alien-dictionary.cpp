class Solution {
public:
    void solve(string s, string t, vector<vector<int>>& adj, vector<int>& indegree) {
        int len = min(s.length(), t.length());
        for (int i = 0; i < len; i++) {
            if (s[i] != t[i]) {
                int u = s[i] - 'a';
                int v = t[i] - 'a';
                adj[u].push_back(v);
                indegree[v]++;
                break;
            }
        }
    }

    string findOrder(vector<string> &words) {
        vector<vector<int>> adj(26);
        vector<int> indegree(26, 0);
        vector<bool> present(26, false);

        // Mark all present characters
        for (auto &word : words)
            for (char c : word)
                present[c - 'a'] = true;

        // Build graph and validate prefix rule
        for (int i = 0; i < words.size() - 1; i++) {
            string s1 = words[i];
            string s2 = words[i + 1];

            // Prefix invalidation check
            if (s1.length() > s2.length() && s1.substr(0, s2.length()) == s2) {
                return "";  // Invalid case: "abc" before "ab"
            }

            solve(s1, s2, adj, indegree);
        }

        // Topological sort (Kahn's Algorithm)
        queue<int> q;
        for (int i = 0; i < 26; i++) {
            if (indegree[i] == 0 && present[i])
                q.push(i);
        }

        string result;
        while (!q.empty()) {
            int u = q.front(); q.pop();
            result += (u + 'a');
            for (int v : adj[u]) {
                indegree[v]--;
                if (indegree[v] == 0)
                    q.push(v);
            }
        }

        // If result length != number of present characters, there's a cycle
        int totalChars = count(present.begin(), present.end(), true);
        if (result.length() != totalChars)
            return "";  // Cycle detected

        return result;
    }
};
