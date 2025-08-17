// User function Template for C++

class Solution {
  public:
    
    int kthLargest(vector<int> &arr, int k) {
     
         vector<int> nums;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += arr[j];
                nums.push_back(sum);
            }
        }
        
        sort(nums.rbegin(), nums.rend());
        
        return nums[k - 1];
        
    }
};