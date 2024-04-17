class Solution {
public:
    vector<vector<string>> result;
    int N ;

    bool isValid(vector<string>&board , int row , int col){

        //upward direction
        for(int i = row-1; i>= 0 ; i--){
            if(board[i][col] == 'Q')
                return false;
        }

        //upward left diagonal
        for(int i = row-1, j = col-1; i >= 0 && j>= 0 ; i--, j--){
            if(board[i][j] == 'Q')
                return false;
        }

        //upward right diagonal
        for(int i = row-1, j = col+1; i >= 0 && j < N ; i--, j++){
            if(board[i][j] == 'Q')
                return false;
        }


        return true;

    }

    void solve(vector<string>&board , int i ){

        if(i >= N){
            result.push_back(board);
            return;
        }

        for(int col = 0 ; col < N ; col++){
            if(isValid(board,i,col)){
                board[i][col] = 'Q';
                solve(board,i+1);
                board[i][col] = '.';
            }
        }

    }

    vector<vector<string>> solveNQueens(int n) {
        N = n;
        vector<string> board(n,string(n,'.'));
        solve(board,0);

        return result;
    }
};