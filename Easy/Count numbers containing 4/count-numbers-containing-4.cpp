//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool checkfor4(int n){
        
        while(n>0){
            int digit = n%10;
            if(digit == 4)
                return true;
            n/=10;
        }
        
        return false;
        
    }
    int countNumberswith4(int n) {
        // code here
        
        int cnt = 0;
        for(int i = 1 ; i <= n; i++){
            if(checkfor4(i)){
                cnt++;
            }
        }
        
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends