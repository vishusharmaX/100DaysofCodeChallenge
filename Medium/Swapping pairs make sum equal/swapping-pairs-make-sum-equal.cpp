//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int findSwapValues(int a[], int n, int b[], int m) {
        int sumA = 0, sumB = 0;
        unordered_map<int, int> mpp;
        
        for (int i = 0; i < n; i++) sumA += a[i];
        for (int i = 0; i < m; i++) {
            sumB += b[i];
            mpp[b[i]] = 1;
        }
        
        // The difference between the sums of the two arrays
        int diff = sumB - sumA;
        
        // If diff is odd, it is not possible to find two such numbers
        if (diff % 2 != 0) return -1;
        
        // We need to find two elements a[i] and b[j] such that:
        // b[j] - a[i] = diff / 2
        int target = diff / 2;
        
        for (int i = 0; i < n; i++) {
            int bi = target + a[i];
            if (mpp.find(bi) != mpp.end()) {
                return 1;
            }
        }
        
        return -1;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends