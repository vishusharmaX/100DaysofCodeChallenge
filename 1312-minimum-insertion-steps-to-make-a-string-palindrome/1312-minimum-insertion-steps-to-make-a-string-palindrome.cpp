class Solution {
public:
    int minInsertions(string s) {
    string t = s;
    int n = s.length();
    reverse(t.begin(),t.end());
    int m = t.length();
    
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    
    for(int i = 1; i < n+1; i++){
        for(int j =1; j < m+1; j++ ){
            if(s[i-1] == t[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    
        int ans = n - dp[n][m];
        return ans;
    }
};