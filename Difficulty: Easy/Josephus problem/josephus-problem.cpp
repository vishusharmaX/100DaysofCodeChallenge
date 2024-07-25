//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
       vector<int>ans(n);
       for(int i = 0; i < n; i++){
           ans[i] = i +1;
       }
       
       int i = 0;
       while(ans.size() > 1){
           int indx = (i+k-1)%ans.size();
           ans.erase(ans.begin()+ indx);
           i = indx;
       }
       
       return ans[0];
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends