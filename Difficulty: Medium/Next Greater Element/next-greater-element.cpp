class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int>st;
        st.push(-1);
        int n = arr.size();
        vector<int>ans(n,0);
        for(int i = n-1; i >=0 ; i--){
             while(st.top() <= arr[i] && st.top() != -1)
                st.pop();
            ans[i] = st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};