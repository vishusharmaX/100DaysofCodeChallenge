class Solution {
  public:
    int minMoves(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        vector<int>pos(n+1,0);
        for(int i = 0; i < arr.size(); i++){
            pos[arr[i]] = i;  
        }
        
        int currlen = 1;
        int maxlen = 1;
        
        for(int i = 2; i <= n ; i++){
            
            if(pos[i] > pos[i-1]){
                currlen++;
            }
            else{
                currlen = 1;
            }
            maxlen = max(currlen,maxlen);
        }
        
        
       
        
        return n - maxlen;
    }
};