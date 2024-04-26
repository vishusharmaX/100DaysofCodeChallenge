//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        string s = to_string(n);
        string t;
        int ans = 0;
        for(int i = 0 ; i < s.length(); i++){
            int val = s[i] - '0';
            ans+=val;
        }
        t = to_string(ans);
        int st = 0 , e = t.length()-1;
        while(st<=e){
            if(t[st] != t[e])
                return 0;
            else{
                st++;
                e--;
            }
        }
        
        return 1;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends