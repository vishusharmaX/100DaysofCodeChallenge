class Solution {
  public:
    int minDeletions(string s) {
        // code here
        string t = s;
        reverse(t.begin(),t.end());
        int n = s.length();
        // cout<<n<<endl;
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < n+1; j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        // cout<<dp[n][n]<<endl;
        
        return (n - dp[n][n]);
        
    }
};