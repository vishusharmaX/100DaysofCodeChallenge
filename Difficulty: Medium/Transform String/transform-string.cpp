class Solution {
  public:
    int transform(string A, string B) {
        // code here.
        int n = A.length() , m = B.length();
        if(n != m){
            return -1;
        }
        
        map<char,int>mpp;
        
        
        for(auto it : A)mpp[it]++;
        for(auto it : B){
            if(mpp.find(it) == mpp.end()){
                return -1;
            }
            else{
                mpp[it]--;
                if(mpp[it] < 0){
                    return -1;
                }
            }
        }
        
        int i = n-1, j = m-1;
        
        int cnt = 0;
        
        while( i >= 0 && j >= 0){
            
            if(A[i] == B[j]){
                i--;
                j--;
            }
            
            else{
                cnt++;
                i--;
                
            }
            
        }
        
        return cnt;
        
    }
};
