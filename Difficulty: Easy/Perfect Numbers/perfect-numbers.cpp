//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int isPerfectNumber(long long n) {
        
        if(n == 1)
            return 0;
        // code here
        long long  sum = 1;
        for(long long  i = 2; i*i < n; i++){
            if(n% i ==0){
                sum = sum + i + n/i;
                
            }
        }
        
        if(sum == n)
            return 1;
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends