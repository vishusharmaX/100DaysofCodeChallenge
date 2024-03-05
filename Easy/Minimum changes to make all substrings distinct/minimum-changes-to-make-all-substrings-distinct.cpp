//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minChange(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << minChange(s) << endl;
    }
return 0;
}

// } Driver Code Ends


int minChange(string S) { 
     //complete the function here
     int n=S.size();
     unordered_set<char>st;
     for(int i=0;i<n;i++)
     {
         st.insert(S[i]);
     }
     return (n-st.size());
} 


