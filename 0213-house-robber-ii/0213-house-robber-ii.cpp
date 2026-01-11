class Solution {
public:
    int solve(vector<int>&nums){
        int n = nums.size();
        int dp[n+1];
        if(n == 1) return nums[0];
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i = 2; i < n; i++){
            dp[i] = max(dp[i-2] + nums[i] , dp[i-1]);
        }

        return dp[n-1];

    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int>left;
        vector<int>right;
        for(int i = 0;i < nums.size(); i++){
            if(i != 0)left.push_back(nums[i]);
            if(i != n-1)right.push_back(nums[i]);
        }

        return max(solve(left),solve(right));

    }
};