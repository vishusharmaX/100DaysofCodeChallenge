class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        int n = nums.size();
        int ans;
        for(int i = 0 ; i < nums.size() ; i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second > n/2){
                ans = it.first;
            }
        }
        return ans;
    }
};