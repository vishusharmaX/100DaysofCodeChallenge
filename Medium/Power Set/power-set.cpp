//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void solve(string s, vector<string>& ans, string show, int ind) {
        if (ind >= s.length()) {
           if (!show.empty()) {
                ans.push_back(show);
            }
            return;
        }

        solve(s, ans, show + s[ind], ind + 1);

        solve(s, ans, show, ind + 1);
    }

    vector<string> AllPossibleStrings(string s) {
        vector<string> ans;
        string show = "";
        solve(s, ans, show, 0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends