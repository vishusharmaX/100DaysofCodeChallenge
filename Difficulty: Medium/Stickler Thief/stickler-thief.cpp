class Solution {
  public:
    int solve(vector<int>&arr,int indx,vector<int>&dp){
        
        if(indx == 0)return arr[indx];
        if(indx < 0) return 0;
        
        if(dp[indx] != -1)return dp[indx];
        
        int take = arr[indx] + solve(arr,indx-2,dp);
        int nottake = solve(arr,indx-1,dp);
        
        return dp[indx]= max(take,nottake);
    }
  
    int findMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>dp(n+1,-1);
        return solve(arr,n-1,dp);
    }
};