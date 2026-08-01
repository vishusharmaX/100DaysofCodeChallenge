class Solution {
public:
    int solve(vector<int>&nums, int i ,int j){
        if(i > j){
            return 0;
        }

        if(i == j){
            return nums[i];
        }

        int takei = nums[i]-solve(nums,i+1,j);
        int takej = nums[j]-solve(nums,i,j-1);

        return max(takei, takej);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();

        return solve(nums, 0 , n-1) >= 0;
    }
};