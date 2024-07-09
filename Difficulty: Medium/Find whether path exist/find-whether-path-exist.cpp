//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        
        for(int i = 0; i < n ; i++){
            for(int  j = 0; j < m ; j++){
                if(grid[i][j] == 1){
                    q.push({i,j});
                    visited[i][j] = 1;
                }
            }
        }
        
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            int dirx[] = {-1,1,0,0};
            int diry[] = {0,0,-1,1};
            
            for(int k = 0; k < 4; k++){
                int newx = x+dirx[k];
                int newy = y+diry[k];
                
                if(newx>= 0 && newx<n && newy >= 0 && newy< m && !visited[newx][newy]){
                    if(grid[newx][newy] == 2){
                        return true;
                    }
                    if(grid[newx][newy] == 3){
                        q.push({newx,newy});
                        visited[newx][newy]= 1;
                    }
                }
            }
        }
        
        return false;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends