class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n - 1;
        int prefix = 0;
        int suffix = 0;
        int ans = 0;

        while (i < j) {
            prefix = max(prefix, height[i]);
            suffix = max(suffix, height[j]);

            if (prefix <= suffix) {
                ans += prefix - height[i];
                i++;
            } else {
                ans += suffix - height[j];
                j--;
            }
        }

        return ans;
    }
};
