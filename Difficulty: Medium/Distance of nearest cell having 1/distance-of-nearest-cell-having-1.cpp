//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size(),-1));
        queue<pair<int,int>>q;
        vector<vector<int>>visited(grid.size(),vector<int>(grid[0].size(),0));
        for(int i = 0 ; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    q.push({i,j});
                    visited[i][j] = 1;
                    ans[i][j] = 0;
                }
            }
        }

        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            int dirx[] = {-1,1,0,0};
            int diry[] = {0,0,-1,1};
            for(int k = 0; k <4; k++){
                int newx = x +dirx[k];
                int newy = y +diry[k];
                if (newx >= 0 && newx < m && newy >= 0 && newy < n && !visited[newx][newy]) {
                   q.push({newx,newy});
                   visited[newx][newy] = 1;
                   ans[newx][newy] = ans[x][y] +1;
                }
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        vector<vector<int>> ans = obj.nearest(grid);
        for (auto i : ans) {
            for (auto j : i) {
                cout << j << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends