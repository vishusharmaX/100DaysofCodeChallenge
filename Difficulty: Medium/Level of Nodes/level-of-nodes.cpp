//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    queue<int>q;
	    q.push(0);
	    vector<int>visited(V,0);
	    visited[0] = 1;
	    int level = 0;
	    while(!q.empty()){
	        int size = q.size();
	        while(size--){
	            int node = q.front();
	            q.pop();
	           // cout<<"loopke andar"<<node<<endl;
	            if(node == X){
	                return level;
	            }
	            for(int i = 0; i <adj[node].size(); i++){
	                if(!visited[adj[node][i]]){
	                    visited[adj[node][i]] = 1;
	                    q.push(adj[node][i]);
	                }
	            }
	        }
	        level++;
	    }
	    
	    return -1;
	}
};


//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends