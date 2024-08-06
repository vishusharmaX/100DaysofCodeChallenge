//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool isValid(string str) {
        vector<string> ans;
        stringstream ss(str);
        string value;
        
        while (getline(ss, value, '.')) {
            ans.push_back(value);
        }

        if (ans.size() != 4) {
            return false; // IPv4 addresses should have exactly 4 segments
        }
        
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i].empty() || ans[i].size() > 3) {
                return false; // Segment should not be empty and should not have more than 3 digits
            }

            for (char c : ans[i]) {
                if (!isdigit(c)) {
                    return false; // All characters in the segment should be digits
                }
            }
            
            int val = stoi(ans[i]);
            if (val < 0 || val > 255) {
                return false; // Each segment should be in the range 0 to 255
            }

            // Check for leading zeros
            if (ans[i].size() > 1 && ans[i][0] == '0') {
                return false;
            }
        }
        
        return true;
    }
};



//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends