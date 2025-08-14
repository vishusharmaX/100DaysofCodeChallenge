class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char>st;
        string t;
        for(int i = 0; i < S.length(); i++){
            st.push(S[i]);
        }
        
        while(!st.empty()){
            t += st.top();
            st.pop();
        }
        
        return t;
    }
};