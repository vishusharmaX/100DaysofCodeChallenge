//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string ans = arr[0];
        int n = arr.size();
        
        for(int i = 0; i < n-1; i++){
            string x = compare(ans,arr[i+1]);
            if(x == ""){
                return "-1";
            }
            ans = x;
        }
        
        
        return ans;
    }
    
    string compare(string a,string b){
        int i = 0, j = 0;
        string res = "";
        while(i < a.size()&& j < b.size()){
            if(a[i] == b[j]){
                res+=a[i];
            }
            else{
                return res;
            }
            i++;
            j++;
        }
        
        return res;
    }
    
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends