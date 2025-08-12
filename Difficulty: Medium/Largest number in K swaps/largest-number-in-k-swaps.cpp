

class Solution {
  public:
    // Function to find the largest number after k swaps.
    void solve(string &s, int k , int start, string &res){
        if(k == 0 || start>= s.length()-1){
            return;
        }
        
        for(int i = start+1; i< s.length(); i++){
            char maxi = *max_element(s.begin()+start+1,s.end());
            if(s[start] < s[i] && s[i] == maxi){
                swap(s[start],s[i]);
                if(s.compare(res)>0){
                    res = s;
                }
                solve(s,k-1,start+1,res);
                swap(s[start],s[i]);
            }
        }
        
        solve(s,k,start+1,res);
        
    }
    
    string findMaximumNum(string& s, int k) {
        // code here.
        string res = s;
        solve(s,k,0,res);
        return res;
    }
};