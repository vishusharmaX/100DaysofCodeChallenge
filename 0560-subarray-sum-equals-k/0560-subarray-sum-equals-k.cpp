class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;

        int ans = 0 ;
        int sum = 0;
        mpp.insert({0,1});
        for(int i =0 ; i < nums.size(); i++){
            sum = sum + nums[i];
            if(mpp.find(sum-k) != mpp.end()){
                ans += mpp[sum-k];
            }
            
            mpp[sum]++;
        }
        return ans;
    }
};