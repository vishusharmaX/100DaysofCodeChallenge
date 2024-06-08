class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int sum = 0;
        mpp[0] = -1;
        for(int i = 0 ; i < nums.size(); i++){
            sum += nums[i];
            int remainder = sum%k;

            if(mpp.find(remainder) != mpp.end()){
                if(i - mpp[remainder] >=2)
                    return true;
            }
            else{
                mpp[remainder] = i;
            }
        }

        return false;
    }
};