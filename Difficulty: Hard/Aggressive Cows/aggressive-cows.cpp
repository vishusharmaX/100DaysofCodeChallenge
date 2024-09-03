//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int start = 1;
        int end = stalls[n-1] - stalls[0];
        int maxi = INT_MIN;
        
        while(start <= end){
            int mid = (start+end)/2;
            int cnt = 1 , pos = stalls[0];
            
            for(int i  = 0; i < n; i++){
                if(pos + mid  <= stalls[i]){
                    cnt++;
                    pos = stalls[i];
                }
                
            }
            
            if(cnt < k){
                end = mid -1;
            }
            else{
                maxi = mid;
                start = mid +1;
            }
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends