//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    long long findMinDiff(vector<long long> arr, long long n, long long m){
    //code
    long long mini = LLONG_MAX;
        sort(arr.begin(),arr.end());
        for(int i = 0;i<n-m+1; i++){
            long long val = arr[i+m-1] - arr[i];
            mini = min(mini,val);
        }
        
        return mini;
    }   
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends