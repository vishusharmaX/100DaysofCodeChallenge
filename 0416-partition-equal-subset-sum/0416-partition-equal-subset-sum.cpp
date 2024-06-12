class Solution {
public:
    bool solve(vector<int>&nums,int indx,int target, int n){

        if(indx >= n || target < 0){
            return  false;
        }

            if(target == 0)
               return true;
        
        

        
        bool include = solve(nums,indx+1,target-nums[indx],n);
        bool exclude = solve(nums,indx+1,target,n);

        return include or exclude;

    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for(int i = 0 ; i < n; i++)
            total += nums[i];
        
        if(total & 1)
            return false;

        int target = total/2;

        return solve(nums,0,target,n);
    }
};