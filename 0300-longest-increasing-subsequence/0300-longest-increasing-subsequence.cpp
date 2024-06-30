class Solution {
public:
    int  solve(vector<int>&nums,int indx, int prev,vector<vector<int>> & dp){
        if(indx >= nums.size()){
            return 0;
        }

        if(dp[indx][prev+1] != -1)
            return dp[indx][prev+1];

        //take 
        int take = 0;
        if(prev == -1 || nums[prev] < nums[indx]){
            take = 1 + solve(nums,indx +1 , indx,dp);
        }

        int notake = solve(nums,indx+1,prev,dp);

        return dp[indx][prev+1] =  max(take,notake);

    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(nums,0,-1,dp);
    }
};