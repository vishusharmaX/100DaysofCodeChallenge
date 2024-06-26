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
    int minimumCost(int n, int w, vector<int> &cost) {
        // code here
        vector<int> dp(w+1,-1);
        dp[0]=0;
        for(int i=0;i<n;i++)
        if(cost[i]>0)
        {
          for(int j=i+1;j<=w;j++)
          if(dp[j]==-1)
          {
             
          if(dp[j-(i+1)]>=0)
          dp[j]= dp[j-(i+1)]+cost[i];
          
              
          }
          else
          dp[j]=min( dp[j-(i+1)]+cost[i],dp[j]);
          
          
        }
        
        return dp[w];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int w;
        scanf("%d", &w);

        vector<int> cost(n);
        Array::input(cost, n);

        Solution obj;
        int res = obj.minimumCost(n, w, cost);

        cout << res << endl;
    }
}

// } Driver Code Ends