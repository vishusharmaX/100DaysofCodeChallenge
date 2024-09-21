//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int n , int arr[], int total){
        
        vector<vector<int>>dp(n+1,vector<int>(total+1,0));
        for(int i = 0; i <n+1; i++){
            dp[i][0] =1;
        }
        
        for(int i = 1; i< n+1;i++){
            for(int j = 1;j <= total; j++){
                if(arr[i-1] <= j){
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][total];
    }
    int equalPartition(int N, int arr[])
    {
        int total = 0;
        for(int i = 0; i < N ; i++){
            total += arr[i];
        }
        
        if(total%2 != 0)
            return false;
        else{
            return solve(N,arr,total/2);
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends