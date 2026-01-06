class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int i = 0, j = 0;
        int x = 0;
        int mxxor = 0;

        while (j < arr.size()) {
            x ^= arr[j];
            if (j - i + 1 == k) {
                mxxor = max(mxxor, x);
                x ^= arr[i];
                i++;
            }
            j++;
        }
        return mxxor;
    }
};
