//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<string>ans;
    void solve(string &s, int indx, vector<string>&temp,unordered_set<string>&st){
        if(indx == s.size()){
            string t;
            for(int i = 0; i < temp.size(); i++){
                t+=temp[i];
                if(i != temp.size()-1)
                    t+=" ";
            }
            ans.push_back(t);
            return;
        }
        
        string word;
        for(int i = indx; i<s.size(); i++){
            word+=s[i];
            if(st.find(word)!= st.end()){
                temp.push_back(word);
                solve(s,i+1,temp,st);
                temp.pop_back();
            }
        }
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        vector<string>temp;
        unordered_set<string>st;
        for(auto it : dict){
            st.insert(it);
        }
        
        solve(s,0,temp,st);
       
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends