class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        vector<int> dp(n+1, 0);
        int count_b = 0;

        for (int i = 1; i <= n; ++i) {
            if (s[i-1] == 'a') {
                dp[i] = min(dp[i-1] + 1, count_b);
            } else {
                dp[i] = dp[i-1];
                count_b++;
            }
        }

        return dp[n];
    }
};