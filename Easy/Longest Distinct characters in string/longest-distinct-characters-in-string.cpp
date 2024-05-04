//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
    unordered_map<char,int> mpp;
    
    int l = 0 , r = 0 , maxlen = 0 ;
    int n = s.length();
    
    while(r < n){
        if(mpp.find(s[r]) != mpp.end()){
            if(mpp[s[r]] >= l){
                l = mpp[s[r]] +1;
            }
        }
        
        int len = r - l +1;
        maxlen = max(maxlen ,len);
        
        mpp[s[r]] = r;
        r++;
    }
    
    return maxlen;
    
    
}