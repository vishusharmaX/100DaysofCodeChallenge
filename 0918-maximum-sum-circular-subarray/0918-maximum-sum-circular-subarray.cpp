class Solution {
public:
    int solve(vector<int>& nums, int n) {
        int currSum = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {

            if (currSum < 0) {
                currSum = nums[i];
            } else {
                currSum = currSum +  nums[i];
            }

            maxi = max(maxi, currSum);
        }
        return maxi;
    }
    int maxSubarraySumCircular(vector<int>& nums) {

        int wrapSum = 0;
        int nonWrapSum = 0;
        int n = nums.size();
        if (n == 0) {
            return 0; 
        }
        nonWrapSum = solve(nums, n);
         for(int i = 0 ; i < n ; i++){
            cout<<nums[i] << " ";
        }

        if(nonWrapSum < 0)
            return nonWrapSum;
        cout<<endl;
        cout<<nonWrapSum<<endl;
        int totalSum = 0;
        for (int i = 0; i < n ; i++) {
            totalSum += nums[i];
            nums[i] = -nums[i];
            cout<<nums[i]<< " ";
        }
        cout<<totalSum<<endl;
        for(int i = 0 ; i < n ; i++){
            cout<<nums[i] << " ";
        }

        wrapSum = totalSum +solve(nums,n);
        cout<<wrapSum<<endl;

        return max(wrapSum, nonWrapSum);
    }
};