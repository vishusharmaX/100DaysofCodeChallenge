class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int missing = -1;

        for(int i = 0 ; i < nums.size(); i++){
            if(i != nums[i]){
                return i;
            }
        }

        return nums.size();
        
    }
};