class Solution {
  public:
    bool areIsomorphic(string &s, string &t) {
        // code here
        int n = s.length() , m = t.length();
        
        map<char,char>mpp1,mpp2;
        
        for(int i = 0; i < n; i++){
            
            if(mpp1.find(s[i]) == mpp1.end()){
                mpp1[s[i]] = t[i];
            }
            if(mpp2.find(t[i]) == mpp2.end()){
                mpp2[t[i]] = s[i];
            }
            
            if(mpp1[s[i]] != t[i] || mpp2[t[i]] != s[i]){
                return false;
            }
            
        }
        
        return true;
    }
};