//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int solve(int ind, vector<int>& arr, int k,vector<int>&dp) {
        
        int n = arr.size();
        if(ind == n )return 0 ;
        
        int len = 0;
        int maxi = INT_MIN;
        int maxAns = INT_MIN;
        
        if(dp[ind] != -1)
            return dp[ind];
        
        for(int j = ind ; j < min(ind+k,n) ; j++){
            len++;
            maxi = max(maxi,arr[j]);
            int sum = len*maxi +  solve(j+1,arr,k,dp);
            maxAns = max(maxAns,sum);
        }
        
        return dp[ind] = maxAns;
        
    }
    
    int solve(int n, int k, vector<int>& arr){
        // Code here
        vector<int> dp(n,-1);
        return solve(0,arr,k,dp);
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        cout<<obj.solve(n,k,arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends