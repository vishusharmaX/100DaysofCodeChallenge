class Solution {
public:
    void solve(vector<int>&nums,int i, vector<int>&currsubset,vector<vector<int>>&subsets){

        if(i == nums.size()){
            subsets.push_back(currsubset);
            return;
        }

        currsubset.push_back(nums[i]);
        solve(nums,i+1,currsubset,subsets);
        currsubset.pop_back();
        solve(nums,i+1,currsubset,subsets);

    }
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>>subsets;
        vector<int>currsubset;

        solve(nums,0,currsubset,subsets);
        int res = 0;
        for(vector<int>&sub : subsets){
            int xors = 0;
            for(int num : sub){
                xors^=num;
            }
            res+=xors;
        }

        return res;
    }
};