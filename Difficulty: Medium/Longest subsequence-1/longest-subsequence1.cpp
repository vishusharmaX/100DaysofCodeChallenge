
class Solution {
  public:
    int longestSubseq(vector<int> &arr) {
        // code here
        int ans = 0;
        map<int,int>mpp;
        for(int i = 0; i < arr.size(); i++){
            mpp[arr[i]] = max(mpp[arr[i]-1],mpp[arr[i]+1])+1;
            ans = max(ans, mpp[arr[i]]);
        }
        
        return ans;
        
    }
};
