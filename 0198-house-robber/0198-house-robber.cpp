class Solution {
public:
    int solve(vector<int>&nums,int indx,vector<int>&dp){

        if(indx < 0){
            return 0;
        }
        if(indx  == 0)
            return nums[0];
        
        if(dp[indx] != -1)
            return dp[indx];

        int include = solve(nums,indx-2,dp) + nums[indx];
        int exclude = solve(nums,indx-1,dp) + 0 ;

        return dp[indx] = max(include,exclude);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        return solve(nums,n-1,dp);

    }
};