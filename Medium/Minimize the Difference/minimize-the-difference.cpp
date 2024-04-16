//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        
        vector<int> suffixMin(n);
        vector<int> suffixMax(n);
        int maxi = arr[n-1];
        int mini = arr[n-1];
        for(int i=n-1;i>=0;i--)
        {
            mini = min( mini, arr[i]);
            maxi = max( maxi , arr[i]);
            suffixMin[i]  = mini;
            suffixMax[i]  = maxi;
        }
        int ans = INT_MAX;
        int premax = arr[0];
        int premin = arr[0];
        // ignoring the first k elements 
        ans = min( ans , suffixMax[k] - suffixMin[k]);
        
        for(int i=1;i < n-k;i++)
        {
            int minval = min(premin , suffixMin[i+k]);
            int maxval = max(premax , suffixMax[i+k]);
            ans = min(ans , maxval - minval);
            premax = max(premax , arr[i]);
            premin = min(premin , arr[i]);

        }
        
        // ignoring the last k ements 
        ans = min(ans  , premax - premin);
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.minimizeDifference(n, k, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends