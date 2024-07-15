//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    const int mod = 1000000007;
    void getCountSubset(vector<int>&arr, int n , int sum , vector<vector<int>>&dp){
        
        for(int i = 1; i < n+1; i++){
            for(int j = 0 ; j < sum+1; j++){
                if(arr[i-1] <= j){
                    dp[i][j] = (dp[i-1][j-arr[i-1]] + dp[i-1][j])%mod;
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }    
    }
    
    int countPartitions(int n, int d, vector<int>& arr) {
        // Code here
        int total_sum = 0;
        for(int i = 0 ; i < n; i++){
            total_sum += arr[i];
        }
        if ((total_sum + d) % 2 != 0) return 0;
        int sum = (total_sum + d)/2;
        vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
        
        for(int i= 0; i  < n+1; i++){
            dp[i][0] = 1;
        }
        
        getCountSubset(arr,n,sum,dp);
        
        return dp[n][sum];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends