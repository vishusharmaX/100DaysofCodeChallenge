class Solution {
public:
    int solve(string s, string t, int n, int m,vector<vector<int>>&dp){

        if(n < 0 || m < 0){
            return 0;
        }


        if(dp[n][m] != -1){
            return dp[n][m];
        }

        if(s[n] == t[m]){
            dp[n][m] =  1 + solve(s,t,n-1,m-1,dp);
        }else{
            dp[n][m] = max(solve(s,t,n,m-1,dp), solve(s,t,n-1,m,dp));
        }
        return dp[n][m];
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length() , m = text2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));

        return solve(text1,text2,n-1,m-1,dp);
    }
};