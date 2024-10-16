class Solution {
public:
    long long solve(vector<int>&nums,int idx, bool flag,vector<vector<int>>&dp){
        if(idx >= nums.size()){
            return 0;
        }

        if(dp[idx][flag] != -1)
            return dp[idx][flag];

        long long skip = solve(nums,idx+1,flag,dp);
        int val = nums[idx];
        if(flag == false){
            val = -val;
        }

        long long  take = solve(nums,idx+1,!flag,dp) + val;

        return dp[idx][flag] = max(take,skip);

    }
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        return solve(nums,0,true,dp);
    }
};