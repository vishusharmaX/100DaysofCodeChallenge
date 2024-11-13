#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    long long countFairPairs(std::vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end()); 
    long long  n = nums.size();
    long long  count = 0;
    
    for (int i = 0; i < n; ++i) {
       
        int min_val = lower - nums[i];
        int max_val = upper - nums[i];
        
        
        auto low = lower_bound(nums.begin() + i + 1, nums.end(), min_val);
       
        auto up = upper_bound(nums.begin() + i + 1, nums.end(), max_val);

        
        count += up - low;
    }
    
    return count;
    }
};