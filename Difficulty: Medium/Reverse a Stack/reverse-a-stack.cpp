
class Solution {
  public:
  void solve(stack<int>&st, int ele){
      
      if(st.empty()){
          st.push(ele);
          return;
      }
      
      int ans = st.top();
      st.pop();
      solve(st,ele);
      st.push(ans);
      
  }
    void reverse(stack<int> &st) {
        // code here
        if(st.empty())return;
        
        int ele = st.top();
        st.pop();
        reverse(st);
        solve(st,ele);
        
    }
};