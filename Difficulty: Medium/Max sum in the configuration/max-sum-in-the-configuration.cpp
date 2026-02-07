class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        int maxisum = INT_MIN;
        int temp = 0 , sum = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            temp += arr[i]*i;
        }
        maxisum = temp;
        for(int i = 1; i < arr.size(); i++){
            temp = (temp - sum + arr[i-1]*n);
            maxisum = max(maxisum , temp);
        }
        
        return maxisum;
    }
};