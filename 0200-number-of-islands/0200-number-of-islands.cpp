class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        

        queue<pair<int,int>>q;
        int cnt = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j= 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    q.push({i,j});
                    grid[i][j] = '0';
                    cnt++;
                    while(!q.empty()){
                        pair<int,int> node = q.front();
                        int x = node.first;
                        int y = node.second;
                        q.pop();
                        int dirx[] = {0,0,-1,1};
                        int diry[] = {-1,1,0,0};

                        for(int k = 0; k < 4; k++){
                            int newx = x + dirx[k];
                            int newy = y + diry[k];

                            if(newx >= 0 && newx < grid.size()  && newy >= 0 && newy < grid[0].size() && grid[newx][newy] == '1'){
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