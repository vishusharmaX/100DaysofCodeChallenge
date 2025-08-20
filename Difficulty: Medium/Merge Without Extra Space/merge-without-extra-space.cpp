class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
       vector<int> ans;
        
        for (auto it : a) ans.push_back(it);
        for (auto it : b) ans.push_back(it);

        int asize = a.size(); // Store original size before clearing
        sort(ans.begin(), ans.end());

        a.clear();
        b.clear();

        for (int i = 0; i < asize; i++) a.push_back(ans[i]);
        for (int i = asize; i < ans.size(); i++) b.push_back(ans[i]);
    }
};