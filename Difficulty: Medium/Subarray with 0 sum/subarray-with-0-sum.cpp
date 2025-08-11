class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        map<int, int> mpp;
        int sum = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            if (sum == 0 || mpp.find(sum) != mpp.end()) {
                return true;
            }

            mpp[sum]++;
        }

        return false;
    }
};
