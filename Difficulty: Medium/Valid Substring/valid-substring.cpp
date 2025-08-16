class Solution {
public:
    int maxLen(string& s) {
        stack<int> st;
        st.push(-1); // base for valid substrings
        int maxLength = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    st.push(i); // reset base
                } else {
                    int len = i - st.top();
                    maxLength = max(maxLength, len);
                }
            }
        }
        return maxLength;
    }
};
