class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
        stack<char>st;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            
            if(ch == '(' || ch == '+' || ch == '-' ||ch== '*' || ch == '/'){
                st.push(ch);
            }
            
            else{
                if(ch == ')'){
                    bool flag = true;
                    while(st.top() != '('){
                        char top = st.top();
                        st.pop();
                        if(top == '+' || top == '-' ||top== '*' || top == '/'  ){
                            flag = false;
                        }
                    }
                        
                    if(flag == true) return true;
                    st.pop();
                }
                
            }
        }
        
        return false;
        
        
    }
};
