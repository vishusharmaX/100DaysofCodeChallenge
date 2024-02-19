//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution {
public:
    int wordBreak(string A, vector<string>& B) {
        unordered_map<string, bool> wordMap;
        
        // Populate the wordMap for quick lookup
        for (const string& word : B) {
            wordMap[word] = true;
        }

        int n = A.size();
        vector<bool> dp(n + 1, false);
        dp[0] = true;

        // Dynamic Programming to check if string A can be broken into words from B
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (dp[j] && wordMap.find(A.substr(j, i - j)) != wordMap.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n] ? 1 : 0;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends