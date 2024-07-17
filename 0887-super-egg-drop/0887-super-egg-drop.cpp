class Solution {
public:
    int solve(int e, int f, vector<vector<int>>& dp) {
        if (f == 0 || f == 1)
            return f;
        
        if (e == 1)
            return f;
        
        if (dp[e][f] != -1)
            return dp[e][f];
        
        int mini = INT_MAX;
        int low = 1, high = f;
        
        // Use binary search to find the critical floor
        while (low <= high) {
            int mid = (low + high) / 2;
            
            int breakCase, notBreakCase;
            if (dp[e - 1][mid - 1] != -1)
                breakCase = dp[e - 1][mid - 1];
            else {
                breakCase = solve(e - 1, mid - 1, dp);
                dp[e - 1][mid - 1] = breakCase;
            }
            
            if (dp[e][f - mid] != -1)
                notBreakCase = dp[e][f - mid];
            else {
                notBreakCase = solve(e, f - mid, dp);
                dp[e][f - mid] = notBreakCase;
            }
            
            int temp = 1 + max(breakCase, notBreakCase);
            mini = min(mini, temp);
            
            // Adjust the binary search bounds
            if (breakCase > notBreakCase)
                high = mid - 1;
            else
                low = mid + 1;
        }
        
        return dp[e][f] = mini;
    }
    
    int superEggDrop(int e, int f) {
        vector<vector<int>> dp(e + 1, vector<int>(f + 1, -1));
        return solve(e, f, dp);
    }
};
