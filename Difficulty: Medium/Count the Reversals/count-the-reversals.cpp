class Solution {
  public:
    int countMinReversals(string s) {
        // code here
        int n = s.length();
        if(n & 1)return -1;
        
        int ans = 0 , close = 0, open = 0;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(ch == '{'){
                open++;
            }else{
                if(open <= 0){
                    close++;
                }
                else{
                    open--;
                }
            }
        }
        
        
        ans = (int)(ceil(open/2.0) + ceil(close/2.0));
        
        
        return ans;
        
    }
};