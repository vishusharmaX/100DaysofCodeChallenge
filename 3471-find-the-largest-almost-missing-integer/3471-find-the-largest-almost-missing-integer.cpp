class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int,int>mpp;
        int n = nums.size();
        for(auto it: nums){
            mpp[it]++;
        }
        int maxi = INT_MIN;
        if(k == 1){
            for(auto it : mpp){
                if(it.second == 1){
                    maxi = max(maxi,it.first);
                }
            }
        }
        else if(k == n){
            for (auto it : mpp) {
                maxi = max(maxi, it.first);
            }
        }

        else{
            int firstcnt = mpp[nums[0]];
            int lastcnt = mpp[nums[n-1]];
            // cout<<lastcnt<<endl;

            if(firstcnt == 1){
                maxi = max(nums[0],maxi);
            }
            if(lastcnt == 1){
                maxi = max(nums[n-1],maxi);
            }
        }

        return maxi == INT_MIN ? -1 : maxi;
    }
};