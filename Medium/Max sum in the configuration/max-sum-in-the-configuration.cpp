//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Your code here
        long long sum_arr=0;
        long long temp_ind_sum=0;
        for(long long i=0;i<n;i++){
            temp_ind_sum+=i*a[i];
            sum_arr+=a[i];
        }
        long long res=temp_ind_sum;
        for(long long i=1;i<n;i++){
            //using formula: temp=temp-sum+a[i-1]*n;
            temp_ind_sum=temp_ind_sum-sum_arr+(long long)a[i-1]*n;
            res=max(res,temp_ind_sum);
        }
        return res;
        
        }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends