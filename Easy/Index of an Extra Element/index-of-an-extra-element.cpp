//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.
        unordered_map<int,int>mpp;
        for(int i = 0 ; i < n; i++){
            mpp[arr1[i]]++;
        }
        for(int i = 0 ; i < n-1; i++){
            mpp[arr2[i]]++;
        }
        int ans = 0;
        for(auto it  : mpp){
            if(it.second ==  1)
                ans = it.first;
        }
        
        for(int i = 0 ; i < n; i++){
            if(ans == arr1[i])
                return i;
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr1[n], arr2[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> arr2[i];
        }
        Solution obj;
        cout << obj.findExtra(n, arr1, arr2) << endl;
    }
}
// } Driver Code Ends