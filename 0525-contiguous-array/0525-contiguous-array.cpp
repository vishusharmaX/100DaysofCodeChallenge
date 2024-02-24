class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)nums[i]=-1;
        }
        unordered_map<int,vector<int>>m;
        int ans=0,prefix=0;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            if(prefix==0){
                ans=max(ans,i+1);
            }
            else if(m.find(prefix)!=m.end()){
                ans=max(ans,i-m[prefix][0]);
            }
            m[prefix].push_back(i);

        }
        return ans;
        
    }
};