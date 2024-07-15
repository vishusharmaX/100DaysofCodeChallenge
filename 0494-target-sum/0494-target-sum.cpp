class Solution {
public:
    void getSubsetCount(vector<int>& nums, int n, int sum, vector<vector<int>>& dp) {
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                if (nums[i - 1] <= j) {
                    dp[i][j] = dp[i - 1][j - nums[i - 1]] + dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int total_sum = accumulate(nums.begin(), nums.end(), 0);

         if (total_sum < abs(target) || (total_sum + target) % 2 != 0) {
            return 0;
        }

        int sum = (total_sum + target) / 2;

        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        getSubsetCount(nums, n, sum, dp);

        return dp[n][sum];
    }
};