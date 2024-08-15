//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	    void solve(string s, string temp, vector<string>&ans){
	        if(s == ""){
	            ans.push_back(temp);
	            return;
	        }
	        set<char>st;
	        for(int i = 0; i < s.length();i++){
	            if(st.find(s[i]) == st.end()){
	                st.insert(s[i]);
    	            string newin = s.substr(0,i) + s.substr(i+1,s.length());
    	            string newop = temp + s[i];
    	            solve(newin,newop,ans);
	            }
	        }
	        
	        
	    }
		vector<string>find_permutation(string s)
		{
		   vector<string>ans;
		   solve(s,"",ans);
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