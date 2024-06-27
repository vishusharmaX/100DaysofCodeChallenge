//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    vector<bool> SieveOfEratosthenes(int n)
    {
        vector<bool>prime(n+1,true);
 
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        return prime;
    }
    
    vector<int> getPrimes(int n) {
        vector<int>ans(2,-1);
        
        vector<bool>temp=SieveOfEratosthenes(n);
        
        for(int i=2;i<n;i++){
            if(temp[i]==true && temp[n-i]==true){
                ans[0]=i;
                ans[1]=n-i;
                return ans;
            }
        }
        return ans;
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
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends