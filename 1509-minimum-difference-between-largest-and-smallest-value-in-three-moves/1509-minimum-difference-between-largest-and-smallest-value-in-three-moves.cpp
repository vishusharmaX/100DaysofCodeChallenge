class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n <=4)
            return 0;
        sort(nums.begin(),nums.end());
        int mini = INT_MAX;
        //case 1
        mini = min(mini,nums[n-4]-nums[0]);
        //case 2
        mini = min(mini,nums[n-3]-nums[1]);
        //case 3
        mini = min(mini,nums[n-2]-nums[2]);
        //case 4
        mini = min(mini,nums[n-1]-nums[3]);


        return mini;

    }
};