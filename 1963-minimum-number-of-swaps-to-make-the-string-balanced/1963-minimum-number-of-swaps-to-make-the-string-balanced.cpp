class Solution {
public:
    int minSwaps(string s) {
        stack<int>st;
        for(int i = 0; i < s.length(); i++){
            char ch  = s[i];
            if(ch == '['){
                st.push(ch);
            }else{
                if(st.empty() || st.top() == ']'){
                    st.push(ch);
                }else{
                    st.pop();
                }
            }
        }

        int size = st.size();
        int ans = size/2;
        return (ans+1)/2;
    }
};