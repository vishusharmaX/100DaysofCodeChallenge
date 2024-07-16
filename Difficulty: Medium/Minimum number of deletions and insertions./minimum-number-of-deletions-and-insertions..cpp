//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string s, string t) 
	{ 
	    int n = s.length();
	    int m = t.length();
	    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
	    
	    for(int i = 1;  i < n+1; i++){
	        for(int j = 1;  j < m+1; j++){
	            if(s[i-1] == t[j-1]){
	                dp[i][j] = 1 + dp[i-1][j-1];
	            }
	            else{
	                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
	            }
	        }
	    }
	    
	    int lcs = dp[n][m];
	    int insertion = m - lcs;
	    int deletion = n-lcs;
	    return insertion + deletion;
	    
	} 
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends