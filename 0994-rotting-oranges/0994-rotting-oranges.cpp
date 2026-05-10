class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
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

                int dirx[] = {0,0,-1,1};
                int diry[] = {-1,1,0,0};
                
                for(int i = 0; i < 4; i++){
                    int newx = x + dirx[i];
                    int newy = y + diry[i];

                    if(newx >= 0 && newx < n && newy >=0 && newy < m && grid[newx][newy] == 1){
                        q.push({newx,newy});
                        grid[newx][newy] = 2;
                        flag = true;
                    }
                }
            }
            if(flag){
                cnt++;
            }
        }


        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return cnt;
    }
};