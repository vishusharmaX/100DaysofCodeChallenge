class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), [](const string& a, const string& b) {
            if (a.length() != b.length())
                return a.length() > b.length();
            return a > b;
        });
        
        return nums[k - 1];
    }
};
