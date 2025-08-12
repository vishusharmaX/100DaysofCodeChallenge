class Solution {
  public:
    // Function to find a solved Sudoku.
    
    
    bool issafe(vector<vector<int>>&mat,int row , int col, int digit){
        
        
        for(int i = 0; i < mat.size(); i++){
              if(mat[i][col] == digit){
                  return false;
              } 
        }
        
        for(int j = 0; j < mat[0].size(); j++){
            if(mat[row][j] == digit){
                return false;
            }
        }
        
        
        int sr = (row/3)*3;
        int sc = (col/3)*3;
        
        for(int i = sr ; i < sr+3; i++){
            for(int j = sc;j <sc +3; j++ ){
                if(mat[i][j] == digit){
                    return false;
                }
            }
        }
        
        
        return true;
        
        
    }
    
    
    
    bool solve(vector<vector<int>>&mat, int row,int col){
        
        if(row == 9){
            return true;
        }
        
        int nextrow = row, nextcol = col+1;
        if(col +1  == 9){
            nextrow++;
            nextcol = 0;
        }
         if(mat[row][col] != 0){
            return solve(mat,nextrow,nextcol);
        }
        
        for(int i = 1; i<= 9; i++){
            if(issafe(mat,row,col,i)){
                mat[row][col] = i;
                if(solve(mat,nextrow,nextcol)){
                    return true;
                }
                mat[row][col] = 0;
            }
        }
        
         return false;
        
    }

    void solveSudoku(vector<vector<int>> &mat) {
        
        
        solve(mat,0,0);
        
    }
};