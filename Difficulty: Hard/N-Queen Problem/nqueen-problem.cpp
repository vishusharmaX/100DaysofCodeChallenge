// User function Template for C++

class Solution {
  public:
    vector<vector<int>>ans;
    
    bool issafe(vector<vector<int>>&board, int col, int n, int row){
        
        
        //left
        for(int i = row-1,j = col-1; i >= 0 && j >= 0 ; i--,j--){
            if(board[i][j] == 1){
                return false;
            }
        }
        
        
        //right
        
        for(int i = row-1 , j = col+1; i >= 0 && j < n; i--,j++){
            if(board[i][j] == 1) return false;
        }
        
        
        //vertical upward;
        for(int i = row; i >= 0 ; i--){
            if(board[i][col] == 1) return false;
        }
        
        
        return true;
        
                
    }
    
    
    void solve( vector<vector<int>>&board,int n, int row){
        if(row == n){
            vector<int>temp;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(board[i][j] == 1){
                        temp.push_back(j+1);
                    }
                }
            }
            
            ans.push_back(temp);
            
            return;
        }
        
        
        for(int i = 0; i < n; i++){
            if(issafe(board,i,n,row)){
                board[row][i] = 1;
                solve(board,n,row+1);
                board[row][i] = 0;
            }
        }
    }
    
    
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> board(n, vector<int>(n,0));
         
         solve(board, n, 0);
         return ans;
        
    }
};