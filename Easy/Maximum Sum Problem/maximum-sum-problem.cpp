//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here
            if(n == 0)  
                return  0 ;
            
            vector<int> ans(n+1,0);
            
            for(int i = 0 ; i <= n ; i++){
                ans[i] = max(i,ans[i/2] + ans[i/3] + ans[i/4]);
            }
            
            return ans[n];
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
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends