//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void solve(int n,vector<int>&v,vector<int>&res){
        
        if(n == 0){
            int ans = 0;
            for(int i = 0; i < v.size(); i++){
                ans = ans*10 + v[i];
            }
            res.push_back(ans);
            return;
        }
        
        for(int i = 1; i <= 9 ; i++){
            if(v.size() == 0 || i > v[v.size()-1]){
                v.push_back(i);
                solve(n-1,v,res);
                v.pop_back();
            }
        }
                
        
    }
    vector<int> increasingNumbers(int n) {
        // Write Your Code here
        vector<int>res;
        if(n == 1){
            for(int i = 0 ; i <= 9; i++){
                res.push_back(i);
            }
            
            return res;
        }
        vector<int>v;
        solve(n,v,res);
        
        return res;
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
        vector<int> ans = ob.increasingNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends