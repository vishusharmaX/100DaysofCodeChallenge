//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:



    void dfs(int node,vector<vector<int>>&ans,int parent,vector<int>&visited,vector<int> adj[]){
        
        ans[parent][node]=1;
        //cout<<parent<<" "<<node<<endl;
        visited[node]=1;
        for(auto i: adj[node]){
            if(!visited[i]) dfs(i,ans,parent,visited,adj);
        }
        
    }
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
        vector<int> adj[N];
        vector<vector<int>> ans(N,vector<int>(N,0));
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i!=j){ 
                    if(graph[i][j]==1){
                    adj[i].push_back(j);
                    }
                    
                }
                else ans[i][j]=1;
            }
        }
        // for(int i=0;i<N;i++){
        //     for(auto j: adj[i]){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<N;i++){
            vector<int> visited(N,0);
            dfs(i,ans,i,visited,adj);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}
// } Driver Code Ends