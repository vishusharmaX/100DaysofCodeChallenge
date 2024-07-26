//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        int n = str.length();
        vector<int>ans(26,0);
        int ch = 0;
        for(int i = 0; i < n; i++){
           if(str[i]!=' '){
            int val = str[i]-'a';
            ans[val] = 1;
            ch++;
           }
            
        }
        int cnt = 0;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == 0){
                cnt++;
            }
        }
        
        if(ch < 26 || cnt > k)
            return false;
        
        return true;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends