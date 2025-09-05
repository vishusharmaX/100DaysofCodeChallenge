class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        stack<int>st;
        st.push(-1);
        vector<int>ans(arr.size(),0);
        for(int i = 0; i < arr.size(); i++){
            while(st.top() != -1 && arr[st.top()] <= arr[i]){
                st.pop();
            }
            
            ans[i] = st.top();
            st.push(i);
        }
        
        for(int i = 0; i < ans.size(); i++){
           if(ans[i] == -1){
               ans[i] = i+1;
           }else{
               ans[i] = i - ans[i];
           }
        }
        return ans;
    }
};