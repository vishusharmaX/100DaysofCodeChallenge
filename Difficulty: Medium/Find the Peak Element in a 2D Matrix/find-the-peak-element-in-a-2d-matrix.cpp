class Solution {
  public:
    int solve(vector<int>mat, int  i , int j){
        
    }
    
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // code here
       int n = mat.size();
       for(int i = 0; i < n; i++){
           for(int j = 0; j < mat[0].size(); j++){
                int up = INT_MIN, down = INT_MIN;
                int right = INT_MIN, left = INT_MIN;
                
                if(i-1 >= 0) up = mat[i-1][j];
                if(i+1 < n) down = mat[i+1][j];
                if(j-1  >= 0) left = mat[i][j-1];
                if(j+1 < mat[0].size())right = mat[i][j+1];
                
                if(mat[i][j] >= up && mat[i][j] >= down &&  mat[i][j] >= left && mat[i][j] >=right){
                    return {i,j};
                } 
           }
       }
       
       return {-1,-1};
    }
};
