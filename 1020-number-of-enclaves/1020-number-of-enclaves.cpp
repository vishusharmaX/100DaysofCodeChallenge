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
        }
        for (int j = 1; j < m; j++) {  // 4
            if (grid[n-1][j] == 1) {
                bfs(n-1, j, grid);
            }
        }

        for (int j = 1; j < m; j++) {  // 5
            if (grid[0][j] == 1) {
                bfs(0, j, grid);
            }
        }
        for (int i = 1; i < n-1; i++) {  // 6
            if (grid[n-1][i] == 1) {
                bfs(n-1, i, grid);
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