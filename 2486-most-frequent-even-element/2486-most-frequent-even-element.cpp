class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mpp;
        int n = nums.size();
        int prev = 0;
        int ans = -1;
        
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        
        for(auto it : mpp){
            if(it.second > prev && it.first % 2 == 0){
                prev = it.second;
                ans = it.first;
            }
        }
        
        return ans;
    }
};