class Solution {
  public:
    int lcsOf3(string& A, string& B, string& C) {
        int n = A.length();
        int m = B.length();
        int o = C.length();

        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(m+1, vector<int>(o+1, 0)));

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                for(int k = 1; k <= o; k++) {
                    if(A[i-1] == B[j-1] && B[j-1] == C[k-1]) {
                        dp[i][j][k] = 1 + dp[i-1][j-1][k-1];
                    } else {
                        dp[i][j][k] = max({
                            dp[i-1][j][k],
                            dp[i][j-1][k],
                            dp[i][j][k-1]
                        });
                    }
                }
            }
        }

        return dp[n][m][o];
    }
};
