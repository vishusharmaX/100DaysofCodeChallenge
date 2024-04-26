class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int pre = 1 , suff = 1;
        int n = nums.size();
        for(int i = 0 ; i< nums.size(); i++){

            if(pre == 0)pre = 1;
            if(suff == 0) suff = 1;

            pre = pre*nums[i];
            suff = suff*nums[n-i-1];

            maxi = max(maxi,max(suff,pre));
        }   
        return maxi;
    }
};