//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int>& arr, int n) {
        // code here
        // sort(arr.begin(), arr.end());
        // unordered_map<int, int> mpp;
        // int repeat = 0, missing = 0;

        // for (int i = 0; i < n; i++) {
        //     mpp[arr[i]]++;
        // }

        // for (auto it : mpp) {
        //     if (it.second >= 2) {
        //         repeat = it.first;
        //         break;  // Exit the loop once the repeating element is found
        //     }
        // }

        // for (int i = 0; i < n; i++) {
        //     if (arr[i] != i + 1) {
        //         missing = i + 1;
        //         break;  // Exit the loop once the missing element is found
        //     }
        // }

        // return {repeat, missing};
        //  int n = a.size();
    int hash[n + 1] = {0}; // Assuming hash is an array to keep track of occurrences

    int repeating = -1, missing = -1;

    for (int i = 0; i < n; ++i) {
        if (hash[arr[i]] == 1)
            repeating = arr[i];
        else
            hash[arr[i]] = 1;
    }

    for (int i = 1; i <= n; ++i) {
        if (hash[i] == 0)
            missing = i;
    }

    return {repeating, missing};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends