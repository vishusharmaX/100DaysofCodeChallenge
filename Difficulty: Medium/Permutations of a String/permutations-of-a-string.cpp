class Solution {
  public:
    void solve(string s , string t, vector<string>&temp){
        map<char,int>mpp;
        
        if(s.length() == 0){
            temp.push_back(t);
            return;
        }
        
        for(int i = 0; i < s.length(); i++){
            if(mpp.find(s[i]) == mpp.end()){
                mpp[s[i]]++;
                string newip = s.substr(0,i) + s.substr(i+1);
                string newop = t + s[i];
                solve(newip,newop,temp);
            }
        }
        
    }
  
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string>temp;
        solve(s,"",temp);
        return temp;
        
    }
};
