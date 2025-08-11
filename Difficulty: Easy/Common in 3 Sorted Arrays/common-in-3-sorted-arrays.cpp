class Solution {
  public:
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
        map<int, int> mpp;
        vector<int> ans;

        // Use sets to avoid counting duplicates in a single array
        set<int> s1(arr1.begin(), arr1.end());
        set<int> s2(arr2.begin(), arr2.end());
        set<int> s3(arr3.begin(), arr3.end());

        for (auto it : s1) mpp[it]++;
        for (auto it : s2) {
            if (mpp.find(it) != mpp.end()) mpp[it]++;
        }
        for (auto it : s3) {
            if (mpp.find(it) != mpp.end()) mpp[it]++;
        }

        for (auto it : mpp) {
            if (it.second == 3) {
                ans.push_back(it.first);
            }
        }

        if (!ans.empty()) return ans;
        return {-1};
    }
};
