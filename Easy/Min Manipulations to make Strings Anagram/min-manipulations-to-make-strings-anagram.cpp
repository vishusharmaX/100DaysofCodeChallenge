//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int minManipulation (int n, string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << minManipulation (n, s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minManipulation (int N, string S1, string S2)
{
    // your code here
    unordered_map<int,int> mpp;
    
    for(auto it : S1) mpp[it]++;
    for(auto it : S2) mpp[it]--;
    int ans = 0 ;
    for(auto it : mpp) ans += abs(it.second);
    
    return ans/2;
}