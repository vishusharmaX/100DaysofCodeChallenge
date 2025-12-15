class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,bool>mpp;
        vector<int>ans;
        for(auto it : nums){
            if(mpp.find(it) == mpp.end()){
                mpp[it] = true;
                ans.push_back(it);
            }
        }
        nums = ans;
        return mpp.size();
       
    }
};