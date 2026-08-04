class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int small = nums[0];
        int largest =  nums[n-1];
        map<int,int>mpp;
        vector<int>ans;
        
        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
        }
        
        
        for(int i = small ; i <= largest; i++){
            if(mpp.find(i) == mpp.end()){
                ans.push_back(i);
            }
        }

        return ans;

    }
};