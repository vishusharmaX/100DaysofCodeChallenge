//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        int n = str.size();
        vector<int> lps_array(n, 0);  // LPS array to store the longest prefix-suffix lengths
        
        int len = 0;  // Length of the previous longest prefix-suffix
        int i = 1;  // Start checking from the second character

        // Build the LPS array
        while (i < n) {
            if (str[i] == str[len]) {
                len++;
                lps_array[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps_array[len - 1];  // Try finding a smaller match
                } else {
                    lps_array[i] = 0;
                    i++;
                }
            }
        }

        // The last value of the LPS array gives the length of the longest prefix-suffix
        return lps_array[n - 1];
    }
};




//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends