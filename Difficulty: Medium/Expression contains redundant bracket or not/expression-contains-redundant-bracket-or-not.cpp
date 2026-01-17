class Solution {
  public:
    bool checkRedundancy(string &s) {
        // code here
        
        stack<char>st;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                int cnt = 0;
                while(st.top() != '('){
                    char ch = st.top();
                    // cout<<ch<<endl;
                    if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
                        cnt++;
                    }
                    st.pop();
                }
                st.pop();
                
                if(cnt == 0){
                    return true;
                }
            }
        }
        
        return false;
    }
};
