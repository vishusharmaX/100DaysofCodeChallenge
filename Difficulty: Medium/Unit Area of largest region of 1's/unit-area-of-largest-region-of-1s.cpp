//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        
        int maxi = 0;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0; j< m; j++){
                if(grid[i][j] == 1){
                   int cnt  = 0;
                    q.push({i,j});
                    grid[i][j] = 2;
                    while(!q.empty()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        cnt++;
                        int row[] = {-1,-1,-1,1,1,1,0,0};
                        int col[] = {-1,0,1,-1,0,1,-1,1};
                        
                        for(int k = 0; k < 8; k++){
                            int newx = x + row[k];
                            int newy = y + col[k];
                            
                            if(newx>=0 && newx < n && newy>=0 && newy < m && grid[newx][newy] == 1){
                                grid[newx][newy] = 2;
                                q.push({newx,newy});
                            }
                        }
                    }
                    
                    maxi = max(cnt , maxi);
                }
            }
        }
        
        return maxi;
        
    }
};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends