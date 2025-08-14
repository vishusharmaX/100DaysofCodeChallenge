// function Template for C++

class Solution {
  public:
    
    void solve(queue<int>&q,queue<int>&nq){
        if(q.size() == 1){
            nq.push(q.front());
            return;
        }
        int ans = q.front();
        q.pop();
        solve(q,nq);
        nq.push(ans);
        
    }
    
    queue<int> reverseQueue(queue<int> &q) {
        // code here.
        queue<int>nq;
        solve(q,nq);
        return nq;
        
    }
};