//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:   
    int *checkDoorStatus(int N) {
        // code here
         int* ans = new int[N];

        // Initialize all doors to closed (0)
        for (int i = 0; i < N; i++) {
            ans[i] = 0;
        }

        // Iterate over the persons
        for (int i = 1; i <= N; i++) {
            for (int j = i; j <= N; j += i) {
                ans[j - 1] = !ans[j - 1];
            }
        }

        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        int* ptr = ob.checkDoorStatus(N);
        for(int i=0 ; i<N ; i++)
            cout<<ptr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends