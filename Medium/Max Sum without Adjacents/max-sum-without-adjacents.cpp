//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:	
	// calculate the maximum sum with out adjacent
    int solve(int *arr,int indx,vector<int>&dp){
        
        if(indx < 0){
            return 0;
        }
        if(indx  == 0)
            return arr[indx];
        
        if(dp[indx] != -1)
            return dp[indx];
        
        int inc = solve(arr,indx-2,dp) + arr[indx];
        int exc = solve(arr,indx-1,dp) + 0;
        
        return dp[indx] = max(inc,exc);
        
    }
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int>dp(n,-1);
	    return solve(arr,n-1,dp);
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends