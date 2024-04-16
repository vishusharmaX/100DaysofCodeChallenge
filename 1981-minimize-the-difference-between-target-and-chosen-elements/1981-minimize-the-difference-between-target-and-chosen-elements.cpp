class Solution {
public:

    int dp[100][10000];

    int helper(int i, int j, int m, int n, vector<vector<int>>& mat, int target){

        if(i>=m) return abs(j-target);
        if(dp[i][j] != -1) return dp[i][j];

        int sum = INT_MAX;
        for(int k=0;k<n;k++){
            sum = min(sum, helper(i+1,j+mat[i][k],m,n,mat,target));
        }
        return dp[i][j] = sum;

    }
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        int m = mat.size(), n = mat[0].size();
        memset(dp,-1,sizeof(dp));
        return helper(0,0,m,n,mat,target);
    }
};