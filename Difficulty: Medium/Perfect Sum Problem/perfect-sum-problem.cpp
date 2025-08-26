class Solution {
  public:
    const int mod = 1000000007;
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        vector<vector<int>>t(n+1,vector<int>(target+1,0));
    
        for(int i = 0; i < n+1; i++){
                t[i][0] = 1;
        }
        
        for(int i = 1; i < n+1;i++){
            for(int j = 0; j < target +1;j++){
                if(arr[i-1] <= j){
                     t[i][j] = (t[i - 1][j - arr[i - 1]] + t[i - 1][j]) % mod;
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        
        
        return t[n][target];
        
        
    }
};