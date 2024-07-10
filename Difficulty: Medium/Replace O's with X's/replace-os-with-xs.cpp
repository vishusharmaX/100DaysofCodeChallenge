//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
       
        queue<pair<int, int>> q;

        // First row
        for (int j = 0; j < m; j++) {
            if (mat[0][j] == 'O') {
                q.push({0, j});
                mat[0][j] = 'T';
            }
        }

        // First column
        for (int i = 1; i < n; i++) {
            if (mat[i][0] == 'O') {
                q.push({i, 0});
                mat[i][0] = 'T';
            }
        }

        // Last row
        for (int j = 0; j < m; j++) {
            if (mat[n-1][j] == 'O') {
                q.push({n-1, j});
                mat[n-1][j] = 'T';
            }
        }

        // Last column
        for (int i = 1; i < n; i++) {
            if (mat[i][m-1] == 'O') {
                q.push({i, m-1});
                mat[i][m-1] = 'T';
            }
        }
        
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            int row[] = {-1,1,0,0};
            int col[] = {0,0,-1,1};
            
            for(int k = 0; k < 4; k++){
                int newx = x + row[k];
                int newy = y + col[k];
                
                if(newx >= 0 && newx < n && newy >= 0 && newy <m && mat[newx][newy] == 'O'){
                    q.push({newx,newy});
                    mat[newx][newy] = 'T';
                }
            }
            
            
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < m; j++){
                if(mat[i][j] == 'O'){
                    mat[i][j] = 'X';
                }
                else if(mat[i][j] =='T'){
                    mat[i][j] = 'O';
                }
            }
        }
        
        
        return mat;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends