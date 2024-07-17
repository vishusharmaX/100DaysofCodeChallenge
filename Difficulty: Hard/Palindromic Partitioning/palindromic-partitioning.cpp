//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isPalindrome(string s,int i, int j){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    int solve(string s, int i , int j,vector<vector<int>>&dp){
        if(i>=j || isPalindrome(s, i, j) ){
            return 0;
        }

        if(dp[i][j] != -1)
            return dp[i][j];
        
        int mini = INT_MAX;
        for(int k = i ; k<=j-1; k++){
              if (isPalindrome(s, i, k)) {
                  
            int tempans = 1 + solve(s,i,k,dp)+ solve(s,k+1,j,dp);
            mini = min(mini,tempans);
              }
        }
        
        return dp[i][j] = mini;
    }
    int palindromicPartition(string s)
    {
        // code here
        int n = s.length();
        int i = 0;
        int j = s.length()-1;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return  solve(s,i,j,dp);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends