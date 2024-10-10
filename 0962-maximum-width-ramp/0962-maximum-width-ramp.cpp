class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = 0; i < n ; i++){
            for(int j = i; j < n; j++){
                if(nums[i] <= nums[j]){
                    maxi = max(maxi,j-i);
                }
            }
        }

        return maxi;

    }
};