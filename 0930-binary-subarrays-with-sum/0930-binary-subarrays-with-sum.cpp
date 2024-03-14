class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res = 0;
        int prefixsum = 0;
        unordered_map<int,int>mpp;
         mpp[0] = 1;
        for(int i = 0 ; i < nums.size(); i++){
            prefixsum += nums[i];

            if(mpp.find(prefixsum- goal) != mpp.end()){
                res += mpp[prefixsum-goal]; 
            }
            mpp[prefixsum]++;
        }

        return res;
    }
};