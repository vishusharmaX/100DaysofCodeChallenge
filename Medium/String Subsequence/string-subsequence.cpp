//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int solve(int i,int j,string &s1,string &s2,vector<vector<int>>&dp,int &MOD){
      
      if(j<0){
          return 1;
      }
      if(i<0){
          return 0;
      }
      if(dp[i][j]!=-1){
          return dp[i][j];
      }
      if(s1[i]==s2[j]){
          return dp[i][j]=(solve(i-1,j-1,s1,s2,dp,MOD)%MOD+solve(i-1,j,s1,s2,dp,MOD)%MOD)%MOD;
      }else{
          return dp[i][j]=solve(i-1,j,s1,s2,dp,MOD)%MOD;
      }
      
  }
    int countWays(string s1, string s2) {
        
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int MOD=1e9+7;
       return solve(n-1,m-1,s1,s2,dp,MOD);
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        Solution obj;
        int res = obj.countWays(s1, s2);

        cout << res << endl;
    }
}

// } Driver Code Ends