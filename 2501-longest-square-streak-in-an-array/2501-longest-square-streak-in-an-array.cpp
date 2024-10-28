class Solution {
public:
    int longestSquareStreak(vector<int>& nums) 
    {
        unordered_map<int, int>mp;
        sort(nums.begin(), nums.end());
        int res = -1;
        for(int num: nums) 
        {
            int root = sqrt(num);
            if(root * root == num && mp.find(root) != mp.end()) 
            {
                mp[num] = mp[root] + 1;
                res = max(res, mp[num]);
            } 
            else 
                mp[num] = 1;
        }
        return res;
    }
};