class Solution {
public:
    int solve(int i  , int j , vector<vector<int>>& grid, int sum,vector<vector<int>>&dp){

        int mini = 1e9;
        if(i == 0 && j== 0)
            return grid[i][j];

        if(i < 0 || j < 0)
            return mini;
        
        if(dp[i][j] != -1)
            return dp[i][j];

        int top = grid[i][j] + solve(i-1,j,grid,sum,dp);
        int left = grid[i][j] + solve(i,j-1,grid,sum,dp);

        return dp[i][j] = min(top,left);

    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,grid,0,dp);
    }
};