//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        int numRows = mat.size();
        if (numRows == 0) return mat;
        int numCols = mat[0].size();
        
        // Effective number of rotations
        int effectiveK = k % numCols;
        
        vector<vector<int>> result(numRows, vector<int>(numCols));
        
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                // New position after k rotations to the left
                int newPos = (j + numCols - effectiveK) % numCols;
                result[i][newPos] = mat[i][j];
            }
        }
        
        return result;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

// } Driver Code Ends