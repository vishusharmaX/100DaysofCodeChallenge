//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool divisorGame(int n) {
        // code here
        int count = 0;
        
        for(int i = 1; i<n;i++) {
            
            if(n%i==0) {
                count++;
            }
            
            n = n-i;
            i = 0;
        }
        
        if(count%2==0)
          return false;
         
         else 
           return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution obj;
        bool ans = obj.divisorGame(n);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends