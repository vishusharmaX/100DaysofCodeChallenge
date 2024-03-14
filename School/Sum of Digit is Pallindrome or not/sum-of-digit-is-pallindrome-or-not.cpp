//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


class Solution {
public:
    bool isDigitSumPalindrome(int n) {
        string num = to_string(n);
        int sum = 0;
        
       
        for (char digit : num) {
            if (isdigit(digit)) {
                sum += digit - '0';
            }
        }
        
       
        string sumString = to_string(sum);
        string reversedSum = sumString;
        reverse(reversedSum.begin(), reversedSum.end());
        
        return sumString == reversedSum;
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