class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int i = 0 , j = 0;
        int sum = 0;
        int mxsum = 0;
        while(j < arr.size()){
            sum += arr[j];
            while(j-i+1 > k){
                sum -= arr[i];
                i++;
            }
            mxsum = max(mxsum,sum);
            j++;
        }
        
        return mxsum;
    }
};