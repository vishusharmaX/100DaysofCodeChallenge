class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        int n = nums.size()-1;
        for(int i = 1; i <n ; i++){
            if(nums[i] == nums[i+1]){
                nums[i] = 2* nums[i];
                nums[i+1] = 0;
            }
        }
        
        int i = 0 , j = nums.size()-1;

        while(i <=j){
            if(nums[i] == 0 && nums[j] != 0){
                swap(nums[i] , nums[j]);
                i++;
                j--;
            }
            else if(nums[j] == 0){
                j--;
            }
            i++;
            
        }
        for(int i = 0; i <nums.size() ; i++){
            cout<<nums[i]<<" ";
        }
        
        return nums;
    }
};