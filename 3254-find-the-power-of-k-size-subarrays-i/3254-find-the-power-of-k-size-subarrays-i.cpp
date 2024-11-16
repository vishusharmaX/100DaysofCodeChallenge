class Solution {
public:
    std::vector<int> resultsArray(std::vector<int>& nums, int k) {
        std::vector<int> ans;
        int n = nums.size();

        for (int i = 0; i <= n - k; ++i) {
            int maxEle = nums[i];
            bool status = true;

            for (int j = 1; j < k; ++j) {
                if (nums[i + j] != nums[i + j - 1] + 1) {
                    status = false;
                    break;
                }
                maxEle = std::max(maxEle, nums[i + j]);
            }

            ans.push_back(status ? maxEle : -1);
        }

        return ans;
    }
};