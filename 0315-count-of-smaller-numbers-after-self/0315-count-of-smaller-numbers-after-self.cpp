class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int>ans;
        vector<int>res(nums.size(),0);

        for(int i = nums.size()-1; i >= 0 ; i--){
            int pos  = lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
            res[i] = pos;
            ans.insert(ans.begin()+pos,nums[i]);
        }

        return res;
    }
};