//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    int dfs(int sr, int dest, vector<int>adj[],vector<int>&path){
        if (sr == dest) {
            return 1;
        }
        
        path[sr] = 1;
        int cnt = 0;
        for(int i = 0; i<adj[sr].size(); i++){
        
            if(!path[adj[sr][i]])
                cnt += dfs(adj[sr][i],dest,adj,path);
        }
        path[sr] = 0;
        
        return cnt;
        
    }
    
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // Code here
        vector<int>path(V,0);
        
        return dfs(source,destination,adj,path);
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}
// } Driver Code Ends