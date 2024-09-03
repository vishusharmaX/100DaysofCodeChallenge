//{ Driver Code Starts
#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minDiff(vector<int>& arr, int k) {
        // write code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        int ans=INT_MAX;
      for(int i=0;i<=n-k;i++){
          ans=min(ans,abs(arr[i]-arr[i+k-1]));
      }
      return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        cout << obj.minDiff(arr, k) << endl;
    }
    return 0;
}
// } Driver Code Ends