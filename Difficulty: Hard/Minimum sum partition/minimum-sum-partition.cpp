class Solution {

public:
    void subsetSum(vector<int>& arr, int n, int sum, vector<vector<bool>>& dp) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                if (arr[i - 1] <= j) {
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
    }

    int minDifference(vector<int>& arr) {
        int n = arr.size();
        int range = 0;
        for (int i = 0; i < n; i++) {
            range += arr[i];
        }

        vector<vector<bool>> dp(n + 1, vector<bool>(range + 1, false));

        // Base condition: sum 0 is always possible
        for (int i = 0; i <= n; i++) {
            dp[i][0] = true;
        }

        subsetSum(arr, n, range, dp);

        vector<int> ans;
        for (int i = 0; i <= range / 2; i++) {
            if (dp[n][i]) {
                ans.push_back(i);
            }
        }

        int mini = INT_MAX;
        for (int i = 0; i < ans.size(); i++) {
            mini = min(mini, range - 2 * ans[i]);
        }

        return mini;
    }
};
