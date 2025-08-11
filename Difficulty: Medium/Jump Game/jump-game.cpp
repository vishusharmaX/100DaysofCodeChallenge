// User function Template for C++

class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
        int maxiindx = 0;
        
        for(int i = 0; i < arr.size(); i++){
            if( i > maxiindx) return false;
            maxiindx = max(maxiindx,i+arr[i]);
        }
        
        return true;
        
    }
};