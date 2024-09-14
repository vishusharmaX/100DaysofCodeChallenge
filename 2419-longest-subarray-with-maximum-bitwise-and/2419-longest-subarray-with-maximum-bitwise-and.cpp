class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());  
        int len = 0, max_len = 0;

       
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == maxi) {
                len++; 
                max_len = max(max_len, len);  
            } else {
                len = 0;  
            }
        }

        return max_len;  
    }
};
