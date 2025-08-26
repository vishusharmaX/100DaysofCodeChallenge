// User function Template for C++

class Solution {
  public:
    int knapSack(vector<int>& val, vector<int>& wt, int w) {
        // code here
        int n = wt.size();
        vector<vector<int>>dp(n+1,vector<int>(w+1,0));
        
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < w+1; j++){
                if(wt[i-1] <= j){
                    dp[i][j] = max(val[i-1] + dp[i][j-wt[i-1]],dp[i-1][j]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][w];
    }
};