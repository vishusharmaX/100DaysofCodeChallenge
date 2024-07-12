//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void DFS(int node,vector<pair<int,int>> adj[] ,vector<bool>&visited,stack<int>&st){
        visited[node] = 1;
        
        for(int i = 0;i <adj[node].size(); i++){
            if(!visited[adj[node][i].first])
                DFS(adj[node][i].first,adj,visited,st);
        }
        
        st.push(node);
    }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int,int>>adj[N];
        
        //phele adjacency matrix banao
        /// toplogical sort laago DFS
        for(int i =0 ; i < M ; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];
            
            adj[u].push_back(make_pair(v,weight));
        }
        
        stack<int>st;
        vector<bool>visited(N,0);
        DFS(0,adj,visited,st);
        
        vector<int>ans(N,INT_MAX);
        ans[0] = 0;
        while(!st.empty()){
            int node = st.top();
            st.pop();
            
            for(int i = 0; i < adj[node].size(); i++){
                int neighbour = adj[node][i].first;
                int weight = adj[node][i].second;
                ans[neighbour] = min(ans[neighbour],weight + ans[node]);
            }
        }
        
        for(int i = 0; i < N; i++){
            if(ans[i] == INT_MAX)
                ans[i] = -1;
        }
        
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends