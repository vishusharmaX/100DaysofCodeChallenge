class Solution {
public:

    int solve2(int i, int j, string &s, string &t,vector<vector<int>>&dp){

        if(i < 0 || j < 0){
            return 0;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        if(s[i] == t[j]){
           return  dp[i][j] =  1 + solve2(i-1,j-1,s,t,dp);
        }

        return dp[i][j] = max(solve2(i-1,j,s,t,dp),solve2(i,j-1,s,t,dp));

    }


    int solve(string &s, string &t){
        int n = s.length();
        int m = t.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve2(n-1,m-1,s,t,dp);
    }

    int longestPalindromeSubseq(string s) {
        string s1 = s;
        reverse(s1.begin(),s1.end());
        string t = s1;

        return solve(s,t);



    }
};