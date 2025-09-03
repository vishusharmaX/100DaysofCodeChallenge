class Solution {
  public:
    // Function to compute the edit distance between two strings
    int editDistance(string& word1, string& word2) {
        // code here
        int n = word1.length();
        int m = word2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));

        for(int i = 0; i < n+1; i++)dp[i][0] = i;
        for(int j = 0; j < m+1; j++)dp[0][j] = j;

        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < m+1; j++){
                if(word1[i-1] == word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }else{
                    dp[i][j] = 1 + min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
                }
            }
        }

        return dp[n][m];
    }
};