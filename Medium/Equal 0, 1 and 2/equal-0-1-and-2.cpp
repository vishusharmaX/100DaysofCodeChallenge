//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    long long getSubstringWithEqual012(string str) {
        // code here
        int ans = 0 ;
        
        int c0 = 0;
        int c1 = 0;
        int c2 = 0;
       
        unordered_map<string,int>mpp;
        mpp["0#0"] =  1;
        for(int i = 0; i < str.length(); i++){
            if(str[i] == '0') c0++;
            else if(str[i] == '1') c1++;
            else
                c2++;
                
           string p = to_string(c1 - c0) + "#" + to_string(c2-c1);
            ans += mpp[p];
            mpp[p]++;
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
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.getSubstringWithEqual012(s)<<endl;
	}
    return 0;
}

// } Driver Code Ends