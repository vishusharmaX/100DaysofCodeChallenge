//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        
        sort(arr.begin(),arr.end());
        
        int ans=arr.back()-arr[0];
        int mini=0;
        int maxi=0;
        
        for(int i=1;i<arr.size();i++){
            if(arr[i]-k<0)
            continue;
            mini=min(arr[0]+k,arr[i]-k);
            maxi=max(arr.back()-k,arr[i-1]+k);
            ans=min(ans,maxi-mini);
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends