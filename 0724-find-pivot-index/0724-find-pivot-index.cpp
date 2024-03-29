class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum= 0;
        for(int i =0 ; i < nums.size(); i++){
            totalsum+=nums[i];
        }

        int leftsum=0;
        for(int i=0; i < nums.size(); i++){
            totalsum-=nums[i];
            if(totalsum==leftsum){
               return i ;
            }
            leftsum+=nums[i];
        }
        return -1;
    }
};