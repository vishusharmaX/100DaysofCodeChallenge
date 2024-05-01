//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    long long int solve(int coins[], int n, int ind, int sum, vector<vector<long long>>& dp) {
        if (sum == 0)
            return 1;
        
        if (ind >= n || sum < 0)
            return 0;
        
        if (dp[ind][sum] != -1) {
            return dp[ind][sum];
        }
        
        long long int include = solve(coins, n, ind, sum - coins[ind], dp);
        long long int exclude = solve(coins, n, ind + 1, sum, dp);
        
        return dp[ind][sum] = include + exclude;
    }
    
    long long int count(int coins[], int N, int sum) {
        vector<vector<long long>> dp(N + 1, vector<long long>(sum + 1, -1));
        return solve(coins, N, 0, sum, dp);
    }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends