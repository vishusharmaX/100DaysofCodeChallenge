//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        int parent[V];
        bool MST[V] = {false};
        int key[V];
        
        for(int i = 0; i < V; i++) {
            parent[i] = -1;
            key[i] = INT_MAX;
        }
        
        key[0] =0;
        
        for(int j=0;j<V;j++)
        {
            int u,mini = INT_MAX;
            // find Min Value from Key
            for(int i=0;i<V;i++)
            {
                if(key[i]<mini && MST[i] == false) 
                {
                    u =i;
                    mini = key[i];
                }
            }
            
            MST[u] = true;
            
            for(auto neighbour:adj[u])
            {
                int node = neighbour[0];
                int dist = neighbour[1];
                if(MST[node] == false && (dist < key[node]))
                {
                    key[node] = dist;
                    parent[node] = u;
                }
            }
        }
        int sum =0;
        for(int i=0;i<V;i++)
        {
            sum = sum+key[i];
        }
        
        return sum;
    }
};




//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends