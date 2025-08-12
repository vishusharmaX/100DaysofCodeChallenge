class Solution {
  public:
    vector<string>ans;
    
    void solve(string &s, int indx, string temp){
        if(indx >= s.length()){
            ans.push_back(temp);
            return;
        }
        map<char,int>mpp;
        for(int i = indx ; i<s.length(); i++){
            if(mpp.find(s[i]) == mpp.end()){
                mpp[s[i]]++;
                swap(s[indx],s[i]);
                solve(s,indx+1,temp+s[indx]);
                swap(s[indx],s[i]);
            }
            
            
        }
        
    }
    
    vector<string> findPermutation(string &s) {
        // Code here there
        string temp;
        solve(s,0,temp);
        return ans;
    }
};
