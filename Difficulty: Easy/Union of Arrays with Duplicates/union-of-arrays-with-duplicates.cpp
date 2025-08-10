class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        
        set<int>st(a.begin(),a.end());
        
        for(int i = 0; i < b.size(); i++){
            st.insert(b[i]);
        }
       
       
        vector<int>ans(st.begin(),st.end());
        
        return ans;
        
    }
};