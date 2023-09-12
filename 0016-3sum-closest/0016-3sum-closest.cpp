class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int ans = 0;
        int min = INT_MAX;
        int size = nums.size();
        for(int i = 0 ; i < size ; i++){
            int left = i+1;
            int right = size-1;
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];
                if(abs(target-sum)<min){
                    ans = sum;
                    min = abs(target-sum);
                }
                if(target == sum){
                    return sum;
                }
                else if(sum>target){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return ans;
    }
};