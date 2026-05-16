class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        map<int,int>mpp;
        mpp[0] = 1;
        int currsum = 0;
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++){
            currsum += nums[i];

            if(mpp.find(currsum-k) != mpp.end()){
                cnt += mpp[currsum-k];
            }

            mpp[currsum]++;
        }

        return cnt;
    }
};