//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool solve(long long n){
        
        while(n>0){
            int last_digit = n%10;
            if(last_digit == 9)
                return false;
            
            n/=10;
        }
        
        return true;
    }
  
     long long findNth(long long n) {
        long long result = 0;
        long long base = 1;

        // Convert n to a number in base-9
        while(n > 0) {
            result += (n % 9) * base;
            n /= 9;
            base *= 10;
        }

        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans;
        cin >> n;
        Solution obj;
        ans = obj.findNth(n);
        cout << ans << endl;
    }
}

// } Driver Code Ends