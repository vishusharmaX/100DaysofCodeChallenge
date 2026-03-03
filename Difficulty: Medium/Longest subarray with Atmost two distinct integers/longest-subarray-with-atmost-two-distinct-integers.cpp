class Solution {
public:
    int totalElements(vector<int> &arr) {
        unordered_map<int, int> mpp;
        int i = 0, maxlen = 0;
        
        for (int j = 0; j < arr.size(); j++) {
            mpp[arr[j]]++;
            
            while (mpp.size() > 2) {
                mpp[arr[i]]--;
                if (mpp[arr[i]] == 0) {
                    mpp.erase(arr[i]);
                }
                i++;
            }
            
            maxlen = max(maxlen, j - i + 1);
        }
        
        return maxlen;
    }
};