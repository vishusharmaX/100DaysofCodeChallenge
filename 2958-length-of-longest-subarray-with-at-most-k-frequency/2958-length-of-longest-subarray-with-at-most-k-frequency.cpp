class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        int i = 0; 
        int j = 0;
        int n = nums.size();
        map<int ,int > mpp;
        int maxlen = INT_MIN;
        while(j < n){

            mpp[nums[j]]++;

            while( i < j && mpp[nums[j]] > k){
                mpp[nums[i]]--;
                i++;
            }

            maxlen = max(maxlen , j-i+1);
            j++;
        }

        return maxlen;

    }
};