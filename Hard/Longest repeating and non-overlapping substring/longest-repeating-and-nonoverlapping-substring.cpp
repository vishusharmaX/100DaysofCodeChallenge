//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
string longestSubstring(string s, int n) {
        // code here
        string ans;
        for(int i =0; i<n; i++){
            for(int j= i+1; j<n; j++){
                string temp;
                if(s[i] == s[j]){
                        temp = s[i];
                    int x = 1+i, y = 1+j;
                    while(x<j && y < n && s[x] == s[y]){
                            temp+=s[x];
                            x++;
                            y++;
                        }
                }
                if(temp.size() > ans.size()){
                    ans = temp;
                }
            }
        }
        return (ans.size() > 0)?ans:"-1";
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends