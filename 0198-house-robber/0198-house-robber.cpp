class Solution {
public:
    int solve(vector<int>&nums,int indx){

        int n = nums.size();

        if(indx >= n){
            return 0;
        }

        return max(solve(nums,indx+1),solve(nums,indx+2) + nums[indx]);
    }
    int rob(vector<int>& nums) {
        // int n = nums.size();

        // return solve(nums,0);

        int n = nums.size();
        if(n == 1) return nums[0];
        int dp[n+1];
        dp[0] = nums[0];
        dp[1] = nums[1];

        for(int i = 2; i < n; i++){
            dp[i] = max(dp[i-2] + nums[i] , dp[i-1]);
        }

        return dp[n-1];
    }
};