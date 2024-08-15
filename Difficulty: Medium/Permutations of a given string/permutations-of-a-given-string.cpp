//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	    void solve(string s,int n ,int indx ,vector<string>&ans){
	        
	        if(indx >= n-1){
	            ans.push_back(s);
	            return;
	        }
	        set<char>mpp;
	        for(int i = indx; i < n; i++){
	            if(mpp.find(s[i]) == mpp.end()){
	                mpp.insert(s[i]);
    	            swap(s[indx], s[i]);
    	            solve(s,n,indx+1,ans);
    	            swap(s[indx], s[i]);
	                
	            }
	        } 
	       
	         
	    }
		vector<string>find_permutation(string s)
		{
		    int  n = s.size();
		    vector<string>ans;
		    sort(s.begin(), s.end());
		    solve(s,n,0,ans);
		    return ans;
		}
};




//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends