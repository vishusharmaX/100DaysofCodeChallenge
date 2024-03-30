class Solution {
public:
    int slidingWindow(vector<int>&nums,int k){
        
        unordered_map<int,int>mpp;
        int i = 0;
        int j = 0;
        int cnt = 0;
        int n = nums.size();

        while(j<n){
            mpp[nums[j]]++;

            while(mpp.size()>k){
                mpp[nums[i]]--;
                if(mpp[nums[i]] == 0){
                    mpp.erase(nums[i]);
                }
                i++;
            }
            cnt += j-i+1;
            j++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return slidingWindow(nums,k) - slidingWindow(nums,k-1);
    }
};