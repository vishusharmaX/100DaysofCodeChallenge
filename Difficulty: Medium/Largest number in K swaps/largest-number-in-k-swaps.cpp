//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the largest number after k swaps.
    void solve(string s, int k , string &res, int start){
        if(k == 0 || start == s.length()-1)
            return ;
        
        char ch = *max_element(s.begin()+start,s.end());
        for(int i =start+1; i < s.length();i++){
            if((s[start] < s[i]) && (s[i] >= ch)){
                swap(s[start],s[i]);
                if(s.compare(res) > 0){
                    res = s;
                }
                solve(s,k-1,res,start+1);
                swap(s[start],s[i]);
            }
        }
        
        solve(s,k,res,start+1);
        
    }
    
    string findMaximumNum(string s, int k)
    {
       // code here.
       string res = s;
       solve(s,k,res,0);
       return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}

// } Driver Code Ends