class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        int ans = 0 ;
        int sum = 0;

        for(int i = 0 ; i < n ; i++){
            sum = (sum + nums[i]) % k; 

            if(sum < 0) sum += k; 

            ans += mpp[sum]; 
            if(sum == 0) ans++; 
            mpp[sum]++; 
        }

        return ans;
    }
};