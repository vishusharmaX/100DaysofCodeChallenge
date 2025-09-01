class Solution {
  public:

    // Function to find minimum number of attempts needed in
    // order to find the critical floor.
    
     int solve(int e , int f,vector<vector<int>>&dp){

        if(f == 0 || f == 1) return f;
        if(e == 1)return f;

        if(dp[e][f] != -1)return dp[e][f];

        int mini = INT_MAX;
        for(int k= 1; k <= f; k++){
            int low = 0,high = 0;
            if(dp[e-1][k-1] != -1){
                low = dp[e-1][k-1];
            }else{
                low = solve(e-1,k-1,dp);
                dp[e-1][k-1] = low;
            }
            if(dp[e][f-k] != -1){
                high = dp[e][f-k];
            }else{
                high = solve(e,f-k,dp);
                dp[e][k-1] = high;
            }
            int tempans = 1 + max(low,high);
            mini = min(mini,tempans);
        }

        return dp[e][f] = mini;
    }
    int eggDrop(int k, int n) {
        // code here
        vector<vector<int>>dp(k+1,vector<int>(n+1,-1));
        return solve(k,n,dp);
    }
};