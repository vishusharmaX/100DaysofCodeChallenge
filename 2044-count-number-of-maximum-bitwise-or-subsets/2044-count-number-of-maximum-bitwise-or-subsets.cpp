class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
     int n = nums.size();
     int max_or = accumulate(nums.begin(),nums.end(),0,bit_or<>());
     int c = 0;
     for ( int i = 0 ; i < (1 << n); i++)
     {
        int ans = 0;
        for (int bit = 0; bit < n; bit++)
        {
            if (i&(1<<bit)) ans |= nums[bit];
        } 
        c += (ans==max_or);
     }
     return c;
    }
};