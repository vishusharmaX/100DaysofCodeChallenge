class Solution {
public:
    void solve(vector<int>&nums,int indx ,vector<int>&ds, vector<vector<int>>&ans){
        if(indx >= nums.size()){
            ans.push_back(ds);
            return;
        }

        solve(nums,indx+1,ds,ans);

        ds.push_back(nums[indx]);
        solve(nums,indx+1,ds,ans);
        ds.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int>ds;
         solve(nums,0,ds,ans);
         return ans;
    }   
};