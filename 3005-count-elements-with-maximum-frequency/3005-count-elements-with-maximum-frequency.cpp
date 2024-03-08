class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int maxi = INT_MIN;
        for(auto it : nums){
            mpp[it]++;
        }
        int ans = 0;
        for(auto it : mpp){
            int val = it.second;
            if(val > maxi){
                maxi = it.second;
            }
        }

        for(auto it: mpp){
            if(it.second == maxi)
                ans+=maxi;
        }

        return ans;
        
    }
};