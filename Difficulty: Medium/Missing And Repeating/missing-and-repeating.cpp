//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>ans(n+1,0);
        
        for(int i = 0; i < n; i++){
            ans[arr[i]]++;
        }
        
        
        int missing = -1, repeat = -1;
        
        
        for(int i = 1; i < ans.size(); i++){
            if(ans[i] == 2) repeat = i;
            if(ans[i] == 0) missing = i;
            
            if(missing != -1 && repeat  != -1)
                break;
        }
        
        
        return {repeat,missing};
        
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
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends