class Solution {
public:
    void solve(vector<int> &nums,int target,int ind,vector<vector<int>>&ans,vector<int>&output){
            if(target == 0){
                ans.push_back(output);
                return;
            }
        
        for(int i =ind; i < nums.size();i++){
            if(i>ind && nums[i] == nums[i-1]) continue;
            if(nums[i]>target)break;
            output.push_back(nums[i]);
            solve(nums,target-nums[i],i+1,ans,output);
            output.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>output;
        solve(candidates,target,0,ans,output);
        return ans;
    }
};