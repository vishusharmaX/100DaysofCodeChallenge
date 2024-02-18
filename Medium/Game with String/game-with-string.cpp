//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minValue(string s, int k) {
        unordered_map<char, int> mpp;
        vector<int> ans;
        
        for (auto it : s) {
            mpp[it]++;
        }
        
        for (auto it : mpp) {
            ans.push_back(it.second);
        }
        
        sort(ans.begin(), ans.end(), greater<int>());
        
        for (int i = 0; i < k; i++) {
            if (ans[0] == 0) break;
            ans[0]--;
            sort(ans.begin(), ans.end(), greater<int>());
        }
        
        int sum = 0;
        for (int i = 0; i < ans.size(); i++) {
            sum += ans[i] * ans[i];
        }
        
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends