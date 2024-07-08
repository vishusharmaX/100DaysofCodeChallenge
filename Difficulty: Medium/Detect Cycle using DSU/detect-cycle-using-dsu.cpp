//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to detect cycle using DSU in an undirected graph.
	bool solve(int node , int parent , vector<int>adj[],vector<int>&visited){
	    visited[node] = 1;
	    
	    for(int i = 0 ; i < adj[node].size();i++){
	        if(parent  == adj[node][i])
	            continue;
	       
	       if(visited[adj[node][i]] == 1)
	        return 1;
	       
	       if(solve(adj[node][i] , node,adj, visited)){
	           return 1;
	       }
	    }
	    
	    return 0;
	}
	
	
	int detectCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int>visited(V,0);
	    
	    for(int i = 0 ;i < V; i++){
	        if(!visited[i] &&  solve(i,-1,adj,visited)){
	           return 1;
	        }
	    }
	    
	    return 0;
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
		int ans = obj.detectCycle(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends