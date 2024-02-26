//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int arr[], int s, int e, int target){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        while(s<=e){
            int mid  = s + (e-s)/2;
            
            if(arr[mid] == target)
                return mid;
            
            else if( arr[s]<=arr[mid]){
                if(target >= arr[s] && target < arr[mid])
                    e = mid - 1;
                
                else
                  s = mid + 1;
            }
            else{
                if(target >= arr[mid] && target < arr[e])
                    s = mid + 1;
                
                else
                    e = mid -1;
            }
        }
        
        return -1;
        
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends