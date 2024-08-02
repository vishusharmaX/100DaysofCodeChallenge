class Solution {
public:
    // void bfs(int i, int j, vector<vector<int>>&grid){
    //     int n = grid.size();
    //     int m = grid[0].size();
        
    // }
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;
        int m = grid[0].size();
        queue<pair<int,int>>q;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
           int size = q.size();
           bool flag = false;
           while(size--){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                
                int dirx[] = {-1,1,0,0};
                int diry[] = {0,0,-1,1};

                for(int i = 0; i < 4; i++){
                    int newx = x + dirx[i];
                    int newy = y + diry[i];
                    if(newx >= 0 && newx <n && newy >= 0 && newy < m && grid[newx][newy]==1){
                        q.push({newx,newy});
                        grid[newx][newy] = 2;
                        flag  = true;
                    }
                }
           }
            if(flag){
                ans++;
            }
            
        }


        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return ans;
    }
};