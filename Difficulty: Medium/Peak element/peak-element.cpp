class Solution {
  public:
    int peakElement(vector<int> &nums) {
        // code here
         int indx  = -1;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] > nums[i+1]){
                indx  = i ;
                break;
            }
        }
        if(indx == -1) return nums.size()-1;

        return indx;
    }
};