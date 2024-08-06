class Solution {
public:
    void bfs(int i, int j , vector<vector<int>>&grid){
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        q.push({i,j});
        grid[i][j] = 0;
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            int dirx[] = {-1,1,0,0};
            int diry[] = {0,0,-1,1};

            for(int k = 0; k < 4; k++){
                int newx = x + dirx[k];
                int newy = y + diry[k];

                if(newx >= 0 && newx< n && newy>=0 && newy < m && grid[newx][newy] == 1){
                    grid[newx][newy] = 0;
                    q.push({newx,newy});
                }
            }

        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

         for (int i = 0; i < n; i++) {
            if (grid[i][0] == 1) {
                bfs(i, 0, grid);
            }
            if (grid[i][m-1] == 1) {
                bfs(i, m-1, grid);
            }
        }
        for (int j = 0; j < m; j++) {
            if (grid[0][j] == 1) {
                bfs(0, j, grid);
            }
            if (grid[n-1][j] == 1) {
                bfs(n-1, j, grid);
            }
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m ; j++){
                if(grid[i][j] == 1){
                    cnt++;
                }
            }
        }

        return cnt;
    }
};