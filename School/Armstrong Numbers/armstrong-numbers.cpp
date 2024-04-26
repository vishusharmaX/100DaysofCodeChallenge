//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code 
        string s = to_string(n);
        int ans = 0;
        for(int i = 0 ;i< s.length(); i++){
            int val = s[i]-'0';
            ans += pow(val,3);
        }
        
        if(ans == n)
            return "Yes";
        
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends