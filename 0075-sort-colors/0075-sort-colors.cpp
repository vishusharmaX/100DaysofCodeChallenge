class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // int s = 0 ; int e = nums.size()-1;
        // int mid =0 ;

        // while(mid<=e){
        //     if(nums[mid]==0){
        //         swap(nums[s++],nums[mid++]);
        //     }
        //     else if(nums[mid]==1){
        //         mid++;
        //     }
        //   else{
        //        swap(nums[e--],nums[mid]);
        //    }
        // }
        // sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
            for(int j =0 ; j < n-i-1; j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j], nums[j+1]);
                }
            }
        }
        
    }
};