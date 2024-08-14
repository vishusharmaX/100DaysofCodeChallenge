//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestCommonSubstr(string s, string t) {
        // your code here
        int n = s.length(), m = t.length();
        vector<vector<int>>dp(n+1, vector<int>(m+1,0));
        
        
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < m+1; j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        
        int maxi = INT_MIN;
         for(int i = 0; i < n+1; i++){
            for(int j = 0; j < m+1; j++){
               if(dp[i][j] > maxi){
                   maxi= dp[i][j];
               }
            }
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends