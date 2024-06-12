//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    
    int solve(int arr[], int indx,vector<int>&dp){
        
        if(indx < 0)
            return 0;
            
        if(indx == 0)
            return arr[0];
        
        if(dp[indx] !=  -1)
            return dp[indx];
        
        int include = solve(arr,indx-2,dp) + arr[indx];
        int exclude = solve(arr,indx-1,dp) + 0;
        
        return dp[indx] = max(include,exclude);
        
    }
    
    
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int>dp(n,-1);
        return solve(arr,n-1,dp);
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends