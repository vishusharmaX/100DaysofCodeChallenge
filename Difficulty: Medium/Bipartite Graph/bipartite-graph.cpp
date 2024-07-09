//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int>color(V,-1);
	    queue<int>q;
	   
	    
	    for(int i = 0 ; i < V; i++){
	        if(color[i] == -1){
	             q.push(i);
	             color[i] = 0;
	        while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        
	        for(int i = 0 ; i < adj[node].size(); i++){
	            //color not assigned
	            if(color[adj[node][i]] == -1){
	                
	                color[adj[node][i]] = (color[node] +1)%2;
	                q.push(adj[node][i]);
	            }
	            
	            ///color assigned h
	           else{
	                if(color[node] == color[adj[node][i]])
	                   return 0;
	           }
	        }
	    }
	        }
	    }
	    
	    return 1;
	    
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
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends