class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
       stack<char>st;
        string t = "";
        for(int i = 0; i < s.length(); i++){
           if (st.empty() || st.top() != s[i]) {
                st.push(s[i]);
            }
        }
        
        while(!st.empty()){
            t.push_back(st.top());
            st.pop();
        }
        
        reverse(t.begin(), t.end());
        return t;
    }
};