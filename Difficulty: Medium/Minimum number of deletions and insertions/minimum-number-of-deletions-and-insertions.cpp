class Solution {

  public:
    int minOperations(string &s1, string &s2) {
        // Your code goes here
        int n = s1.length() , m = s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < m+1; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        int ans = n + m - 2*dp[n][m];
        
        return ans;
    }
};