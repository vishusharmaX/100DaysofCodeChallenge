// User function Template for C++

class Solution {
  public:
    bool isPalli(string s, int i , int j){
        
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
  
    int solve(string s, int i , int j, vector<vector<int>>&dp){
        
        if(i >= j)return 0;
        
        if(isPalli(s,i,j))return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        int ans = INT_MAX;
        for(int k = i ; k <= j-1;k++){
           if (isPalli(s, i, k)) {
                  int tempans = 1 + solve(s,i,k,dp)+ solve(s,k+1,j,dp);
                  ans = min(ans,tempans);
              }
        }
        
        return dp[i][j] = ans;
        
        
    }
  
    int palPartition(string &s) {
        // code here
        int n = s.length();
         vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(s,0,s.length()-1,dp);
        
    }
};