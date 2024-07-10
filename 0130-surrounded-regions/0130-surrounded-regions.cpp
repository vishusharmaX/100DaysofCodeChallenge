class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        if(n == 0) return; 
        queue<pair<int,int>>q;

        //first row
        for(int j = 0; j < m ; j++){
            if(board[0][j] == 'O'){
                q.push({0,j});
                board[0][j] = 'T';
            }
        }

        //first col
        for(int i = 1; i < n ; i++){
            if(board[i][0] == 'O'){
                q.push({i,0});
                board[i][0] = 'T';
            }
        }
        //last row
        for(int j = 0; j < m ; j++){
            if(board[n-1][j] == 'O'){
                q.push({n-1,j});
                board[n-1][j] = 'T';
            }
        }
        //last col
        for(int i = 1; i < n-1 ; i++){
            if(board[i][m-1] == 'O'){
                q.push({i,m-1});
                board[i][m-1] = 'T';
            }
        }
       while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            int row[] = {-1, 1, 0, 0};
            int col[] = {0, 0, -1, 1};

            for(int k = 0; k < 4; k++) {
                int newx = x + row[k];
                int newy = y + col[k];

                if(newx >= 0 && newx < n && newy >= 0 && newy < m && board[newx][newy] == 'O') {
                    q.push({newx, newy});
                    board[newx][newy] = 'T'; 
                }
            }
        }


        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(board[i][j] == 'O') {
                    board[i][j] = 'X'; 
                } else if(board[i][j] == 'T') {
                    board[i][j] = 'O'; 
                }
            }
        }
    }
};