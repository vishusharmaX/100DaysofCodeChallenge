class Solution {
public:
    int solve(vector<int>&nums, int indx,vector<int>&dp){
        if(indx >= nums.size())
            return 0;
        
        if(dp[indx] != -1)
            return dp[indx];

        int take = nums[indx] + solve(nums,indx+2,dp);
        int nottake = solve(nums,indx+1,dp);

        return dp[indx] = max(take,nottake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,0);
        // return solve(nums,0,dp);
        dp[0] = 0;
        dp[1] = nums[0];
        for(int i = 2; i <=n; i++){
            dp[i] = max((nums[i-1] + dp[i-2]) , dp[i-1]);
        }

        return dp[n];
    }
};