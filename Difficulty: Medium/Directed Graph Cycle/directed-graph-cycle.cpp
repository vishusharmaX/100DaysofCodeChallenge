//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int node, vector<int> adj[],vector<bool> &path, vector<bool>& visited){
        path[node] = 1;
        visited[node] = 1;
        
        for(int i = 0;i < adj[node].size(); i++){
            if(path[adj[node][i]])
                return 1;
            if(visited[adj[node][i]])
                continue;
            if(dfs(adj[node][i],adj,path,visited))
                return 1;
        }
        
        path[node] =0;
        
        return 0;
        
    }
    
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool>path(V,0);
        vector<bool>visited(V,0);
        for(int i = 0; i< V; i++){
         if(!visited[i]){
             if(dfs(i,adj,path,visited) == 1)
                return 1;
            }
        }
        
        return 0;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends