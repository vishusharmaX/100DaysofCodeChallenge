//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        for(int i = 0; i < n; i++ ){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        
        int cnt = 0;
        
        while(!q.empty()){
            int size = q.size();
            bool flag = false;
            while(size--){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                int dirx[] = {-1,1,0,0};
                int diry[] = {0,0,-1,1};
                
                for(int k = 0;k < 4; k++){
                    int newx = x + dirx[k];
                    int newy = y + diry[k];
                    
                    
                    if(newx>= 0 && newx < n && newy >= 0 && newy < m && grid[newx][newy] == 1){
                        q.push({newx,newy});
                        grid[newx][newy] = 2;
                        flag = true;
                    }
                    
                }
            }
            if(flag)
                cnt++;
        }
        
       for(int i = 0; i < n; i++ ){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        
        return cnt;
        
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends