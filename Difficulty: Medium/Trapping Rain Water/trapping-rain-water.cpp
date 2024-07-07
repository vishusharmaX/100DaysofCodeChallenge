//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int i = 0, j = n-1;
        long long prefix = 0 , suffix = 0;
        long long ans = 0;
        while(i < j){
            prefix = max(prefix,static_cast<long long>(arr[i]));
            suffix = max(suffix ,static_cast<long long>(arr[j]));
            
            if(prefix <= suffix){
                ans += (prefix-arr[i]);
                i++;
            }
            else{
                ans+= (suffix-arr[j]);
                j--;
            }
            
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends