class Solution {
public:
    bool isValid(string s) {
       
        stack<char>st;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                char check = st.top();
                if((ch == ')' && check == '(' )||(ch == '}' && check == '{') || (ch == ']' && check == '[')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }

        if(st.empty()){
            return true;
        }
        return false;
       
    }
};