class Solution {
public:
    int findpos(vector<int> nums, int key){
        for(int i = 0 ; i <  nums.size(); i++ ){
            if(nums[i] == key){
                return i;
            }
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    
        vector<int>ans;    

        for(int i = 0 ; i < nums1.size(); i++ ){
            int element  =  nums1[i];
            int position = findpos(nums2,element);
            int val = -1;
            for(int j = position ; j < nums2.size(); j++){
                if(nums2[j] > element){
                    val = nums2[j];
                    break;
                }
                else   
                    continue;
            }
            ans.push_back(val);
        } 

        return ans;

    }
};