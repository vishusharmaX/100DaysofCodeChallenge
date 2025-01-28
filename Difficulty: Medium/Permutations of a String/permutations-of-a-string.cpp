//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void solve(string s, int idx, vector<string>&ans){
        if(idx>= s.size()-1){
            ans.push_back(s);
            return;
        }
        set<char>st;
        for(int i = idx; i<s.size(); i++){
            if(st.find(s[i]) == st.end()){
                st.insert(s[i]);
                swap(s[idx],s[i]);
                solve(s,idx+1,ans);
                swap(s[idx],s[i]);
            }
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here there
         vector<string>ans;
        
        solve(s,0,ans);
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends