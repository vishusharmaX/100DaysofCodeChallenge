//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool issafe(int i , int j, int n , int m ,vector<vector<int>>&mat,vector<vector<int>>&visited){
        
        if( i >=0 && j>= 0 && i <n && j < m && mat[i][j] == 1 && visited[i][j] == 0)
            return true;
        
        return false;
        
    }
    void solve(vector<vector<int>>&mat, int i, int j , string temp , vector<vector<int>>&visited,vector<string>&ans){
        int n = mat.size();
        int m = n;
        if(i == n-1 && j == n-1){
            ans.push_back(temp);
            return;
        }
        visited[i][j] = 1;
        //down
        if(issafe(i+1,j,n,m,mat,visited)){
            solve(mat,i+1,j,temp+'D',visited,ans);
        }
        //left
        if(issafe(i,j-1,n,m,mat,visited)){
            solve(mat,i,j-1,temp+'L',visited,ans);
        }
        //right
        if(issafe(i,j+1,n,m,mat,visited)){
            solve(mat,i,j+1,temp+'R',visited,ans);
        }
        //up
        if(issafe(i-1,j,n,m,mat,visited)){
            solve(mat,i-1,j,temp+'U',visited,ans);
        }
        visited[i][j] = 0;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string>ans;
        int n = mat.size();
        vector<vector<int>>visited(n,vector<int>(n,0));
        if(mat[0][0] == 0 || mat[n-1][n-1] == 0)
            return ans;
        
        
        string temp;
        
        solve(mat,0,0,temp,visited,ans);
        
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