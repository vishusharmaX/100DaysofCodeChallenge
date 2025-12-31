class Solution {
public:
    
    vector<vector<int>>dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    bool can_cross_on_day(int day, vector<vector<int>>& cells, int row, int col){
        
        vector<vector<int>>grid(row, vector<int>(col, 0));

        for(int i = 0 ; i<day; i+=1){
            int r = cells[i][0] - 1;
            int c = cells[i][1] - 1;
            grid[r][c] = 1;
        }

        queue<pair<int, int>> q;
        vector<vector<int>>visit(row, vector<int>(col, 0));

        for(int c = 0; c<col; c++){
            if(grid[0][c] ==0){
                q.push({0, c});
                visit[0][c] = 1;
            }
        }

        while(!q.empty()){
            auto[curr_row, curr_col] = q.front();
            q.pop();

            if(curr_row == row-1)return 1;

            for(auto & d : dir){
                int next_row = curr_row + d[0];
                int next_col = curr_col + d[1];

                if(next_row>=0 and next_row<row and next_col>=0 and next_col<col and grid[next_row][next_col]==0 and !visit[next_row][next_col]){
                    q.push({next_row, next_col});
                    visit[next_row][next_col] = 1;
                }
            }
        }
        return 0;
    }

    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int st = 1;
        int end = cells.size();
        int ans = 0;

        while(st<=end){
            int mid = st + (end - st)/2;

            if(can_cross_on_day(mid, cells, row, col)){
                ans = mid;
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return ans;
    }
};