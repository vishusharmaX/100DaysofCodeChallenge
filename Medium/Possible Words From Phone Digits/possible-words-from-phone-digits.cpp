//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void solve(int a[], string output, int ind, string mapping[], vector<string> &ans, int n) {

        if (ind >= n) {
            ans.push_back(output);
            return;
        }

        int number = a[ind];
        string val = mapping[number];

        for (int i = 0; i < val.length(); i++) {
            output.push_back(val[i]);
            solve(a, output, ind + 1, mapping, ans, n);
            output.pop_back();
        }
    }

    vector<string> possibleWords(int a[], int n) {
        vector<string> ans;
        string output;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(a, output, 0, mapping, ans, n);

        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends