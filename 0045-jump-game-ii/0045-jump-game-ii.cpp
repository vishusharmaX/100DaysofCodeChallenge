class Solution {
public:
    int solve(vector<int>& nums, int i, int n, vector<int> &dp)
    {
        if(i >= n - 1)
            return 0;
        
        if(dp[i] != -1)
            return dp[i];

        int ans = 10000;
        for(int j = 1; j <= nums[i]; j++)
            ans = min(ans, solve(nums, j + i, n, dp) + 1);

        return dp[i] = ans;
    }
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n + 1, -1);
        return solve(nums, 0, n, dp);
    }
};