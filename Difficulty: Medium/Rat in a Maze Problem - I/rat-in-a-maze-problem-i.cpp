//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool issafe(int newx, int newy, int n, int m,vector<vector<int>> &mat,vector<vector<int>>&visited ){
        
        if(newx >= 0 && newx < n && newy>=0 && newy < m && mat[newx][newy] == 1 && visited[newx][newy] != 1)
            return true;
        
        return false;
        
    }
    void solve(int i, int j, int n, int m,vector<vector<int>> &mat,string temp,vector<vector<int>>&visited,
    vector<string>&ans){
        
        if(i == n-1 && j== m-1){
            ans.push_back(temp);
            return ;
        }
        //down
        visited[i][j] = 1;
        if(issafe(i+1,j,n,m,mat,visited)){
            solve(i+1,j,n,m,mat,temp+'D',visited,ans);
            // visited[i+1][j] = 0;
        }
        //left
         if(issafe(i,j-1,n,m,mat,visited)){
            // visited[i][j-1] = 1;
            solve(i,j-1,n,m,mat,temp+'L',visited,ans);
            // visited[i][j-1] = 0;
        }
        //right
         if(issafe(i,j+1,n,m,mat,visited)){
            // visited[i][j+1] = 1;
            solve(i,j+1,n,m,mat,temp+'R',visited,ans);
            // visited[i][j+1] = 0;
        }
        //up
        if(issafe(i-1,j,n,m,mat,visited)){
            // visited[i-1][j] = 1;
            solve(i-1,j,n,m,mat,temp+'U',visited,ans);
        }
        visited[i][j] = 0;
        
    }
    
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        vector<string>ans;
        if(mat[0][0] == 0){
            return ans;
        }
        
        solve(0,0,n,m,mat,"",visited,ans);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends