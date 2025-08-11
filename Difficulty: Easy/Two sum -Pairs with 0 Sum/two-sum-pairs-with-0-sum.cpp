class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        set<pair<int,int>> st;
        sort(arr.begin(), arr.end());
        int i = 0, j = arr.size() - 1;

        while (i < j) {
            int sum = arr[i] + arr[j];
            if (sum == 0) {
                st.insert({arr[i], arr[j]});
                i++;
                j--;
            } else if (sum < 0) {
                i++;
            } else {
                j--;
            }
        }

        vector<vector<int>> ans;
        for (auto it : st) {
            ans.push_back({it.first, it.second});
        }

        return ans;
    }
};
