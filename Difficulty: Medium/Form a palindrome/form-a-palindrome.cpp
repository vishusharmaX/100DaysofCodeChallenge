//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int countMin(string s){
    //complete the function here
        int n = s.length();
        string t = s;
        reverse(t.begin(),t.end());
        // cout<<t<<endl;
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j  < n+1; j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = 1 +  dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        int ans = n - dp[n][n];
        return ans;
        
    }
};


//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends