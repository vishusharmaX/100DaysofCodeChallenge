//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the largest number after k swaps.
    void solve(string &s, string &res, int start, int k){
        
        if(k == 0 || start>=s.size()-1)
            return;
        char ch = *max_element(s.begin()+start,s.end());
        for(int i=start; i<s.size() ; i++){
            
            if(s[i] > s[start] && s[start] < ch){
                swap(s[start],s[i]);
                
                if(s.compare(res) > 0){
                    res = s;
                }
                
                solve(s,res,start+1,k-1);
                swap(s[start],s[i]);
            }
            
        }
        
        solve(s,res,start+1,k);
    }
    
    string findMaximumNum(string str, int k)
    {
       // code here.
       string res = str;
       solve(str,res,0,k);
       
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