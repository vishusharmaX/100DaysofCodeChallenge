//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here // your code here
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
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends