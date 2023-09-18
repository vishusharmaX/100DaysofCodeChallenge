//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    
	    int largest = arr[0];
	    for(int i = 0 ; i < n ; i++){
	        if(arr[i] > largest){
	            largest = arr[i];
	        }
	    }
	    
	    int ssmallest = -1;
	    for(int i = 0 ; i < n ; i++){
	        if(arr[i] > ssmallest && arr[i]!=largest ){
	            ssmallest = arr[i];
	        }
	    }
	    return ssmallest;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends