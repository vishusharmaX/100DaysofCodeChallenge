// User function template for C++

class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        vector<int>ans;
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
        sort(ans.begin(),ans.end());
        return ans[1];
        
    }
};