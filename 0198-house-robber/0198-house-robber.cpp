class Solution {
public:
    int solve(int ind , vector<int>& nums,vector<int>&dp){
        if(ind == 0)
            return nums[0];
        if(ind == -1)
            return 0;
        
        if(dp[ind] != -1)
            return dp[ind];
        
        int take = nums[ind] + solve(ind-2,nums,dp);
        int nottake = 0 + solve(ind-1,nums,dp);

        return dp[ind] = max(take,nottake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return solve(n-1,nums,dp);
    }
};