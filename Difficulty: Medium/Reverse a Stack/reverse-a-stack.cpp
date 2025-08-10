
class Solution {
  public:
    void insertatbottom(stack<int>&st, int x){
        
        if(st.empty()){
            st.push(x);
            return;
        }
        
        int ans = st.top();
        st.pop();
        insertatbottom(st,x);
        st.push(ans);
    }
  
    void reverse(stack<int> &st) {
        // code here
       if(st.empty()){
           return;
       }
       
       int element  = st.top();
       st.pop();
       
       reverse(st);
       
       insertatbottom(st,element);
       
    }
};