class Solution {
public:

    vector<vector<string>>ans;
    bool check(int row , int col, vector<string>&board){
        int n =board.size();
        //left
        for(int i = 0; i < col;i++){
            if(board[row][i] == 'Q')
                return false;
        }


        int i = row, j = col;
        while(i >= 0 && j >= 0){
            if(board[i][j] == 'Q')
                return false;
            i--;
            j--;
        }
        i = row, j = col;
        while(i < n && j >= 0){
            if(board[i][j] == 'Q')
                return false;
            i++;
            j--;
        }


        return true;



    }
    void solve(int colindx, vector<string>board,int n){
        if(colindx == n){
            ans.push_back(board);
            return;
        }

        for(int row = 0; row <n; row++){
            if(check(row,colindx,board)){
                board[row][colindx] = 'Q';
                solve(colindx+1,board,n);
                board[row][colindx] = '.';
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        solve(0,board,n);

        return ans;
    }
};