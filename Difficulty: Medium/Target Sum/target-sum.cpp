//Back-end complete function Template for C++

class Solution {
  public:
    long long mod = 1e9;
    long long findTargetSumWays(int n, vector<int>& A, int target) {
        
        long long total = 0;
        for(int i = 0; i <A.size(); i++){
            total += A[i];
        }
        
        if(abs(target) > total  || (target+total) % 2 != 0)return 0;
        
        long long  sum = (total + target)/2;
        vector<vector<long long>>dp(n+1,vector<long long>(sum+1,0));
        
        for(int i = 0; i < n+1; i++)dp[i][0] = 1;
        
        for(int i = 1; i< n+1; i++){
            for(int j = 0; j< sum +1; j++){
                if(A[i-1] <= j){
                    dp[i][j] = (dp[i-1][j] + dp[i-1][j-A[i-1]])%mod;
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        
        return dp[n][sum];
        
        
        
    }
};