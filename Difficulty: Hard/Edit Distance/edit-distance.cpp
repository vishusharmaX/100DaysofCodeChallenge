//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here
        int n = s.length();
        int m = t.length();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i = 0; i < n+1; i++){
            dp[i][0] = i;
        }
        for(int j = 0; j < m+1; j++){
            dp[0][j] = j;
        }
        
        
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < m+1; j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] =  dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 1 + min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                }
            }
        }
        
        return dp[n][m];
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends