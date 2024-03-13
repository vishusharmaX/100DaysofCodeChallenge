class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,vector<int>>mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]].push_back(i);
        }

        sort(nums.begin(),nums.end());
        for(int i= 0 ; i < nums.size(); i++){
            if(nums[i] == target){
                if(mpp.find(nums[i]) != mpp.end()){
                    return mpp[nums[i]][0];
                }
            }
        }

        return -1;
    }
};