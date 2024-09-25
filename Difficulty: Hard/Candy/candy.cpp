//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minCandy(int n, vector<int> &arr) {
        // code here
        vector<int>left(n,1);
        vector<int>right(n,1);
        
        for(int i =1;i < n; i++){
            if(arr[i] > arr[i-1]){
                left[i] = left[i-1]+1;
            }
            else
                left[i] = 1;
        }
        
        for(int i = n-2; i>=0; i--){
            if(arr[i] > arr[i+1])
                right[i] = right[i+1]+1;
            else    
                right[i] = 1;
        }
        
        
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            sum = sum + max(left[i],right[i]);
        }
        
        return sum;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> ratings(N);
        for (int i = 0; i < N; i++) {
            cin >> ratings[i];
        }
        Solution obj;
        cout << obj.minCandy(N, ratings) << endl;
    }
    return 0;
}
// } Driver Code Ends