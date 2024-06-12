class Solution {
public:
    int solve(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;
        if (n == 1) return arr[0];

        vector<int> dp(n, 0);
        dp[0] = arr[0];
        dp[1] = max(arr[0], arr[1]);

        for (int i = 2; i < n; i++) {
            int include = dp[i-2] + arr[i];
            int exclude = dp[i-1];
            dp[i] = max(include, exclude);
        }

        return dp[n-1];
    }
        
    int rob(vector<int>& nums) {
        vector<int> temp1,temp2;
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        for(int i = 0; i < n; i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1)temp2.push_back(nums[i]);
        }

        return max(solve(temp1),solve(temp2));
    }
};