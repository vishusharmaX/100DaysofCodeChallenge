//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    const int mod = 1000000007;

    long long int countPS(string s) {
        int n = s.length();
        vector<vector<long long int>> dp(n, vector<long long int>(n, 0));
        
        // Single letter palindromic subsequences
        for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
        }
        
        for (int length = 2; length <= n; length++) {
            for (int i = 0; i <= n - length; i++) {
                int j = i + length - 1;
                if (s[i] == s[j]) {
                    dp[i][j] = (1 + dp[i+1][j] + dp[i][j-1]) % mod;
                } else {
                    dp[i][j] = (dp[i+1][j] + dp[i][j-1] - dp[i+1][j-1] + mod) % mod;
                }
            }
        }
        
        return dp[0][n-1];
    }
};



//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends