//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int decimal = 0;
        int n = str.length();
        int cnt= 0;
        for(int i = n-1; i >= 0; i--){
            if(str[i] == '1'){
                decimal += pow(2,cnt);
            }
            cnt++;
        }
        
        return decimal;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends