class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int i = 0 ;  i < nums.size(); i++){
            s.insert(nums[i]);
        }
        nums.erase(nums.begin(),nums.end());

        for(auto i : s){
            nums.push_back(i);
        }

        return nums.size();
    }
};