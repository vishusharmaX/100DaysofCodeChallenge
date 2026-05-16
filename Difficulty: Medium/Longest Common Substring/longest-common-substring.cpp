class Solution {
  public:
    int longCommSubstr(string& s1, string& s2) {
        // code here
        int n  = s1.length();
        int m = s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i = 1; i < n+1 ; i++){
            for(int j = 1; j < m+1; j++){
                if(s1[i-1] == s2[j-1]){
                  dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = 0;
                }
            }
        }
        
        int maxi = INT_MIN;
        for(int i =0; i < n+1; i++){
            for(int j = 0; j < m+1; j++){
                if(dp[i][j] > maxi){
                    maxi = max(maxi,dp[i][j]);
                }
            }
        }
        
        return maxi;
    }
};