class Solution {
private:
    vector<vector<int>> directions = {{-1, -1}, {0, -1}, {1, -1}};
public:
    int maxMoves(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int col = n - 1;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        int level = 0;

        for (int j = 1; j < n; ++j) {
            int maxPathInCol = 0;
            for (int i = 0; i < m; ++i) {
                int curVal = grid[i][j], maxPrevVal = INT_MIN;
                
                for (auto& dir : directions) {
                    int x = i + dir[0], y = j + dir[1];
                    if (x >= 0 && x < m && y >= 0 && curVal > grid[x][y]) {
                        maxPrevVal = max(maxPrevVal, dp[x][y]);
                    }
                }

                if (maxPrevVal != INT_MIN) {
                    dp[i][j] = maxPrevVal + 1;
                    maxPathInCol = max(maxPathInCol, dp[i][j]);
                }
            }

            if(maxPathInCol <= level) {
                col = j - 1;
                break;
            } else {
                level = maxPathInCol;
            }
        }

        int ans = 0;
        for (int i = 0; i < m; ++i) {
            ans = max(ans, dp[i][col]);
        }
        return ans;
    }
};