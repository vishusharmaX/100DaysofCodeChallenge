//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        
        int low = 1;
        int high =n;
        int ans = -1;
        
        while(low <= high){
            int mid = ( low + high )/2;
            
            int sqr = mid*mid;
            
            if(sqr == n){
                return mid;
            }
            else if(sqr < n){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends