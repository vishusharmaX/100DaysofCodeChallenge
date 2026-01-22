class Solution {
public:
    long long subarrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        stack<int> st;

        // ---------- MAX contribution ----------
        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || nums[st.top()] < nums[i])) {
                int mid = st.top(); st.pop();
                int left = st.empty() ? mid + 1 : mid - st.top();
                int right = i - mid;
                ans += 1LL * nums[mid] * left * right;
            }
            st.push(i);
        }

        while (!st.empty()) st.pop();

        // ---------- MIN contribution ----------
        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || nums[st.top()] > nums[i])) {
                int mid = st.top(); st.pop();
                int left = st.empty() ? mid + 1 : mid - st.top();
                int right = i - mid;
                ans -= 1LL * nums[mid] * left * right;
            }
            st.push(i);
        }

        return ans;
    }
};
