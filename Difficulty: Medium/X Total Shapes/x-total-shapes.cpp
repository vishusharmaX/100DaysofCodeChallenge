//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visited(n, vector<int>(m,0));
        queue<pair<int,int>>q;
        int level = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 'X'){
                    q.push({i,j});
                    grid[i][j] = 'C';
                    level++;
                    while(!q.empty()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        int dirx[] = {-1,1,0,0};
                        int diry[] = {0,0,-1,1};
                        
                        for(int k = 0; k <4; k++){
                            int newx = x + dirx[k];
                            int newy = y + diry[k];
                            
                            if(newx >=0 && newy>=0 && newx <n && newy < m && grid[newx][newy] == 'X'){
                                q.push({newx,newy});
                                grid[newx][newy] = 'C';
                            }
                        }
                    }
                }
            }
        }
        return level;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}
// } Driver Code Ends