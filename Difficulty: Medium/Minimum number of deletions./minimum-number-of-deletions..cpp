//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends


int minDeletions(string s, int n) { 
    //complete the function here
    string t = s;
    reverse(t.begin(),t.end());
    int m = t.length();
    
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    
    for(int i = 1; i < n+1; i++){
        for(int j =1; j < m+1; j++ ){
            if(s[i-1] == t[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    
    int ans = n - dp[n][m];
    return ans;
    
} 