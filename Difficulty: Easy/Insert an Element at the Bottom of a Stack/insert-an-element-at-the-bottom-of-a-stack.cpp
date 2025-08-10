// User function Template for C++

class Solution {
public:
    void solve(stack<int>&st, int size, int cnt, int x){
        if(cnt == size){
            st.push(x);
            return;
        }
        
        int ans = st.top();
        st.pop();
        solve(st,size,cnt+1,x);
        st.push(ans);
    }  
    stack<int> insertAtBottom(stack<int> st, int x) {
        
        int cnt = 0;
        int size = st.size();
        solve(st,size,cnt,x);
        return st;
        
    }
};