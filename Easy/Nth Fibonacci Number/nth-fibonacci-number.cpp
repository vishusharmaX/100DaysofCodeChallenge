//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int mod = 1000000007;
    int solve(int k , vector<int>&aman){
        
        if(k<=1) return k;
        
        if(aman[k] != -1){
            return aman[k];
        }
      
        return  aman[k] = (solve(k-1,aman) + solve(k-2,aman)) % mod;
        
    }
    int nthFibonacci(int n){
        // code here
        vector<int>dp(n+1,-1);
       
        return solve(n,dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends