class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int n = mat.size();
        int m = mat[0].size();

        for(int i = 0; i < n; i++){
            ans += mat[i][i];
        }

        for(int i = 0; i < n; i++){
            ans += mat[i][n - i - 1];
        }

        if(n % 2 == 1){
            ans -= mat[n/2][m/2];
        }

        return ans;
    }
};
