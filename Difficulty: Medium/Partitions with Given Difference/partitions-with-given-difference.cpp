class Solution {
  public:
    int solve(vector<int>&arr, int sum , vector<vector<int>>&dp){
        
        int n = arr.size();
        for(int i = 1; i < n+1; i++){
            for(int j = 0; j < sum+1; j++){
                if(arr[i-1] <= j){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][sum];
        
    }
  
    int countPartitions(vector<int>& arr, int d) {
        int total = 0;
        for (int num : arr) {
            total += num;
        }

        if (total < d || (total - d) % 2 != 0) return 0;

        int target = (total - d) / 2;
        int n = arr.size();

        vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));

        for (int i = 0; i <= n; i++) dp[i][0] = 1;

        return solve(arr, target, dp);
    }
};