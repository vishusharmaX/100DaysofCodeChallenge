//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int,int>>q;
        int cnt = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = 0;j < m; j++){
                if(grid[i][j] == '1'){
                    q.push({i,j});
                    grid[i][j] = '0';
                    cnt++;
                    while(!q.empty()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        int row[] = {-1,-1,-1,1,1,1,0,0};
                        int col[] = {-1,0,1,-1,0,1,-1,1};
                        
                        for(int k = 0; k< 8; k++){
                            int newx = x + row[k];
                            int newy = y + col[k];
                            
                            if(newx >= 0 && newx < n && newy >= 0 && newy < m && grid[newx][newy] == '1'){
                                q.push({newx,newy});
                                grid[newx][newy] = '0';
                            }
                        }
                    }
                }
            }
        }
        
        return cnt;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends