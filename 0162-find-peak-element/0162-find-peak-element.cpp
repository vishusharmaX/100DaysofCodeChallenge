class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it : nums){
            mpp[it]++;
        }
        int maxi = *max_element(nums.begin(),nums.end());

        int ans = -1;
        bool flag = false;
        for(auto it : mpp){
            
            if(mpp[maxi] > 2 || it.second >2){
                flag = true;
            }

        }
        if(flag)
            return 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(maxi == nums[i]){
                return i;
            }
        }

        return 0;

    }
};