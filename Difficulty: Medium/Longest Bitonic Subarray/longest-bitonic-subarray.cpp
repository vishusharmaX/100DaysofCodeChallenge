class Solution {
  public:
    int bitonic(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>inc(n,1);
        vector<int>dec(n,1);
        
        for(int i = 1; i < n; i++){
            if(arr[i] >= arr[i-1]){
                inc[i] = inc[i-1]+1;
            }
        }
        
        for(int i = n-2; i>=0; i--){
            if(arr[i] >= arr[i+1]){
                dec[i] = dec[i+1] +1;
            }
        }
        
        int maxlen = 0;
        for(int i = 0; i < n; i++){
            maxlen = max(maxlen,inc[i] + dec[i] -1);
        }
        
        return maxlen;
    }
};