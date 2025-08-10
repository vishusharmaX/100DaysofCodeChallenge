class Solution {
  public:
    // Function to delete middle element of a stack.
    void solve(stack<int>&s, int cnt, int size){
        if(cnt  == size/2){
            s.pop();
            return;
        }
        
        int ans = s.top();
        s.pop();
        solve(s,cnt+1,size);
        s.push(ans);
    }
    
    void deleteMid(stack<int>& s) {
        int cnt = 0;
        int n = s.size();
        solve(s,cnt,n);
    }
};