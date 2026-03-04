class Solution {
public:
    bool solve(vector<vector<int>>&mat, int row, int col){
        int m = mat.size();
        int n = mat[0].size();

        for(int i = 0; i < m; i++){
            if(i != row && mat[i][col] == 1){
                return false;
            }
        }

        for(int j = 0; j < n; j++){
            if(j != col && mat[row][j] == 1){
                return false;
            }
        }

        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int cnt = 0;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j] == 1){
                    if(solve(mat,i,j)){
                        cnt++;
                    }
                }
            }
        }

        return cnt;

    }
};