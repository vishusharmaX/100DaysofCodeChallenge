//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
	public:
		long long int reverse_digit(long long int x)
		{
    		string s = to_string(x);
            reverse(s.begin(), s.end());
            long long int sum = 0 ;
            for(int i = 0 ; i < s.length(); i++){
                long long int val = s[i]-'0';
                sum = sum*10 + val;
            }
    
            return sum;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends