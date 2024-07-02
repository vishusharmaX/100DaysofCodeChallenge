class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mpp;
        vector<int>ans;
        for(auto it : nums1){
            mpp[it]++;
        }
        for(auto it: nums2){
            if(mpp[it] > 0){
                ans.push_back(it);
                mpp[it]--;
            }
        }

        return ans;
    }
};