class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {

            if (currSum < 0) {
                currSum = nums[i];
            } else {
                currSum = currSum +  nums[i];
            }

            maxi = max(maxi, currSum);
        }
        return maxi;
    }
};