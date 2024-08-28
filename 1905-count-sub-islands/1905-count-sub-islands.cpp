class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int subcnt = 0;
        int n = grid1.size();
        int m = grid1[0].size();
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid2[i][j] == 1) { 
                    bool flag = true;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    grid2[i][j] = 0;  // Mark visited in grid2
                    
                    while(!q.empty()) {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        
                        // Check if this part of grid2 is not in grid1's island
                        if(grid1[x][y] == 0) {
                            flag = false;
                        }

                        int dirx[] = {-1, 1, 0, 0};
                        int diry[] = {0, 0, -1, 1};

                        for(int k = 0; k < 4; k++) {
                            int newx = x + dirx[k];
                            int newy = y + diry[k];
                            
                            // Check boundaries and ensure the cell is part of grid2's island
                            if(newx >= 0 && newx < n && newy >= 0 && newy < m && grid2[newx][newy] == 1) {
                                q.push({newx, newy});
                                grid2[newx][newy] = 0;  // Mark visited in grid2
                            }
                        }
                    }

                    if(flag) {
                        subcnt++;
                    }
                }
            }
        }

        return subcnt;
    }
};
