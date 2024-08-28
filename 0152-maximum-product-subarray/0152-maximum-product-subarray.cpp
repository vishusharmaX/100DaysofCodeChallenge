class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double prefix = 1 , suffix = 1 ;
        double ans = INT_MIN;
        int n = nums.size();
        for(int  i = 0 ; i < n ; i++){

            if(prefix == 0) prefix  =1;
            if(suffix == 0) suffix  =1;

            prefix = prefix * nums[i];
            suffix = suffix * nums[n-i-1];

            ans = max(ans,max(prefix,suffix));

        }
        return ans;

    }
};