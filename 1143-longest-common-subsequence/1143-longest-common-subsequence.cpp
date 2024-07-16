class Solution {
public:
    int  solve(string &s, string &t, int n , int m, vector<vector<int>>&dp){
        if(n== 0 || m == 0)
            return 0;
        
        if(dp[n][m] != -1)
            return dp[n][m];

        if(s[n-1] == t[m-1])
            dp[n][m] =  1 + solve(s,t,n-1,m-1,dp);
        else{
            dp[n][m] = max(solve(s,t,n,m-1,dp), solve(s,t,n-1,m,dp));
        }
         return dp[n][m]; 
    }
    int longestCommonSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        // return solve(s,t,n,m,dp);  
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < m+1; j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }

        return dp[n][m];
         
    }
};