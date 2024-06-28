//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        string str="";
        int n=arr.size();
        for(int i=0;i<n;i++){
            checkrow(i,n,str,arr);
            if(!str.empty()){
                return str;
            }
        }
        for(int j=0;j<n;j++){
            checkcol(j,n,str,arr);
            if(!str.empty()){
                return str;
            }
        }
        return str+"-1";
        
    }
    void checkrow(int i,int n, string &str,vector<vector<int>> &arr){
        stack<int> stk;
        int l=0;int m=n-1;
        while(l<m){
            stk.push(arr[i][l]);
            if(stk.top()==arr[i][m]){
                stk.pop();
                l++;m--;
            }
            else{
                return;
            }
        }
        
            str=to_string(i)+" R";
            return;
        
    }
     void checkcol(int j,int n, string &str,vector<vector<int>> &arr){
        stack<int> stk;
        int l=0;int m=n-1;
        while(l<m){
            stk.push(arr[l][j]);
            if(stk.top()==arr[m][j]){
                stk.pop();
                l++;m--;
            }
            else{
                return;
            }
        }
        
            str=to_string(j)+" C";
            return;
        
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends