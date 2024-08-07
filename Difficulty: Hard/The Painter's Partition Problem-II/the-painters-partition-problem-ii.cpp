//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long start = 0 ;
        long long  end =  0;
        long long ans = 0;
        
        for(int i = 0 ; i <n; i++){
           if(start < arr[i])
                start = arr[i];
            end += arr[i];
        }
        
        while(start <= end){
            long long mid = start +  (end-start)/2;
            long long cnt = 1 ,time = 0;
            for(int i = 0 ; i< n ;i++){
                time+=arr[i];
                
                if(time > mid){
                    cnt++;
                    time = arr[i];
                }
            }
            
            if(cnt <= k){
                ans = mid ;
                end= mid-1;
            }
            else
                start = mid +1;
        }
        
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
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends