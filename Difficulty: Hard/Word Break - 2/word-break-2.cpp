// User function Template for C++
class Solution {
  public:
    vector<string>ans;
    bool check(string s, string t, map<string,int>mpp){
        if(mpp.find(t) == mpp.end())return false;
        
        return true;
    }
    
    void solve(string &s, int indx,string temp,map<string,int>&mpp){
        if(indx>= s.length()){
            if (!temp.empty() && temp.back() == ' ') {
                temp.pop_back();
            }
            ans.push_back(temp);
            return;
            ans.push_back(temp);
            return;
        }
        string t ;
        for(int i = indx; i<s.length(); i++){
            t += s[i];
            if(check(s,t,mpp)){
                // temp.push_back(t);
                solve(s,i+1,temp+t+" ",mpp);
                // temp.pop_back();
            }
        }
        
    }
    
    vector<string> wordBreak(vector<string>& dict, string& s) {
        // code here
        map<string,int>mpp;
        for(auto it : dict){
            mpp[it]++;
        }
        string temp;
        solve(s,0,temp,mpp);
        return ans;
    }
};