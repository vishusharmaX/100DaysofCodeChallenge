//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    int n = S.length();
        
    int startwith0 = 0;
    
    
    for(int i = 0; i<n; i++){
        if(i%2 == 0){
            if(S[i] ==  '1'){
                startwith0++;
            }
        }
        else{
            if(S[i] == '0'){
                startwith0++;
            }
        }
    }
    int startwith1 = n - startwith0;
    
    return min(startwith0,startwith1);
    
}