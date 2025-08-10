class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        map<int,int>mpp;
        for(auto it: a){
            mpp[it]++;
        }
        
        for (int i = 0; i < b.size(); i++) {
            if (mpp[b[i]] > 0) {
                mpp[b[i]]--;
            } else {
                return false;
            }
        }
        
        return true;
        
    }
};