class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int>ans(nums.size(),0);
        int k = nums.size()-1;

        int i = 0 , j = nums.size()-1;

        while(i <= j){
            int lsq = pow(nums[i],2);
            int rsq = pow(nums[j],2);

            if(rsq  >= lsq){
                j--;
                ans[k]=rsq;
                k--;
            }
            else if(lsq > rsq){
                i++;
                ans[k] = lsq;
                k--;
            }
            else{
                i++;
                j--;
            }
        }

        return ans;
    }
};