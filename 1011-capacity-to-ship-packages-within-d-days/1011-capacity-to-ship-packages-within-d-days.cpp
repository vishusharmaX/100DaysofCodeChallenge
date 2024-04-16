class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int n = nums.size();
        int start = 0 ;
        int end = 0 ;
        int ans = 0; 
        for(int i = 0 ; i< n; i++){
            start = max(nums[i],start);
            end +=nums[i];
        }

        while(start <= end){
            int mid = start + (end- start)/2;
            int cnt = 1 , totalDay = 0;
            for(int i = 0 ; i < n ; i++){
                totalDay+=nums[i];
                if( totalDay > mid){
                    cnt++;
                    totalDay = nums[i];
                }
            }
            if(cnt <= days){
                ans = mid;
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }

        return ans;
    }
};