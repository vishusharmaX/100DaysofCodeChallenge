class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        stack<char>st;
        string ans ;
        for(int i = 0 ; i < n; i++){
            if(s[i] == '(' || (s[i] >='a' && s[i] <='z')){
                st.push(s[i]);
            }
            else{
                ans = "";
                while(st.top()!='('){
                    ans += st.top();
                    st.pop();
                }
                st.pop();

                for(int i = 0; i  < ans.size(); i++){
                    st.push(ans[i]);
                }
                
            }
        }
        
        return ans;
    }
};