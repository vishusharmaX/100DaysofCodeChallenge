//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int maxIndexDiff(int arr[], int n) {
        int maxDiff = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = n - 1; j > i; --j) {
                if (arr[j] >= arr[i]) {
                    maxDiff = max(maxDiff, j - i);
                    break; 
                }
            }
        }
        return maxDiff;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends