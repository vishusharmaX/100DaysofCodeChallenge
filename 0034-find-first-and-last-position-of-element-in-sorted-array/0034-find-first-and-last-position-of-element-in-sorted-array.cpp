class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        int n = nums.size();
        int i =0 , j = n-1;
        while(i < n){
            if(nums[i] == target){
                first = i;
                break;
            }
            i++;
        }
        while(j>=0){
            if(nums[j] == target){
                last = j;
                break;
            }
            j--;
        }


        return {first,last};
    }
};