
class Solution {
public:

    bool solve(vector<vector<char>>& board, string word,int i , int j , int index , int m , int n){
        
        if(index == word.length()){
            return true;
        }
        
        if(i < 0 || j < 0 || i >= m || j>=n || board[i][j] == '$' || board[i][j] != word[index]){
            return false;
        }
        
        char ch = board[i][j];
       board[i][j] = '$';
        int top = solve(board,word,i-1,j,index+1,m,n);
        int down = solve(board,word,i+1,j,index+1,m,n);
        int left = solve(board,word,i,j-1,index+1,m,n);
        int right = solve(board,word,i,j+1,index+1,m,n);
        
        board[i][j] = ch;
        
        return top||down||left||right;
        
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int m = board.size();
        int n = board[0].size();
        
        for(int i = 0 ;  i < m; i++){
            for(int j = 0; j<n; j++){
                if(board[i][j] == word[0]){
                    if(solve(board,word,i,j,0,m,n)){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};