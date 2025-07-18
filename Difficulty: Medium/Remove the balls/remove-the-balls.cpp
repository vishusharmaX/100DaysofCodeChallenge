class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
                // code here
        stack<int> st;
        st.push(0);
        int i = 1;
        while(i < color.size()){
            int currColor = color[i];
            int currRadius = radius[i];
            if(st.empty()){
                st.push(i);
                i++;
            }else{
                int lastColor = color[st.top()];
                int lastRadius = radius[st.top()];
                if(currColor == lastColor && currRadius == lastRadius){
                    st.pop();
                }else{
                    st.push(i);
                }
                i++;
            }
        }
        return st.size();
    }
};