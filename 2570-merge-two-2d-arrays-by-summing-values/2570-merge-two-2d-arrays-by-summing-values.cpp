class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        int n = nums1.size() , m= nums2.size();
        map<int,int>mpp;
        for(auto it : nums1){
            int first = it[0];
            int second = it[1];
            if(mpp.find(first) == mpp.end()){
                mpp[first] = second;
            }else{
                mpp[first] = mpp[first] + second;
            }
        }
        for(auto it : nums2){
            int first = it[0];
            int second = it[1];
            if(mpp.find(first) == mpp.end()){
                mpp[first] = second;
            }else{
                mpp[first] = mpp[first] + second;
            }
        }
        vector<vector<int>> ans;
        ans.reserve(mpp.size());

        for (auto &it : mpp) {
            ans.push_back({it.first, it.second});
        }
        return ans;
    }
};