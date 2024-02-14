//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void dfs(int node, int parent, int &timer, vector<int>& disc, vector<int>& low,
             vector<vector<int>>& result, unordered_map<int, list<int>>& adj, unordered_map<int, bool>& vis) {

        vis[node] = true;
        disc[node] = low[node] = timer++;

        for (auto nbr : adj[node]) {
            if (nbr == parent)
                continue;
            if (!vis[nbr]) {
                dfs(nbr, node, timer, disc, low, result, adj, vis);
                low[node] = min(low[node], low[nbr]);

                if (low[nbr] > disc[node]) {
                    result.push_back({min(node, nbr), max(node, nbr)});
                }
            } else {
                low[node] = min(low[node], disc[nbr]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int v, vector<int> adj[]) {
        unordered_map<int, list<int>> adjList;

        for (int i = 0; i < v; i++) {
            for (int j = 0; j < adj[i].size(); j++) {
                adjList[i].push_back(adj[i][j]);
            }
        }

        int timer = 0;

        vector<int> disc(v, -1);
        vector<int> low(v, -1);

        unordered_map<int, bool> vis;

        vector<vector<int>> result;

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                dfs(i, -1, timer, disc, low, result, adjList, vis);
            }
        }
        
        // Sort the result vector based on the first element of each pair
        sort(result.begin(), result.end());
        
        return result;
    }
};



//{ Driver Code Starts.

int main(){
	int tc;
    cin >> tc;
    while(tc--){
        int V, E;
        cin >> V >> E;
        vector<int>adj[V];
        for(int i = 0; i < E; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        vector<vector<int>>ans = obj.criticalConnections(V, adj);
        
        for(int i=0;i<ans.size();i++)
            cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
	return 0;
}
// } Driver Code Ends