class Solution {
public:
    int solve(int l , int r,vector<int>&cumsum, vector<vector<int>>&dp){

        if(l >= r){
            return 0;
        }

        if(dp[l][r] != -1){
            return dp[l][r];
        }

        int score = 0;
        for(int mid = l ;mid <=r-1; mid++){
            int leftsum = cumsum[mid] - (l-1 >= 0  ?cumsum[l-1] : 0);
            int rightsum = cumsum[r] - cumsum[mid];

            if(leftsum < rightsum){
                score = max(score, leftsum + solve(l,mid,cumsum,dp));
            }
            else if(rightsum < leftsum){
                score = max(score, rightsum + solve(mid+1,r,cumsum,dp));
            }

            else{
                score = max({score,leftsum + solve(l,mid,cumsum,dp),rightsum + solve(mid+1,r,cumsum,dp)});
            }
        }

         return dp[l][r] = score; 

    }
    int stoneGameV(vector<int>& arr) {
        int n = arr.size();
        vector<int>cumsum(n,0);
        cumsum[0] = arr[0];

        vector<vector<int>>dp(n+1, vector<int>(n+1,-1));

        for(int i = 1; i < n; i++){
            cumsum[i] = cumsum[i-1]+arr[i];
        }

        return solve(0,n-1,cumsum,dp);
    }
};