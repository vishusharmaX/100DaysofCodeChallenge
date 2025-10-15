class Solution {
public:
    bool issafe(int x,int y, vector<vector<char>>&grid){
        
        return (x>=0 && x< grid.size() && y >=0 && y < grid[0].size()  && grid[x][y] =='1');
    }
    
    int numIslands(vector<vector<char>>& grid) {
         int r = grid.size();
        int c = grid[0].size();
        
        queue<pair<int,int>>q;
        
        int cnt = 0;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(grid[i][j] == '1'){
                    cnt++;
                    q.push({i,j});
                    grid[i][j] = '0';
                    while(!q.empty()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        
                        int dirx[] = {-1,1,0,0};
                        int diry[] = {0,0,-1,1};

                        
                        for(int k = 0;k < 4; k++){
                            int newx = x + dirx[k];
                            int newy = y + diry[k];
                            
                            if(issafe(newx,newy,grid)){
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