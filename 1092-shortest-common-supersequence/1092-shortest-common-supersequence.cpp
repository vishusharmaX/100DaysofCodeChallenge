class Solution {
public:
    string shortestCommonSupersequence(string s, string t) {
         int n = s.length();
        int m = t.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));

        for(int i = 1 ; i < n+1; i++){
            for(int j = 1; j < m+1; j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }

        int i = n ,  j = m;
        string ans;
        while(i > 0 && j> 0){
            if(s[i-1] == t[j-1]){
                ans = s[i-1]+  ans;
                i--; 
                j--;
            }
            else{
                if (dp[i][j - 1] > dp[i - 1][j]) {
                    ans = t[j - 1] + ans;  
                    j--;
                } else {
                    ans = s[i - 1] + ans; 
                    i--;
                }

            }
        }

        while(i>0){
            ans = s[i-1] + ans;
            i--;
        }
        while(j>0){
            ans = t[j-1] + ans;
            j--;
        }


        return ans;
    }
};