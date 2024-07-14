//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    void subsetSum(int arr[],int n, int sum,vector<vector<bool>>&dp){
        // cout<<"subsset func se baat"<<endl;
        for(int i = 1 ; i < n+1;i++ ){
            for(int j = 1;  j < sum+1; j++){
                if(arr[i-1] <= j){
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        //   cout<<"subsset end se baat"<<endl;
    }
  
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int range = 0;
	    for(int i = 0 ; i<n; i++){
	        range += arr[i];
	    }
	    vector<vector<bool>>dp(n+1,vector<bool>(range+1,false));
	    
	    for(int i = 0 ; i < n+1; i++){
	        dp[i][0]  = true;
	    }
	    subsetSum(arr,n,range,dp);
	    vector<int>ans;
	
	    for(int i = 0; i <= range/2; i++){
	        if(dp[n][i] == 1){
	             ans.push_back(i);
	        }
	    }
	    
	    int mini = INT_MAX;
	    for(int j = 0; j < ans.size(); j++){
	        int val = abs(range - 2*ans[j]);
	       // cout<<ans[j]<<" "<<val<<endl;
	        mini = min(val,mini);
	    }
	    
	    return mini;
	    
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends