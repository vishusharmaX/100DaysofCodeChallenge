class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int>mpp;

        for(int i = 0; i < nums.size(); i++){
            
            int leftval = target-nums[i];

            if(mpp.find(leftval) != mpp.end()){
                return {i,mpp[leftval]};
            }

            mpp[nums[i]] = i;
        }    

        return {};
    }
};