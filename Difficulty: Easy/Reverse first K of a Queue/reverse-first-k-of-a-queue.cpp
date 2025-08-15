class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int>st;
        queue<int>nq;
        if(k > q.size()){
           k = 0;
        }
        while(k--){
            st.push(q.front());
            q.pop();
        }
        
        while(!st.empty()){
            nq.push(st.top());
            st.pop();
        }
        while(!q.empty()){
            nq.push(q.front());
            q.pop();
        }
        
        return nq;
    }
};