//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int>mpp;
        int ans =  0;
        int sum = 0;
        mpp[0] = 1;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == 0)
                sum -= 1;
            else
                sum+= 1;
            
            if(mpp.find(sum) != mpp.end()){
                ans += mpp[sum];
                mpp[sum]++;
            }
            else
                mpp[sum] = 1;
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
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}

// } Driver Code Ends