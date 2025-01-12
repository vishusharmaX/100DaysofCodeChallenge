class Solution {
public:
    bool canBeValid(string s, string locked) {
        int cnt=0;
        stack<pair<char,int>> st;
        for(int i=0;i<s.size();i++){
            if(locked[i]=='0'){
                cnt++;
            }
            else{
                if(s[i]==')'){
                    if(st.empty()){
                        if(cnt>0) cnt--;
                        else return false;
                    }
                    else{
                        st.pop();
                    }
                }
                else{
                    st.push({s[i],cnt});
                }
            }
        }
        while(!st.empty()){
            if(cnt>st.top().second){
                cnt--;
                st.pop();
            }
            else return false;
        }
        if(cnt%2==0) return true;
        else return false;
    }
};