class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size(),i=0,j=0;
        long long maxSum=0,sum=0;
        unordered_set<int>st;
        while(i<n&&j<n){
            while(st.count(nums[i])){
                st.erase(nums[j]);
                sum-=nums[j];
                j++;
            }
            st.insert(nums[i]);
            sum+=nums[i];
            if((i-j+1)==k){
                maxSum=max(maxSum,sum);
                st.erase(nums[j]);
                sum-=nums[j];
                j++;
            }
            i++;
        }
        return maxSum;
    }
};