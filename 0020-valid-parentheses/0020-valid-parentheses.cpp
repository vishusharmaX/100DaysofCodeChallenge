class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(int i= 0 ; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' ||s[i] == '[')
                st.push(s[i]);

            else{
                if(!st.empty()){
                    char topelement = st.top();
                    if((s[i] == ')' && topelement == '('  )|| (s[i] == ']' && topelement == '[' )||(s[i] == '}' && topelement == '{' ))
                         st.pop();

                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }

        }

        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
        return true;

    }
};