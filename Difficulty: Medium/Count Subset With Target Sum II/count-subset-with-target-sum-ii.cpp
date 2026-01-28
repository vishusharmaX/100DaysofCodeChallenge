class Solution {
public:
    int countSubset(vector<int>& arr, int k) {
    for (int x : arr) {
        if (x < 0) return 0;
    }

    vector<int> dp(k + 1, 0);
    dp[0] = 1;

    for (int num : arr) {
        for (int sum = k; sum >= num; sum--) {
            dp[sum] += dp[sum - num];
        }
    }

    return dp[k];
}

};
