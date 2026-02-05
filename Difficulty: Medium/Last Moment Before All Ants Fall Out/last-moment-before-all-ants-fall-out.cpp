class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // code here
        int cnt  = 0;
        
        for(int i = 0; i < left.size(); i++){
            cnt = max(cnt, left[i]);
        }
        for(int i = 0; i < right.size(); i++){
            cnt = max(cnt, n-right[i]);
        }
        
        return cnt;
        
    }
};