class Solution {
public:
    int findLongestChain(vector<vector<int>>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
       vector<int>dp(n,1); 
       int maxi = 1;
       
       for(int i = 0; i< n; i++){
           for(int j = 0; j < i; j++){
               if(nums[j][1] < nums[i][0]){
                   dp[i] = max(dp[i] , dp[j] +1);
                   maxi = max(maxi,dp[i]);
               }
           }
       }
       
       return maxi;
    }
};