// User function template for C++

class Solution {
  public:
    // Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string &str1, string &str2) {
        // code here
        int n = str1.length(); int m = str2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));

        for(int i = 1;i < n+1; i++){
            for(int j = 1;j < m+1; j++){
                if(str1[i-1] == str2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return (n+m - dp[n][m]);
    }
};