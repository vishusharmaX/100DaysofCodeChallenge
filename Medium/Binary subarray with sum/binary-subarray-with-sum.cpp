//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    int numberOfSubarrays(vector<int>& arr, int N, int target){
        // code here
        int res = 0;
        int prefixSum = 0 ;
        unordered_map<int,int>mpp;
        mpp[0] =1;
        
        for(int i = 0; i < N ; i++){
            prefixSum += arr[i];
            
            if(mpp.find(prefixSum-target) != mpp.end()){
                res+=mpp[prefixSum-target];
            }
            mpp[prefixSum]++;
        }        
        
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int target; 
        cin >> target;
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin >> arr[i];
        Solution obj;
        cout<<obj.numberOfSubarrays(arr, N, target)<<endl;
    }
    return 0;
}
// } Driver Code Ends