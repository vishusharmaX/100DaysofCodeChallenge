class Solution {
public:
    vector<vector<string>> ans;
    bool issafe( vector<string> board, int row, int col){
        
        // vertical up
        for(int i = row-1; i >=0 ; i--){
        if (board[i][col] == 'Q') return false;
        }
        
        //digonal left
        for(int i = row-1 , j=col-1 ; i >= 0 && j >= 0; i--,j-- ){
            if (board[i][j] == 'Q') return false;
        }
        
        //digonal right
        for(int i = row-1 , j=col+1 ; i >= 0 && j < board.size(); i--,j++ ){
            if (board[i][j] == 'Q') return false;
        }
        return true;
    }
    void solve(int n,int row ,vector<string>temp){
        if(row == temp.size()){
            ans.push_back(temp);
            return;
        }

        for(int i = 0; i < temp.size(); i++){
            if(issafe(temp,row,i)){
                temp[row][i] = 'Q';
                solve(n,row+1,temp);
                temp[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>temp(n,string(n,'.'));
        solve(n,0,temp);
        return ans;
    }
};