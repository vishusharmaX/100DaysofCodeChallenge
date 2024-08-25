class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,1);

        for(int i = 0; i < n; i++){
            int mul = 1;
            for(int j = 0; j < n; j++){
                if(i != j){
                    mul *= nums[j];
                }
            }
            ans[i] = mul;
        }


        // for(int i = 1;i<n; i++){
        //     ans[i] = ans[i-1]*nums[i-1];
        // }

        // int rp = 1;
        // for(int i = n-1; i >= 0; i--){
        //     ans[i] = ans[i]*rp;
        //     rp*=nums[i];
        // }

        return ans;
    }
};