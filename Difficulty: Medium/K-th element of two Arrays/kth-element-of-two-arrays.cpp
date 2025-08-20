class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int>ans(a.begin(),a.end());
        for(auto it : b){
            ans.push_back(it);
        }
        sort(ans.begin(),ans.end());
        
        return ans[k-1];
    }
};