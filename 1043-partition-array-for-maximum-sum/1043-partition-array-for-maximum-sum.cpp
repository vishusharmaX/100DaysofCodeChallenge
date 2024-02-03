class Solution {
public:
    int solve(int ind , vector<int>& arr,int k ,vector<int>&dp){
        if(ind == arr.size())return 0;
        int n = arr.size();
        int len = 0;
        int maxi = INT_MIN;
        int maxAns = INT_MIN;
        if(dp[ind] != -1)
            return dp[ind];
        for(int j = ind ; j < min(ind+k,n); j++){
             len++;
             maxi = max(maxi,arr[j]);
             int sum = maxi* len + solve(j+1,arr,k,dp);
             maxAns = max(maxAns,sum);
        }

        return dp[ind] = maxAns;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>dp(n,-1);
        return solve(0,arr,k,dp);
    }
};