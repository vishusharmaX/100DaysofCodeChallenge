class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int choice = 0;
        int jumps= 0;
        for(int i = 0; i < n-1; i++){
            maxi = max(maxi,nums[i]+i);
            if(i == choice){
                choice = maxi;
                jumps++;
            }
        }
        if(choice >= n-1)return true;
        return false;
    }
};