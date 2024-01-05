class Solution {
public:
    int solve(int ind, int prev,vector<int>& nums,int n,vector<vector<int>>&dp){

        if(ind == n) return  0 ;

        if(dp[ind][prev+1] != -1){
            return dp[ind][prev+1];
        }
        //not take case
        int len = 0 + solve(ind+1,prev,nums,n,dp);

        //take case 
        if(prev == -1 || nums[ind] > nums[prev]){
            len  = max(len,1 + solve(ind+1,ind,nums,n,dp));
        }

        return dp[ind][prev+1] = len;
        
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(0,-1,nums,n,dp);

    }
};