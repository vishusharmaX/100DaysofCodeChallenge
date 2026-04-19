class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0;  i < n-2; i++){
            if(i > 0 && nums[i-1] == nums[i])continue;
            int left = i+1;
            int right = n-1;

            int sum = -1 * nums[i];

            while(left < right){
                vector<int>temp;
                if(nums[left] + nums[right] == sum){
                    temp.push_back(nums[i]);
                     temp.push_back(nums[left]);
                      temp.push_back(nums[right]);
                    left++;
                    right--;
                    

                    while(left < right  &&  nums[left-1] == nums[left] ){
                        left++;
                    }
                    while(left < right  &&  nums[right] == nums[right+1] ){
                        right--;
                    }

                    ans.push_back(temp);
                }
                else if(nums[left] + nums[right] < sum){
                    left++;
                }
                else{
                    right--;
                }

            }
        }

        return ans;
        
    }
};