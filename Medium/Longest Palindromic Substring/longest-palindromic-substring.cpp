//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool solve(string &s, int i , int j){
        if(i>= j)
            return true;
        if(s[i] == s[j])
            return solve(s,i+1,j-1);
        
        return false;
    }
    string longestPalindrome(string s){
        int maxlen = INT_MIN;
        int n  = s.length();
        int sp = 0;
        for(int i= 0 ; i<n;i++){
            for(int j = 0 ; j < n; j++){
                if(solve(s,i,j) == true){
                    if(j-i+1> maxlen){
                        maxlen = j-i+1;
                        sp = i;
                    }
                }
            }
        }
        
        return s.substr(sp,maxlen);
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends