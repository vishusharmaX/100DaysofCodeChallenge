//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
      vector<string>ans;
      string s = "";
      for(int i = 0;i < str.size(); i++){
          if(str[i] == '.'){
              ans.push_back(s);
              s = "";
          }
          else{
              s+=str[i];
          }
      }
      ans.push_back(s);
      
      reverse(ans.begin(),ans.end());
      string t = "";
      for(int i = 0;i < ans.size(); i++){
          t+=(ans[i]);
         if(i != ans.size()-1){
             t+='.';
         }
      }
      return t;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends