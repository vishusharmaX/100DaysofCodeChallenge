class Solution {
public:
    bool issafe(vector<vector<char>>&board, int row, int col,char digit){
        //downward
        for(int i = 0; i <= 8; i++){
            if(board[i][col] == (digit)){
                return false;
            }
        }

        //horizontal
        for(int i = 0; i <= 8; i++){
            if(board[row][i] == (digit)){
                return false;
            }
        }

        //grid
        int sr = (row/3)*3;
        int sc = (col/3)*3;

        for(int i = sr; i<sr+3; i++){
            for(int j = sc ; j <sc+3; j++){
                if(board[i][j] == (digit)){
                    return false;
                }
            }
        }

        return true;

    }

    bool solve(vector<vector<char>>&board, int row, int col){

        if(row == 9){
            return true;
        }
        int nextrow = row, nextcol = col+1;
        if(col+1 == 9){
            nextrow++;
            nextcol = 0;
        }

        
            
       
        if(board[row][col] == '.'){
            for(char digit = '1'; digit <= '9'; digit++){
                if(issafe(board, row,col,digit)){
                    board[row][col] = (digit);
                    if(solve(board,nextrow,nextcol)){
                        return true;
                    }
                    board[row][col] = '.';
                }
            }

            return false;
        } else{
            return solve(board, nextrow,nextcol);
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};