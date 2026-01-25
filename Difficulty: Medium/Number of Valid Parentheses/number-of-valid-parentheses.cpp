class Solution {
  public:
    int solve(int  n,int open,int close){
        
        
        if(open == 0 && close == 0) return 1;
        
        int o = 0;
        
        if(open > 0){
            o = solve(n,open-1,close);
        }
        int c = 0;
        if(close > open && close > 0){
            c = solve(n,open,close-1);
        }
        
        
        return o + c;
        
    }
  
    int findWays(int n) {
        // code here
        
        if(n % 2 == 1){
            
            return 0;
        }
        
        return solve(n,n/2,n/2);
        
    }
};