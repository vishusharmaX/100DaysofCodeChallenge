//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {  
       vector<int>ans;
       
        
        
       int head=0;
       int tail=0;
      
       int sum=0;
       for(int head=0;head<n;head++){
           
           sum+=arr[head];
           while(sum>s){
               sum=sum-arr[tail];
               tail++;
           }
           if(sum==s&&head>=tail){
           ans.push_back(tail+1);
           ans.push_back(head+1);
              return ans;
           }
       }
       
       ans.push_back(-1);
       return ans;
    
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends