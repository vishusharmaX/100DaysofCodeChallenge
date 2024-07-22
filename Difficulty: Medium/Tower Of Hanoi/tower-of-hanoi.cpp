//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long count = 0;
    void solve(int n, int src, int dest, int helper){
        if(n == 1){
            count++;
            cout<<"move disk "<<n << " from rod " << src <<" to rod " <<dest<<endl;
            return;
        }
        else{
           
            solve(n-1,src,helper,dest);
            count++;
            cout<<"move disk "<<n<< " from rod " << src <<" to rod " <<dest<<endl;
            solve(n-1,helper,dest,src);
            
        }
    }
    long long toh(int n, int from, int to, int aux) {
        // Your code here
        solve(n,from,to,aux);
        return count;
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T; // testcases
    while (T--) {

        int N;
        cin >> N; // taking input N

        // calling toh() function
        Solution ob;

        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}

// } Driver Code Ends